// FUN_00430450 @ 00430450

void FUN_00430450(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *local_48;
  undefined4 local_3c;
  ulong local_38 [3];
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar2 = local_18;
  FUN_004307e0();
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if ((uVar2 == 0) || (uVar2 = local_38[0], FUN_0040a974(), (uVar2 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setOn__0269dc80,0);
    local_3c = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_keywordAutoReplyEnabled_026a0b18);
    if (((ulong)puVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setOn__0269dc80,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ_W8__uR);
      local_3c = 1;
    }
    else {
      puVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_keywordAutoReplySessionGateEnabl_026a0b20);
      uVar2 = local_38[0];
      if (((ulong)puVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setOn__0269dc80,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ);
        local_3c = 1;
      }
      else {
        uVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isOn_0269d560);
        FUN_00430b58(0,uVar2,uVar4 & 0xffffffff);
        puVar3 = PTR_WCRefineHelper_026ce000;
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isOn_0269d560);
        pcVar1 = &cf__;
        if ((uVar2 & 1) == 0) {
          pcVar1 = &cf__sQdkyJvsQ_VY;
        }
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showModernToast__0269ce78,pcVar1);
        local_3c = 0;
      }
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

