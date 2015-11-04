

int *ivector(long nl, long nh);
double *dvector(long nl, long nh);
int **imatrix(long nrl, long nrh, long ncl, long nch);

void free_ivector(int *v, long nl, long nh);
void free_dvector(double *v, long nl, long nh);
void free_imatrix(int **m, long nrl, long nrh, long ncl, long nch);
