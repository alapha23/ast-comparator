/* PR c/60101 */
/* { dg-do compile } */
/* { dg-options "-O2 -Wall" } */

extern int *a, b, *c, *d;

void
foo (double _Complex *x, double _Complex *y, double _Complex *z, unsigned int l, int w)
{
  unsigned int e = (unsigned int) a[3];
  double _Complex (*v)[l][4][e][l][4] = (double _Complex (*)[l][4][e][l][4]) z;
  double _Complex (*f)[l][b][l] = (double _Complex (*)[l][b][l]) y;
  unsigned int g = c[0] * c[1] * c[2];
  unsigned int h = d[0] + c[0] * (d[1] + c[1] * d[2]);
  unsigned int i;

  for (i = 0; i < e; i++)
    {
      int j = e * d[3] + i;

      unsigned int n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11;
      float _Complex s = 0.;
      unsigned int t = 0;

      for (n0 = 0; n0 < l; n0++)
	for (n1 = 0; n1 < l; n1++)
	  for (n2 = 0; n2 < l; n2++)
	    for (n3 = 0; n3 < l; n3++)
	      for (n4 = 0; n4 < l; n4++)
		for (n5 = 0; n5 < l; n5++)
		  for (n6 = 0; n6 < l; n6++)
		    for (n7 = 0; n7 < l; n7++)
		      for (n8 = 0; n8 < l; n8++)
			for (n9 = 0; n9 < l; n9++)
			  for (n10 = 0; n10 < l; n10++)
			    for (n11 = 0; n11 < l; n11++)
			      {
				if (t % g == h)
				  s
				    += f[n0][n4][j][n8] * f[n1][n5][j][n9] * ~(f[n2][n6][w][n10]) * ~(f[n3][n7][w][n11])
				       * (+0.25 * v[0][n2][0][i][n9][1] * v[0][n3][0][i][n5][1] * v[0][n10][0][i][n4][1]
					  * v[0][n7][1][i][n8][0] * v[0][n11][1][i][n1][0] * v[0][n6][1][i][n0][0]
					  + 0.25 * v[0][n2][0][i][n9][1] * v[0][n3][0][i][n5][1] * v[0][n10][0][i][n4][1]
					  * v[0][n11][1][i][n8][0] * v[0][n6][1][i][n1][0] * v[0][n7][1][i][n0][0]
					  - 0.5 * v[0][n2][0][i][n9][1] * v[0][n3][0][i][n5][1] * v[0][n10][0][i][n4][1]
					  * v[0][n11][1][i][n8][0] * v[0][n7][1][i][n1][0] * v[0][n6][1][i][n0][0]
					  + 0.25 * v[0][n2][0][i][n9][1] * v[0][n10][0][i][n5][1] * v[0][n3][0][i][n4][1]
					  * v[0][n7][1][i][n8][0] * v[0][n6][1][i][n1][0] * v[0][n11][1][i][n0][0]
					  - 0.5 * v[0][n2][0][i][n9][1] * v[0][n10][0][i][n5][1] * v[0][n3][0][i][n4][1]
					  * v[0][n11][1][i][n8][0] * v[0][n6][1][i][n1][0] * v[0][n7][1][i][n0][0]
					  + 0.25 * v[0][n2][0][i][n9][1] * v[0][n10][0][i][n5][1] * v[0][n3][0][i][n4][1]
					  * v[0][n11][1][i][n8][0] * v[0][n7][1][i][n1][0] * v[0][n6][1][i][n0][0]
					  + 0.25 * v[0][n3][0][i][n9][1] * v[0][n2][0][i][n5][1] * v[0][n10][0][i][n4][1]
					  * v[0][n6][1][i][n8][0] * v[0][n11][1][i][n1][0] * v[0][n7][1][i][n0][0]
					  - 0.5 * v[0][n3][0][i][n9][1] * v[0][n2][0][i][n5][1] * v[0][n10][0][i][n4][1]
					  * v[0][n11][1][i][n8][0] * v[0][n6][1][i][n1][0] * v[0][n7][1][i][n0][0]
					  + 0.25 * v[0][n3][0][i][n9][1] * v[0][n2][0][i][n5][1] * v[0][n10][0][i][n4][1]
					  * v[0][n11][1][i][n8][0] * v[0][n7][1][i][n1][0] * v[0][n6][1][i][n0][0]
					  + 0.25 * v[0][n3][0][i][n9][1] * v[0][n10][0][i][n5][1] * v[0][n2][0][i][n4][1]
					  * v[0][n6][1][i][n8][0] * v[0][n7][1][i][n1][0] * v[0][n11][1][i][n0][0]
					  + 0.25 * v[0][n3][0][i][n9][1] * v[0][n10][0][i][n5][1] * v[0][n2][0][i][n4][1]
					  * v[0][n11][1][i][n8][0] * v[0][n6][1][i][n1][0] * v[0][n7][1][i][n0][0]
					  - 0.5 * v[0][n3][0][i][n9][1] * v[0][n10][0][i][n5][1] * v[0][n2][0][i][n4][1]
					  * v[0][n11][1][i][n8][0] * v[0][n7][1][i][n1][0] * v[0][n6][1][i][n0][0]
					  + 0.25 * v[0][n10][0][i][n9][1] * v[0][n2][0][i][n5][1] * v[0][n3][0][i][n4][1]
					  * v[0][n6][1][i][n8][0] * v[0][n7][1][i][n1][0] * v[0][n11][1][i][n0][0]
					  - 0.5 * v[0][n10][0][i][n9][1] * v[0][n2][0][i][n5][1] * v[0][n3][0][i][n4][1]
					  * v[0][n6][1][i][n8][0] * v[0][n11][1][i][n1][0] * v[0][n7][1][i][n0][0]
					  - 0.5 * v[0][n10][0][i][n9][1] * v[0][n2][0][i][n5][1] * v[0][n3][0][i][n4][1]
					  * v[0][n7][1][i][n8][0] * v[0][n6][1][i][n1][0] * v[0][n11][1][i][n0][0]
					  + 0.25 * v[0][n10][0][i][n9][1] * v[0][n2][0][i][n5][1] * v[0][n3][0][i][n4][1]
					  * v[0][n7][1][i][n8][0] * v[0][n11][1][i][n1][0] * v[0][n6][1][i][n0][0]
					  + 1. * v[0][n10][0][i][n9][1] * v[0][n2][0][i][n5][1] * v[0][n3][0][i][n4][1]
					  * v[0][n11][1][i][n8][0] * v[0][n6][1][i][n1][0] * v[0][n7][1][i][n0][0]
					  - 0.5 * v[0][n10][0][i][n9][1] * v[0][n2][0][i][n5][1] * v[0][n3][0][i][n4][1]
					  * v[0][n11][1][i][n8][0] * v[0][n7][1][i][n1][0] * v[0][n6][1][i][n0][0]
					  - 0.5 * v[0][n10][0][i][n9][1] * v[0][n3][0][i][n5][1] * v[0][n2][0][i][n4][1]
					  * v[0][n6][1][i][n8][0] * v[0][n7][1][i][n1][0] * v[0][n11][1][i][n0][0]
					  + 0.25 * v[0][n10][0][i][n9][1] * v[0][n3][0][i][n5][1] * v[0][n2][0][i][n4][1]
					  * v[0][n6][1][i][n8][0] * v[0][n11][1][i][n1][0] * v[0][n7][1][i][n0][0]
					  + 0.25 * v[0][n10][0][i][n9][1] * v[0][n3][0][i][n5][1] * v[0][n2][0][i][n4][1]
					  * v[0][n7][1][i][n8][0] * v[0][n6][1][i][n1][0] * v[0][n11][1][i][n0][0]
					  - 0.5 * v[0][n10][0][i][n9][1] * v[0][n3][0][i][n5][1] * v[0][n2][0][i][n4][1]
					  * v[0][n7][1][i][n8][0] * v[0][n11][1][i][n1][0] * v[0][n6][1][i][n0][0]
					  - 0.5 * v[0][n10][0][i][n9][1] * v[0][n3][0][i][n5][1] * v[0][n2][0][i][n4][1]
					  * v[0][n11][1][i][n8][0] * v[0][n6][1][i][n1][0] * v[0][n7][1][i][n0][0]
					  + 1. * v[0][n10][0][i][n9][1] * v[0][n3][0][i][n5][1] * v[0][n2][0][i][n4][1]
					  * v[0][n11][1][i][n8][0] * v[0][n7][1][i][n1][0] * v[0][n6][1][i][n0][0]
					  + 0.5 * v[0][n6][1][i][n4][1] * v[0][n2][0][i][n9][1] * v[0][n3][0][i][n5][1]
					  * v[0][n7][1][i][n1][0] * v[0][n11][1][i][n0][0] * v[0][n10][0][i][n8][0]
					  - 0.25 * v[0][n6][1][i][n4][1] * v[0][n2][0][i][n9][1] * v[0][n3][0][i][n5][1]
					  * v[0][n11][1][i][n1][0] * v[0][n7][1][i][n0][0] * v[0][n10][0][i][n8][0]
					  - 0.25 * v[0][n6][1][i][n4][1] * v[0][n2][0][i][n9][1] * v[0][n3][0][i][n5][1]
					  * v[0][n7][1][i][n8][0] * v[0][n11][1][i][n0][0] * v[0][n10][0][i][n1][0]
					  + 0.25 * v[0][n6][1][i][n4][1] * v[0][n2][0][i][n9][1] * v[0][n3][0][i][n5][1]
					  * v[0][n7][1][i][n8][0] * v[0][n11][1][i][n1][0] * v[0][n10][0][i][n0][0]
					  + 0.25 * v[0][n6][1][i][n4][1] * v[0][n2][0][i][n9][1] * v[0][n3][0][i][n5][1]
					  * v[0][n11][1][i][n8][0] * v[0][n7][1][i][n0][0] * v[0][n10][0][i][n1][0]
					  - 0.5 * v[0][n6][1][i][n4][1] * v[0][n2][0][i][n9][1] * v[0][n3][0][i][n5][1]
					  * v[0][n11][1][i][n8][0] * v[0][n7][1][i][n1][0] * v[0][n10][0][i][n0][0]
					  - 0.25 * v[0][n6][1][i][n4][1] * v[0][n2][0][i][n9][1] * v[0][n10][0][i][n5][1]
					  * v[0][n7][1][i][n1][0] * v[0][n11][1][i][n0][0] * v[0][n3][0][i][n8][0]
					  - 0.25 * v[0][n6][1][i][n4][1] * v[0][n2][0][i][n9][1] * v[0][n10][0][i][n5][1]
					  * v[0][n7][1][i][n8][0] * v[0][n11][1][i][n0][0] * v[0][n3][0][i][n1][0]);
				t++;
			      }
      int u = (j - w + b) % b;
      int q = (j >= w ? +1 : -1);
      int r = q;
      x[u] += r * s;
    }
}
