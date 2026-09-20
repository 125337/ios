// FUN_001fae88 @ 001fae88

void FUN_001fae88(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  ulong *puVar2;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_2);
  uVar1 = (uint)puVar2;
  FUN_001f9678();
  uVar4 = local_18;
  if ((uVar1 & 1) == 0) {
    local_30 = 1;
    goto LAB_001fb10c;
  }
  if (local_18 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar4 & 1) != 0) {
      if (DAT_028c9160 == (cfstringStruct *)0x0) {
        pcVar5 = &cf_UIVisualEffectView;
        _NSClassFromString();
        DAT_028c9160 = pcVar5;
      }
      if (DAT_028c9168 == (cfstringStruct *)0x0) {
        pcVar5 = &cf__UIVisualEffectBackdropView;
        _NSClassFromString();
        DAT_028c9168 = pcVar5;
      }
      if ((DAT_028c9160 == (cfstringStruct *)0x0) && (DAT_028c9168 == (cfstringStruct *)0x0)) {
        local_30 = 1;
        goto LAB_001fb10c;
      }
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar4;
      if (uVar4 == 0) {
LAB_001fb094:
        _objc_storeStrong(&local_38,local_18);
      }
      else {
        puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar4 & 1) == 0) goto LAB_001fb094;
      }
      FUN_001fcc94(local_38,local_20);
      if (local_38 - local_18 != 0) {
        FUN_001fcc94(local_38 - local_18,local_18,local_20);
      }
      _objc_storeStrong(&local_38,0);
      local_30 = 0;
      goto LAB_001fb10c;
    }
  }
  local_30 = 1;
LAB_001fb10c:
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

