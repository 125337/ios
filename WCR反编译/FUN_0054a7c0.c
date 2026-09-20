// FUN_0054a7c0 @ 0054a7c0

void FUN_0054a7c0(undefined8 param_1,undefined *param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long local_140;
  long local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined4 local_d4;
  long local_d0;
  undefined4 local_c4;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined4 local_9c;
  undefined *local_98;
  undefined4 local_8c;
  undefined *local_88;
  long local_70;
  undefined4 local_64;
  long local_60;
  undefined *local_58;
  long local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  local_60 = param_3;
  local_58 = param_2;
  if (local_50 == 0) {
    local_64 = 1;
  }
  else {
    lVar1 = local_50;
    FUN_00546750();
    _objc_retainAutoreleasedReturnValue();
    local_70 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      local_64 = 1;
    }
    else {
      local_8c = 0;
      local_9c = 10000;
      local_a8 = local_58;
      if ((long)local_58 < 0x2711) {
        local_128 = local_58;
      }
      else {
        local_128 = &DAT_00002710;
      }
      local_b0 = local_128;
      local_98 = local_128;
      if ((long)local_128 < 1) {
        local_130 = (undefined *)0x0;
      }
      else {
        local_130 = local_128;
      }
      local_b8 = local_130;
      local_88 = local_130;
      local_c4 = 0;
      local_d4 = 300;
      local_e0 = local_60;
      if (local_60 < 0x12d) {
        local_138 = local_60;
      }
      else {
        local_138 = 300;
      }
      local_e8 = local_138;
      local_d0 = local_138;
      if (local_138 < 1) {
        local_140 = 0;
      }
      else {
        local_140 = local_138;
      }
      local_f0 = local_140;
      local_c0 = local_140;
      local_48 = &cf_like;
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_130);
      _objc_retainAutoreleasedReturnValue();
      local_40 = &cf_comment;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_38 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_c0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_30 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)();
      FUN_0054e638();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_f8,0);
      local_64 = 0;
    }
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

