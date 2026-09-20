// FUN_01ed6148 @ 01ed6148

bool FUN_01ed6148(void)

{
  undefined *puVar1;
  undefined1 *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardSourceMode_026a8828);
  _objc_storeStrong(&local_18,0);
  return puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
}

