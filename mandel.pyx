#cython: boundscheck=False
#cython: cdivision=True

def mandel_cy(unsigned long n,unsigned long itermax=100,double xmin=-2,double xmax=0.5,double ymin=-1.25,double ymax=1.25):
    '''
    Mandelbrot fractal computation using Python.

    (n, n) are the output image dimensions
    itermax is the maximum number of iterations to do.
    xmin, xmax, ymin, ymax specify the region of the
    set to compute.

    Returns a list of lists of ints, representing the image matrix with
    n rows and n columns.
    '''
    cdef:
        unsigned long it, ix, iy
        double x, y
        complex z, c

    # create list containing n lists, each containing n zeros
    # (i.e. a matrix, represented as a list of lists)
    its = [ [0] * n for i in xrange(n)]
    # The data in the matrix are iterations, so 'its' is the plural of
    # IT for ITeration.


    # iterate through all matrix elements
    for ix in xrange(0, n):
        for iy in xrange(0, n):
            # compute the position (x, y) corresponding to matrix element
            x = xmin + ix * (xmax - xmin) / float(n)
            y = ymin + iy * (ymax - ymin) / float(n)
            # Need to count iterations
            it = 0
            # c is the complex number with the given
            # x, y coordinates in the complex plane, i.e. c = x + i * y
            # where i = sqrt(-1)
            c = x + y * 1j
            z, r, i = 0, 0 , 0
            # Here is the actual Mandelbrot criterion: we update z to be
            # z <- z^2 + c until |z| <= 2. We could the number of iterations
            # required. This number of iterations is the data we need to compute
            # (and plot if desired).
            while it < itermax and (z.real * z.real + z.imag * z.imag) < 4.0:
                z = z * z + c
                it += 1

            #print("ix={}, iy={}, x={}, y={}, c={}, z={}, abs(z)={}, it={}"
            #    .format(ix, iy, x, y, c, z, abs(z), it))

            # Store the result in the matrix
            its[ix][iy] = it

    return its
