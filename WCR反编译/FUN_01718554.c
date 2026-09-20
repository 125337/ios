// FUN_01718554 @ 01718554

void FUN_01718554(ulong param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong local_80;
  ulong local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  undefined4 local_48;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_getMessageContent_026b39b8);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  if ((param_1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0), param_1 == 0)) {
    local_48 = 1;
  }
  else {
    pcVar1 = "MMServiceCenter";
    _objc_getClass();
    local_50 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_s_getService__0269d170;
    pcVar2 = "CContactMgr";
    local_58 = pcVar1;
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_performSelector_withObject__026ca7c0,puVar6,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_performSelector__026ca7b8,PTR_s_getSelfContact_0269da60);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_performSelector__026ca7b8,PTR_s_m_nsUsrName_0269d638);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      _objc_storeStrong(&local_70,&cf___);
    }
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_extractAllRedeemCodesFromMessage_026b39f0,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_78 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_count_0269cfe0);
    uVar4 = local_78;
    if (uVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showToast__026b3a18,&cf__g_RgHevQQbcx);
      local_48 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = uVar4;
      uVar4 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
      if (1 < uVar4) {
        uVar3 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_reverseObjectEnumerator_0269d220);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_80;
        local_80 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar4 = local_28;
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf_hKm0R_);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_showToast__026b3a18);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_startSequentialRedeemCodes_forWX_026b39d0,local_80,local_70);
      _objc_storeStrong(&local_80,0);
      local_48 = 0;
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

