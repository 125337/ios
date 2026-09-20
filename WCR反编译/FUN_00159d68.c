// FUN_00159d68 @ 00159d68

void FUN_00159d68(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar4;
  cfstringStruct *pcVar5;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  undefined8 *puVar3;
  
  puVar3 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar3,param_3);
  uVar2 = (uint)puVar3;
  FUN_0015ab30();
  uVar4 = local_18;
  if ((uVar2 & 1) == 0) {
    local_38 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar4;
    FUN_0015abcc();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
    if ((uVar4 == 0) || (uVar4 = local_48, FUN_0015aee0(), (uVar4 & 1) != 0)) {
      local_38 = 1;
    }
    else {
      FUN_00160e5c(local_40);
      uVar4 = local_48;
      FUN_00165e9c(local_48,local_28);
      puVar1 = PTR_WCRefineHelper_026ce000;
      if ((uVar4 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_n_v1Y_);
      }
      else {
        pcVar5 = &cf_ChatRoomTopMessage_SetTop_DoneToast;
        FUN_001604fc(&cf_ChatRoomTopMessage_SetTop_DoneToast,&cf__n_v);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateTopMessageInfo_0269f5d0);
      }
      local_38 = 0;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

