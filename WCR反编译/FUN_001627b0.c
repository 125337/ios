// FUN_001627b0 @ 001627b0

void FUN_001627b0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_1 + 0x30;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar2;
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    FUN_00161134(uVar3,*(undefined8 *)(param_1 + 0x28));
    puVar1 = PTR_WCRefineHelper_026ce000;
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_n_v1Y_);
    }
    else {
      pcVar4 = &cf_ChatRoomTopMessage_SetTop_DoneToast;
      FUN_001604fc(&cf_ChatRoomTopMessage_SetTop_DoneToast,&cf__n_v);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateTopMessageInfo_0269f5d0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

