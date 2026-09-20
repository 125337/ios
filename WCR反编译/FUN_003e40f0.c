// FUN_003e40f0 @ 003e40f0

void FUN_003e40f0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_90 = &cf_frida;
  local_88 = &cf_substitute;
  local_80 = &cf_libsubstrate;
  local_78 = &cf_libsubstrate_dylib;
  local_70 = &cf_DebugHierarchyFoundation;
  local_68 = &cf_libViewDebuggerSupport_dylib;
  local_60 = &cf_libMTLCapture_dylib;
  local_58 = &cf_libBacktraceRecording_dylib;
  local_50 = &cf_DanceMonkey;
  local_48 = &cf_MMBaseUtils;
  local_40 = &cf_MMBaseUtils_dylib;
  local_38 = &cf_WCRefine;
  local_30 = &cf_WCRefine_dylib;
  local_28 = &cf_ThemeBox;
  local_20 = &cf_ThemeBox_dylib;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_90,0xf
            );
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028ca440;
  DAT_028ca440 = puVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

