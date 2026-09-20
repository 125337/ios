// FUN_001f29cc @ 001f29cc

void FUN_001f29cc(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_38;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_28 = 1;
  }
  else {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_textView_0269d0f8);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textView_0269d0f8);
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar2;
      if (uVar2 != 0) {
        FUN_001ecdb0(uVar2);
        FUN_001edc3c(local_30);
      }
      _objc_storeStrong(&local_30,0);
    }
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_recordButton_026a0330);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_recordButton_026a0330);
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar2;
      if (uVar2 != 0) {
        FUN_001f18bc(uVar2);
        FUN_001f1a80(local_38);
      }
      _objc_storeStrong(&local_38,0);
    }
    FUN_001f2c14(local_18);
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

