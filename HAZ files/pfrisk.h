c     Set array dimensions

      integer MAX_FLT, MAX_SEG, MAX_INTEN, MAX_PROB, 
     1        MAX_EPS, MAX_Xcost, MAXPARAM, MAX_MAG, 
     2        MAX_DIST, MAX_N1, MAX_WIDTH, MAX_DIST1, 
     3        MAX_GRID, MAX_SYN, MAX_AMPMAG, MAX_AMPPER,
     4        MAX_AMPGM, MAX_PER, MAXDETM_DIST, MAX_DD
      integer MAXFLT_DD, MAXFLT_AS, MAX_NODE,
     1        MAX_ATTEN, MAX_FTYPE, MAX_S7


      parameter (MAX_FLT=80, MAX_SEG=300, MAX_INTEN=40, MAX_PROB=16, 
     1           MAX_EPS=10, MAX_Xcost=10, MAXPARAM=300, MAX_MAG=30, 
     2           MAX_DIST=25, MAX_N1=220, MAX_WIDTH=15, MAX_DIST1=10000, 
     3           MAX_GRID=32000, MAX_SYN=5, MAX_AMPMAG=25, MAX_AMPPER=15, 
     4           MAX_AMPGM=15, MAX_PER=501, MAXDETM_DIST=2000, MAX_DD=12) 
      parameter (MAXFLT_DD=2000, MAXFLT_AS=2000, MAX_NODE=100,
     1           MAX_ATTEN=60, MAX_FTYPE=3, MAX_S7=70000)
      
