// FUN_00150dc4 @ 00150dc4

void FUN_00150dc4(double param_1,undefined8 param_2,long param_3,uint param_4)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  if ((local_18 != 0) && (1.0 <= param_1)) {
    local_20 = param_3;
    if (param_3 < 0) {
      local_20 = 0;
    }
    param_1 = (double)local_20 * param_1;
    dVar2 = 0.0;
    FUN_0014d384();
    dVar3 = dVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contentOffset_0269dd18);
    dVar4 = 0.5;
    bVar1 = true;
    if (ABS(dVar3) <= 0.5) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contentOffset_0269dd18);
      bVar1 = 0.5 < ABS(dVar4 - param_1);
    }
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar2,param_1,local_18,PTR_s_setContentOffset_animated__0269ddd8,param_4 & 1);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

