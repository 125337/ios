// FUN_005c75c4 @ 005c75c4

void FUN_005c75c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  uVar1 = local_40;
  FUN_005c7774();
  _objc_retainAutoreleasedReturnValue();
  local_38 = &cf_getFormatVideoPath;
  local_30 = &cf_pathForSightData;
  local_28 = &cf_pathForData;
  local_20 = &cf_pathForExistData;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_48 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,4);
  _objc_retainAutoreleasedReturnValue();
  FUN_00599978();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,uVar1);
  return;
}

