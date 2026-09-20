// FUN_0074d8d4 @ 0074d8d4

bool FUN_0074d8d4(int param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  bool local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (param_1 == 0) {
    local_11 = puVar2 == (undefined1 *)0x0 || puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)
    ;
  }
  else if (param_1 == 1) {
    local_11 = puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1) ||
               puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
  }
  else {
    local_11 = false;
  }
  return local_11;
}

