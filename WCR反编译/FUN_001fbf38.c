// FUN_001fbf38 @ 001fbf38

byte FUN_001fbf38(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte local_70;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar2 = local_30;
  if (local_30 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar3 = local_30;
    if ((uVar2 & 1) != 0) {
      puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar3 & 1) == 0) {
        local_18 = &DAT_028c9150;
        local_20 = 0;
        _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257ae68);
        if (*local_18 + 1 != 0) {
          _dispatch_once(*local_18 + 1,local_18,local_20);
        }
        _objc_storeStrong(&local_20,0);
        local_70 = 0;
        if (DAT_028c9148 != 0) {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,DAT_028c9148)
          ;
          local_70 = (byte)uVar2;
        }
        local_21 = local_70 & 1;
      }
      else {
        local_21 = 1;
      }
      goto LAB_001fc124;
    }
  }
  local_21 = 0;
LAB_001fc124:
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

