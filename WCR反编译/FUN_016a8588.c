// FUN_016a8588 @ 016a8588

void FUN_016a8588(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong local_b0;
  uint local_a8;
  long local_98;
  long local_90;
  ulong local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  ulong local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = 0;
  _objc_storeStrong(&local_80,param_1);
  local_88 = 0;
  _objc_storeStrong(&local_88,param_2);
  local_98 = param_4;
  local_90 = param_3;
  if ((param_4 == 0) ||
     (uVar2 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0),
     uVar2 < (ulong)(param_3 + param_4))) {
    local_a8 = 1;
  }
  else {
    local_70 = local_90;
    local_78 = local_98;
    local_68 = local_90;
    local_60 = local_98;
    uVar2 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_substringWithRange__0269d138,local_90,local_98);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    uVar1 = local_80;
    if (uVar2 != 0) {
      local_58 = &cf_text;
      local_40 = local_b0;
      local_50 = &cf_loc;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                 local_90);
      _objc_retainAutoreleasedReturnValue();
      local_48 = &cf_len;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_38 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                 local_98);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_30 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    local_a8 = (uint)(uVar2 == 0);
    _objc_storeStrong(&local_b0,0);
  }
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

