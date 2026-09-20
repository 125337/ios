// FUN_00208b04 @ 00208b04

bool FUN_00208b04(double param_1,double param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((1.0 < param_1) && (bVar1 = false, 1.0 < param_2)) {
    bVar1 = param_2 + 1.0 < param_1;
  }
  return bVar1;
}

