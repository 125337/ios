// FUN_00896124 @ 00896124

void FUN_00896124(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_0088fb40();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    (*DAT_028cdb90)(param_1,param_2,1);
  }
  else if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    (*DAT_028cdb90)(param_1,param_2,0);
  }
  else {
    (*DAT_028cdb90)(param_1,param_2,param_3 & 1);
  }
  return;
}

