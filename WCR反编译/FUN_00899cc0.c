// FUN_00899cc0 @ 00899cc0

byte FUN_00899cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  FUN_008a3668();
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    FUN_0088fb40();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      local_11 = 1;
      goto LAB_00899f28;
    }
    if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      local_11 = 0;
      goto LAB_00899f28;
    }
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_0088fb40();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    local_11 = 1;
  }
  else if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    local_11 = 0;
  }
  else {
    uVar4 = local_20;
    (*DAT_028cdc60)(local_20,local_28,local_30);
    local_11 = (byte)uVar4 & 1;
  }
LAB_00899f28:
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

