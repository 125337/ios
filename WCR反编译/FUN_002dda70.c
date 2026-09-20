// FUN_002dda70 @ 002dda70

void FUN_002dda70(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  byte local_ec;
  ulong local_90;
  ulong local_88;
  byte local_79;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60 [3];
  ulong local_48;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_method_026a1c58);
  if ((uVar1 & 1) != 0) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_method_026a1c58);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_60[0] = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) != 0) {
      _objc_storeStrong(&local_48,local_60[0]);
    }
    _objc_storeStrong(local_60,0);
  }
  uVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_crash_report);
  if ((uVar1 & 1) == 0) {
    (*DAT_028c9840)(local_28,local_30,local_38,local_40);
  }
  else {
    local_68 = 0;
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_arguments_026a1c60);
    if ((uVar1 & 1) != 0) {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_arguments_026a1c60);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_68;
      local_68 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_68;
    FUN_002de1e4(local_68,&cf_crashInfo);
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar1;
    FUN_002de1e4(uVar1,&cf_killSelf);
    _objc_retainAutoreleasedReturnValue();
    local_78 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
    if ((uVar1 & 1) == 0) {
      local_ec = 0;
    }
    else {
      uVar1 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_boolValue_026ca540);
      local_ec = (byte)uVar1;
    }
    local_79 = local_ec & 1;
    uVar1 = local_70;
    FUN_002de1e4(local_70,&cf_error);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    FUN_002de3e4();
    _objc_retainAutoreleasedReturnValue();
    local_88 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_70;
    FUN_002de1e4(local_70,&cf_stackTrace);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    FUN_002de3e4();
    _objc_retainAutoreleasedReturnValue();
    local_90 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    FUN_002de660(local_88,local_90,local_79 & 1);
    (*DAT_028c9840)(local_28,local_30,local_38,local_40);
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setKillSelf__026a1c68);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setKillSelf__026a1c68,0);
    }
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

