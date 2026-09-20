// FUN_000512a0 @ 000512a0

byte FUN_000512a0(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0004fa34();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_autoDownloadPrivateChatDefaultEn_0269d990);
    if (((ulong)puVar2 & 1) == 0) {
      puVar3 = local_40;
      FUN_0004d8bc();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_40;
      local_48 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_autoDownloadSessionRule_0269d998);
      if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        puVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
        if (puVar3 == (undefined1 *)0x0) {
          local_11 = 0;
        }
        else {
          uVar1 = local_28;
          FUN_00050d20(local_28,local_48);
          local_11 = (byte)uVar1 & 1;
        }
      }
      else {
        puVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
        if (puVar3 == (undefined1 *)0x0) {
          local_11 = 1;
        }
        else {
          uVar1 = local_28;
          FUN_00050d20(local_28,local_48);
          local_11 = ((byte)uVar1 ^ 1) & 1;
        }
      }
      local_38 = 1;
      _objc_storeStrong(&local_48,0);
    }
    else {
      uVar1 = local_28;
      FUN_0004e678();
      if ((uVar1 & 1) == 0) {
        uVar1 = local_28;
        FUN_0004e7b8(local_28,local_40);
        local_11 = (byte)uVar1 & 1;
        local_38 = 1;
      }
      else {
        local_11 = 1;
        local_38 = 1;
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

