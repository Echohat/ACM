/*
生成树计数问题：给一副n个节点的无向图G，求一个包含n-1条边的边集使得边集的边构成一颗树，问这样的边集的数量。
度数矩阵D:n*n的矩阵。 Di,i=节点i的度数，Di,j=0(i!=j)。
邻接矩阵A:n*n的矩阵。 i与j有边相连Ai,j=1，否则Ai,j=0。
基尔霍夫矩阵M=D-A: Mi,i=i的度数，对于i不等于j，若i与j间有边相连则Mi,j=-1否则Mi,j=0。
矩阵-树定理：对于图G，它的基尔霍夫矩阵M的每个代数余子式相等，且等于G的生成树的数目。
*/
