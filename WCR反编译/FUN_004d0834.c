// FUN_004d0834 @ 004d0834

bool FUN_004d0834(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,double param_7,double param_8)

{
  bool bVar1;
  
  bVar1 = false;
  if (((ABS(param_1 - param_5) < 0.5) && (bVar1 = false, ABS(param_2 - param_6) < 0.5)) &&
     (bVar1 = false, ABS(param_3 - param_7) < 0.5)) {
    bVar1 = ABS(param_4 - param_8) < 0.5;
  }
  return bVar1;
}

