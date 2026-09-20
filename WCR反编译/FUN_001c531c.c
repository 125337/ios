// FUN_001c531c @ 001c531c

void FUN_001c531c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_60;
  byte local_55;
  ulong local_48;
  undefined1 auStack_40 [32];
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c8c68)(param_1,param_2);
  FUN_001e7ff4();
  if (((param_1 & 1) != 0) || (FUN_001e8090(), (param_1 & 1) != 0)) {
    _WCRChatScrollFeatureProbeBegin(auStack_40,7,local_18);
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_m_translateView);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar1;
    if (uVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar1 & 1) != 0) {
        local_55 = 0;
        uVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewModel_0269d080);
        _objc_retainAutoreleasedReturnValue();
        local_60 = uVar1;
        if ((uVar1 != 0) &&
           ((*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_isSender_0269d1b0),
           (uVar1 & 1) != 0)) {
          uVar1 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isSender_0269d1b0);
          local_55 = (byte)uVar1;
        }
        FUN_001e71ac(local_48,local_55 & 1);
        _objc_storeStrong(&local_60,0);
      }
    }
    _objc_storeStrong(&local_48,0);
    _WCRChatScrollFeatureProbeEnd(auStack_40);
  }
  return;
}

