// FUN_00239d10 @ 00239d10

void FUN_00239d10(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_b8;
  undefined *local_58;
  undefined *local_50;
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
  uVar1 = local_18;
  FUN_00236094();
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if ((uVar1 == 0) || (uVar1 = local_38[0], FUN_0022b864(), (uVar1 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setOn__0269dc80,0);
    local_3c = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_autoAcceptTransferEnabled_0269d668);
    if ((((ulong)puVar2 & 1) == 0) ||
       (puVar2 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_48,PTR_s_autoAcceptTransferProfileControl_0269d698),
       ((ulong)puVar2 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setOn__0269dc80,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ);
      local_3c = 1;
    }
    else {
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_autoAcceptTransferAllowedPersonL_0269d6a8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_b8 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        local_58 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = local_58;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_mutableCopy_0269d8a0);
      local_50 = local_b8;
      if (puVar3 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isOn_0269d560);
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeObject__0269d678,local_38[0]);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setAutoAcceptTransferAllowedPers_026a0bb8,local_50);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__sQRc6edkNl_);
      }
      else {
        puVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsObject__0269cbb8,local_38[0]);
        if (((ulong)puVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,local_38[0]);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setAutoAcceptTransferAllowedPers_026a0bb8,local_50);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__);
      }
      _objc_storeStrong(&local_50,0);
      local_3c = 0;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

