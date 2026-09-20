// FUN_003bfaf0 @ 003bfaf0

void FUN_003bfaf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_40;
  undefined *local_38;
  uint local_2c;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(puVar2,param_3);
  FUN_003c2494();
  if (((ulong)puVar2 & 1) == 0) {
    if (DAT_028ca188 != (code *)0x0) {
      (*DAT_028ca188)(local_18,local_20,local_28);
    }
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_homePinFoldedChatBoxEnabled_026a2fa0);
    if (((((ulong)puVar3 & 1) == 0) ||
        (puVar3 = local_38,
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeSessionGroupingEnabled_026a2888),
        ((ulong)puVar3 & 1) != 0)) || (local_28 == 0)) {
      local_2c = 1;
    }
    else {
      uVar4 = local_28;
      FUN_00366324();
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar4;
      FUN_003c24cc();
      bVar1 = (uVar4 & 1) != 0;
      if (bVar1) {
        FUN_003c2204(local_28);
      }
      local_2c = (uint)!bVar1;
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  else {
    if (DAT_028ca188 != (code *)0x0) {
      (*DAT_028ca188)(local_18,local_20,local_28);
    }
    local_2c = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

