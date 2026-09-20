// FUN_00429fd4 @ 00429fd4

void FUN_00429fd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  undefined *local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_autoAcceptFriendEnabled_026a3780);
  if ((((ulong)puVar1 & 1) == 0) || (local_28 == 0)) {
    local_48 = 1;
    goto LAB_0042a3f4;
  }
  uVar2 = local_28;
  FUN_0042a494(local_28,local_30);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_28;
  local_50 = uVar2;
  FUN_00420fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  pcVar4 = &cf_isAddRequestContact;
  local_58 = uVar3;
  _NSSelectorFromString();
  FUN_0042a610(uVar2,pcVar4);
  uVar3 = local_28;
  if ((uVar2 & 1) == 0) {
    local_48 = 1;
  }
  else {
    pcVar4 = &cf_isVerifyRequestFromMe;
    _NSSelectorFromString();
    FUN_0042a610(uVar3,pcVar4);
    uVar2 = local_28;
    if ((uVar3 & 1) == 0) {
      pcVar4 = &cf_isMsgSendFromMe;
      _NSSelectorFromString();
      FUN_0042a610(uVar2,pcVar4);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_28;
        FUN_0042a78c(local_28,local_30);
        if ((uVar2 & 1) == 0) {
          local_48 = 1;
        }
        else {
          uVar2 = local_28;
          FUN_0042adb0(local_28,local_30,local_50);
          _objc_retainAutoreleasedReturnValue();
          local_60 = uVar2;
          FUN_0042b154();
          if ((uVar2 & 1) == 0) {
            local_48 = 1;
          }
          else {
            puVar1 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_autoAcceptFriendReplyContent_026a37d8);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar1;
            FUN_0040494c();
            _objc_retainAutoreleasedReturnValue();
            local_68 = puVar5;
            (*(code *)PTR__objc_release_02578630)(puVar1);
            puVar1 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
            if (puVar1 != (undefined *)0x0) {
              FUN_0042b4cc(puVar1,local_58,local_68);
            }
            FUN_0042b88c(local_28,local_58,local_60);
            _objc_storeStrong(&local_68,0);
            local_48 = 0;
          }
          _objc_storeStrong(&local_60,0);
        }
        goto LAB_0042a3d4;
      }
    }
    local_48 = 1;
  }
LAB_0042a3d4:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
LAB_0042a3f4:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

