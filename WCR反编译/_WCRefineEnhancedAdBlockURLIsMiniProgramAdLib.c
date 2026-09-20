// _WCRefineEnhancedAdBlockURLIsMiniProgramAdLib @ 00f546b4

ulong _WCRefineEnhancedAdBlockURLIsMiniProgramAdLib(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar2 = local_30;
  local_28 = &cf_lib_WASplashadWorker_js;
  local_20 = &cf_lib_WAAppAd_js;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2);
  _objc_retainAutoreleasedReturnValue();
  FUN_00f53074();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return uVar2 & 0xffffffff;
}

