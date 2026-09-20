// FUN_00605ec8 @ 00605ec8

void FUN_00605ec8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_c0;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  ulong local_48;
  ulong local_40 [3];
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_m_chatRoomContact_0269e730);
  _objc_retainAutoreleasedReturnValue();
  local_48 = 0;
  local_40[0] = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
  if ((uVar1 & 1) != 0) {
    uVar2 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_m_nsUsrName_0269d638);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_48;
    local_48 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn__0269dc80,0);
    local_4c = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_autoAcceptTransferEnabled_0269d668);
    if ((((ulong)puVar3 & 1) == 0) ||
       (puVar3 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_58,PTR_s_autoAcceptTransferProfileControl_0269d698),
       ((ulong)puVar3 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn__0269dc80,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ);
      local_4c = 1;
    }
    else {
      puVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_autoAcceptTransferAllowedGroupLi_0269d6a0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_c0 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        local_68 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = local_68;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_mutableCopy_0269d8a0);
      local_60 = local_c0;
      if (puVar4 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_removeObject__0269d678,local_48);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_setAutoAcceptTransferAllowedGrou_026a6010,local_60);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__sQRc6edk_l_);
      }
      else {
        puVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsObject__0269cbb8,local_48);
        if (((ulong)puVar3 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_addObject__0269d180,local_48);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_setAutoAcceptTransferAllowedGrou_026a6010,local_60);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__);
      }
      _objc_storeStrong(&local_60,0);
      local_4c = 0;
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

