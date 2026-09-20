// FUN_003de4c0 @ 003de4c0

void FUN_003de4c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_48;
  undefined *local_40;
  ulong local_38;
  ulong local_30;
  undefined4 local_24;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 == 0) ||
     (lVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_24 = 1;
  }
  else {
    uVar2 = local_18;
    FUN_003612b8(local_18,&cf_nsTitle);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
       uVar2 == 0)) {
      uVar4 = local_18;
      FUN_003612b8(local_18,&cf_currentTitle);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_30 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_30;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
       uVar2 == 0)) {
      uVar4 = local_18;
      FUN_003612b8(local_18,&cf_titleLabel);
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar4;
      FUN_003612b8(uVar4,&cf_text);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_30 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      _objc_storeStrong(&local_38,0);
    }
    uVar2 = local_30;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((((uVar2 & 1) == 0) || (uVar2 = local_30, FUN_003deb94(), (uVar2 & 1) == 0)) ||
       (uVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_20),
       (uVar2 & 1) != 0)) {
      local_24 = 1;
    }
    else {
      FUN_00367110(local_18,&cf_nsTitle,local_20);
      local_40 = PTR_s_setTitle_forState__026caab8;
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setTitle_forState__026caab8);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,local_40,local_20,0);
      }
      uVar2 = local_18;
      FUN_003612b8(local_18,&cf_titleLabel);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setText__026caa88,local_20);
      }
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setAccessibilityLabel__0269e968);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_setAccessibilityLabel__0269e968,local_20);
      }
      _objc_storeStrong(&local_48,0);
      local_24 = 0;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

