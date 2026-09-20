// FUN_001643c8 @ 001643c8

void FUN_001643c8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  byte local_2d;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar2;
  if (lVar2 != 0) {
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      FUN_00164568(uVar3,*(undefined8 *)(param_1 + 0x30));
      local_2d = (byte)uVar3;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      FUN_00162b10(uVar3,*(undefined8 *)(param_1 + 0x30));
      local_2d = (byte)uVar3;
    }
    puVar1 = PTR_WCRefineHelper_026ce000;
    if ((local_2d & 1) != 0) {
      pcVar4 = &cf_ChatRoomTopMessage_CancelTop_DoneToast;
      FUN_001604fc(&cf_ChatRoomTopMessage_CancelTop_DoneToast,&cf__Smn_v);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateTopMessageInfo_0269f5d0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

