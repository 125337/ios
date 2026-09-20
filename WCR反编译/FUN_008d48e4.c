// FUN_008d48e4 @ 008d48e4

bool FUN_008d48e4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  undefined8 uVar5;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_5);
  uVar3 = local_18;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = false;
  if ((uVar3 & 1) != 0) {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isHidden_026ca768);
    bVar1 = false;
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_alpha_026ca4d8);
      bVar1 = false;
      if (DAT_02323c88 <= param_1) {
        dVar4 = DAT_02323c88;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bounds_026ca548);
        _CGRectGetWidth(param_1,dVar4);
        uVar5 = 0x3ff0000000000000;
        bVar1 = false;
        if (1.0 <= param_1) {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bounds_026ca548);
          _CGRectGetHeight(param_1,uVar5,param_3,param_4);
          bVar1 = 1.0 <= param_1;
        }
      }
    }
  }
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

