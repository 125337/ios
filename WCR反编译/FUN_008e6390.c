// FUN_008e6390 @ 008e6390

byte FUN_008e6390(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long local_68;
  long local_60;
  long local_48;
  undefined4 local_3c;
  long local_38;
  byte local_29;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_1);
  if (local_38 == 0) {
    local_29 = 0;
    local_3c = 1;
  }
  else {
    lVar1 = local_38;
    FUN_008eb36c(local_38,PTR_s_m_uiMessageType_0269d0a8,0x7fffffffffffffff);
    lVar2 = local_38;
    local_48 = lVar1;
    FUN_008eb36c(local_38,PTR_s_m_uiAppMsgInnerType_026a14f0,0x7fffffffffffffff);
    lVar1 = local_38;
    local_60 = lVar2;
    if ((local_48 == 0x4c) || (lVar2 == 0x4c)) {
      local_29 = 1;
      local_3c = 1;
    }
    else if ((local_48 == 0x31) || ((local_48 == 0x7fffffffffffffff || (local_48 == 0x4c)))) {
      local_28 = &cf_m_nsContent;
      local_20 = &cf_content;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      FUN_008eb4dc();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      FUN_008e5574();
      _objc_retainAutoreleasedReturnValue();
      local_68 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      lVar1 = local_68;
      FUN_008eb9ec();
      local_29 = lVar1 == 0x4c;
      local_3c = 1;
      _objc_storeStrong(&local_68,0);
    }
    else {
      local_29 = 0;
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return local_29 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

