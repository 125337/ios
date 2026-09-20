// FUN_01c7a924 @ 01c7a924

void FUN_01c7a924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_110;
  cfstringStruct *local_e0;
  cfstringStruct *local_b8;
  char *local_78;
  cfstringStruct *local_70;
  uint local_64;
  char *local_60;
  undefined *local_58;
  char *local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  char *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_48 = (cfstringStruct *)0x0;
  local_40 = param_3;
  _objc_storeStrong(&local_48,param_4);
  pcVar2 = "MMUICommonUtil";
  _objc_getClass();
  local_58 = PTR_s_getBarButtonWithImageName_target_026b47f8;
  local_50 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_respondsToSelector__026ca818,
             PTR_s_getBarButtonWithImageName_target_026b47f8);
  if (((ulong)pcVar2 & 1) != 0) {
    if (local_30 == (cfstringStruct *)0x0) {
      local_b8 = &cf___;
    }
    else {
      local_b8 = local_30;
    }
    if (local_48 == (cfstringStruct *)0x0) {
      local_e0 = &cf___;
    }
    else {
      local_e0 = local_48;
    }
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,local_58,local_b8,local_38,local_40,2,local_e0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    local_60 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIBarButtonItem_026ce058,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    pcVar2 = local_60;
    bVar1 = ((ulong)pcVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
    }
    local_64 = (uint)bVar1;
    _objc_storeStrong(&local_60,0);
    if (local_64 != 0) goto LAB_01c7ac48;
  }
  pcVar5 = local_30;
  FUN_01c8ac6c();
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar5;
  if (pcVar5 == (cfstringStruct *)0x0) {
    pcVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    _objc_alloc();
    pcVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_110 = &cf__;
    }
    else {
      local_110 = local_48;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_initWithTitle_style_target_actio_0269cf00,local_110,0,local_38,local_40)
    ;
    local_64 = 1;
    local_28 = pcVar2;
  }
  else {
    pcVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_78 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setAccessibilityLabel__0269e968,local_48);
    pcVar2 = local_78;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    local_64 = 1;
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_70,0);
LAB_01c7ac48:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

