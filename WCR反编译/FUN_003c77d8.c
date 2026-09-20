// FUN_003c77d8 @ 003c77d8

void FUN_003c77d8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long local_70;
  long local_68;
  undefined4 local_5c;
  long local_58;
  long local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  _objc_storeStrong(&local_58,param_1);
  lVar2 = local_58;
  if (local_58 == 0) {
    local_50 = 0;
    local_5c = 1;
  }
  else {
    local_48 = &cf_m_nsUserName;
    local_40 = &cf_m_nsUsrName;
    local_38 = &cf_userName;
    local_30 = &cf_username;
    local_28 = &cf_m_nsRealUsrName;
    local_20 = &cf_m_nsHeadImgUsrName;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,6
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_003afe84();
    _objc_retainAutoreleasedReturnValue();
    local_68 = lVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    lVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    lVar2 = local_68;
    if (lVar3 == 0) {
      lVar2 = local_58;
      FUN_003612b8(0,local_58,&cf_m_sessionInfo);
      _objc_retainAutoreleasedReturnValue();
      local_70 = lVar2;
      if (lVar2 == 0) {
        lVar3 = local_58;
        FUN_003b3da8(local_58,"m_sessionInfo");
        _objc_retainAutoreleasedReturnValue();
        lVar2 = local_70;
        local_70 = lVar3;
        (*(code *)PTR__objc_release_02578630)(lVar2);
      }
      lVar2 = local_70;
      FUN_00366324();
      _objc_retainAutoreleasedReturnValue();
      local_5c = 1;
      local_50 = lVar2;
      _objc_storeStrong(&local_70,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = lVar2;
      local_5c = 1;
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_50);
  return;
}

