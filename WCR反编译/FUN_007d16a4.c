// FUN_007d16a4 @ 007d16a4

byte FUN_007d16a4(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_40;
  byte local_31;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  uVar2 = local_40;
  local_20 = &cf_setting;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1);
  _objc_retainAutoreleasedReturnValue();
  FUN_007d1c90();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar3 = local_40;
  if ((uVar2 & 1) == 0) {
    local_30 = &cf_n_;
    local_28 = &cf_Settings;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,2
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_007c8de0();
    local_31 = (byte)uVar3 & 1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    local_31 = 1;
  }
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_31 & 1;
}

