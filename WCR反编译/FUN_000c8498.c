// FUN_000c8498 @ 000c8498

void FUN_000c8498(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_68;
  char *local_60;
  char *local_58;
  undefined4 local_50;
  char *local_40;
  char *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_38 = (char *)0x0;
  local_40 = (char *)0x0;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = local_20 == 0;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0 || bVar1) {
    if (local_28 != (undefined8 *)0x0) {
      *local_28 = local_38;
    }
    if (local_30 != (undefined8 *)0x0) {
      *local_30 = local_40;
    }
    local_50 = 1;
  }
  else {
    local_58 = (char *)0x0;
    local_60 = (char *)0x0;
    uVar4 = local_18;
    FUN_000c8dd8(local_18,&local_58,&local_60);
    if ((uVar4 & 1) == 0) {
      pcVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar5;
      if (local_20 == 2) {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_repeatChatRoomIndentLeft_0269e7b0);
        pcVar6 = local_68;
        local_38 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_repeatChatRoomIndentRight_0269e7b8);
        local_40 = pcVar6;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_repeatPrivateChatIndentLeft_0269e7c0);
        pcVar6 = local_68;
        local_38 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_repeatPrivateChatIndentRight_0269e7c8);
        local_40 = pcVar6;
      }
      _objc_storeStrong(&local_68,0);
    }
    else {
      local_38 = local_58;
      local_40 = local_60;
    }
    if ((long)local_38 < 0) {
      local_38 = (char *)0x0;
    }
    if (0x32 < (long)local_38) {
      local_38 = segment_command_00000020.segname + 10;
    }
    if ((long)local_40 < 0) {
      local_40 = (char *)0x0;
    }
    if (0x32 < (long)local_40) {
      local_40 = segment_command_00000020.segname + 10;
    }
    if (local_28 != (undefined8 *)0x0) {
      *local_28 = local_38;
    }
    if (local_30 != (undefined8 *)0x0) {
      *local_30 = local_40;
    }
    local_50 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

