// FUN_01954c24 @ 01954c24

bool FUN_01954c24(double param_1,double param_2,ulong param_3)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = DAT_0232c3a8;
  dVar3 = param_1;
  dVar4 = param_2;
  _CLLocationCoordinate2DMake();
  _CLLocationCoordinate2DIsValid(dVar3,dVar4);
  bVar1 = false;
  if ((param_3 & 1) != 0) {
    bVar1 = dVar2 <= ABS(param_1) || dVar2 <= ABS(param_2);
  }
  return bVar1;
}

