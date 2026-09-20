// FUN_017ac204 @ 017ac204

byte FUN_017ac204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = 0;
  local_68 = param_2;
  local_60 = param_1;
  _objc_storeStrong(&local_70,param_3);
  local_50 = &cf_gh_aeb4dfc0650a;
  local_48 = &cf_gh_9311478e48c5;
  local_40 = &cf_gh_d50d801459d4;
  local_38 = &cf_gh_087a48d5953f;
  local_30 = &cf_gh_f05b949e715a;
  local_28 = &cf_gh_5e6df1930762;
  local_20 = &cf_gh_0c4f2fd22f7c;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,7);
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_containsObject__0269cbb8,local_70);
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = local_60;
    (*DAT_028e4198)(local_60,local_68,local_70);
    local_51 = (byte)uVar2 & 1;
  }
  else {
    local_51 = 1;
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_51 & 1;
}

