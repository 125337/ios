// FUN_003af744 @ 003af744

void FUN_003af744(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6,undefined8 param_7,undefined1 *param_8)

{
  ulong uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = 0;
  local_18 = param_5;
  _objc_storeStrong(&local_20);
  uVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_bounds_026ca548);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_convertRect_toView__0269ded8,*(undefined8 *)(param_5 + 0x20));
  dVar2 = param_1;
  uVar3 = param_2;
  uVar4 = param_3;
  uVar5 = param_4;
  _CGRectInset();
  uVar1 = param_5;
  _CGRectContainsPoint
            (dVar2,uVar3,uVar4,uVar5,*(undefined8 *)(param_5 + 0x28),*(undefined8 *)(param_5 + 0x30)
            );
  if ((uVar1 & 1) == 0) {
    _CGRectGetMidY(param_1,param_2,param_3,param_4);
    dVar2 = ABS(param_1 - *(double *)(param_5 + 0x30));
    if (dVar2 < **(double **)(param_5 + 0x40)) {
      **(double **)(param_5 + 0x40) = dVar2;
      **(undefined8 **)(param_5 + 0x38) = param_7;
    }
  }
  else {
    **(undefined8 **)(param_5 + 0x38) = param_7;
    **(undefined8 **)(param_5 + 0x40) = 0;
    *param_8 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

