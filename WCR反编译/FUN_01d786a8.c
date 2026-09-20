// FUN_01d786a8 @ 01d786a8

byte FUN_01d786a8(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_20;
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isHidden_026ca768);
    if ((((uVar3 & 1) != 0) ||
        ((*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_alpha_026ca4d8),
        param_1 < DAT_02323d38)) ||
       (uVar3 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isUserInteractionEnabled_026ca770),
       uVar2 = local_20, (uVar3 & 1) == 0)) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UITextField_026ce2a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITextField_026ce2a0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      uVar3 = local_20;
      if ((uVar2 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___UITextView_026ce1b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITextView_026ce1b8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
        uVar2 = local_20;
        if ((uVar3 & 1) == 0) {
          local_11 = 1;
          local_24 = 1;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_38 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEditable_026c4c78);
          local_11 = (byte)uVar2 & 1;
          local_24 = 1;
          _objc_storeStrong(&local_38,0);
        }
      }
      else {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEnabled_026a0ef0);
        local_11 = (byte)uVar2 & 1;
        local_24 = 1;
      }
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

