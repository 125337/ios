// FUN_000ba3d8 @ 000ba3d8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000ba3d8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined1 *param_8)

{
  uint uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_5;
  _objc_storeStrong(&local_30);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_convertRect_toView__0269ded8,*(undefined8 *)(param_5 + 0x20));
  uVar1 = (uint)uVar2;
  dVar3 = param_1;
  uVar2 = param_2;
  uVar4 = param_3;
  uVar5 = param_4;
  _CGRectInset();
  _CGRectContainsPoint
            (dVar3,uVar2,uVar4,uVar5,*(undefined8 *)(param_5 + 0x28),*(undefined8 *)(param_5 + 0x30)
            );
  if ((uVar1 & 1) == 0) {
    _CGRectGetMidY(param_1,param_2,param_3,param_4);
    dVar3 = ABS(param_1 - *(double *)(param_5 + 0x30));
    if (dVar3 < **(double **)(param_5 + 0x40)) {
      **(double **)(param_5 + 0x40) = dVar3;
      **(undefined8 **)(param_5 + 0x38) = param_7;
    }
  }
  else {
    **(undefined8 **)(param_5 + 0x38) = param_7;
    **(undefined8 **)(param_5 + 0x40) = 0;
    *param_8 = 1;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

