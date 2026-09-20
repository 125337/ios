// FUN_00894820 @ 00894820

byte FUN_00894820(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  byte local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_0088fb40();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    local_11 = 1;
  }
  else if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    local_11 = 0;
  }
  else {
    (*DAT_028cdad0)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  return local_11;
}

