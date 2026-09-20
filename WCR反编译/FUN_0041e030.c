// FUN_0041e030 @ 0041e030

void FUN_0041e030(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined4 local_9c;
  long local_98;
  long local_90;
  long local_88;
  long local_80 [3];
  long local_68;
  undefined8 local_60;
  long local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  _objc_storeStrong(&local_58,param_1);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_2);
  lVar1 = local_58;
  FUN_004055cc(local_58,&cf_type57Title);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_58;
  local_68 = lVar1;
  FUN_004055cc(local_58,&cf_type57ReferContent);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_58;
  local_80[0] = lVar2;
  FUN_0040cccc(local_58,&cf_stripIdentifiers);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_68;
  local_88 = lVar1;
  FUN_0041e4f8(local_68,local_60,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_80[0];
  local_90 = lVar2;
  FUN_0041e4f8(local_80[0],local_60,local_88);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_90;
  local_98 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_count_0269cfe0);
  if ((lVar2 == 0) &&
     (lVar1 = local_98, (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_count_0269cfe0),
     lVar1 == 0)) {
    local_50 = (undefined *)0x0;
    local_9c = 1;
  }
  else {
    lVar1 = local_90;
    FUN_0041ed78(local_90,local_98);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_58;
    local_a8 = lVar1;
    FUN_004055cc(local_58,&cf_type57ReferDisplay);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_68;
    local_b0 = lVar2;
    FUN_0041f424(local_68,lVar2);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if ((lVar1 == 0) ||
       (lVar1 = local_a8, (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_count_0269cfe0),
       lVar1 == 0)) {
      local_50 = (undefined *)0x0;
    }
    else {
      local_48 = &cf_content;
      local_38 = local_b8;
      local_40 = &cf_keywords;
      local_30 = local_a8;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar3;
    }
    local_9c = 1;
    _objc_storeStrong(&local_b8);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_a8,0);
  }
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(local_80,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

