// lockedChatUserNameForViewController: @ 010f0cbc

/* Function Stack Size: 0x18 bytes */

ID WCRefinePageLockGuard::lockedChatUserNameForViewController_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_70;
  cfstringStruct *local_48;
  undefined *local_40;
  undefined4 local_34;
  undefined8 local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatViewController__026aebb0,local_30);
  if (((ulong)pcVar1 & 1) == 0) {
    local_18 = (cfstringStruct *)0x0;
    local_34 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
      if (puVar2 == (undefined *)0x0) {
        local_18 = (cfstringStruct *)0x0;
        local_34 = 1;
      }
      else {
        pcVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_chatUserNameForViewController__026aebb8,local_30);
        _objc_retainAutoreleasedReturnValue();
        local_48 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_18 = (cfstringStruct *)0x0;
        }
        else {
          puVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsObject__0269cbb8,local_48);
          if (((ulong)puVar2 & 1) == 0) {
            local_70 = (cfstringStruct *)0x0;
          }
          else {
            local_70 = local_48;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = local_70;
        }
        local_34 = 1;
        _objc_storeStrong(&local_48,0);
      }
      _objc_storeStrong(&local_40,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___wcr_all_sessions__;
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

