// FUN_008e6734 @ 008e6734

byte FUN_008e6734(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long local_b0;
  undefined4 local_a8;
  long local_98;
  long local_90;
  byte local_81;
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
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_90 = 0;
  _objc_storeStrong(&local_90,param_1);
  local_98 = 0;
  _objc_storeStrong(&local_98,param_2);
  lVar2 = local_90;
  local_48 = &cf_tingListenItem;
  local_40 = &cf_tingCategoryItem;
  local_38 = &cf_tingChatRoomItem;
  local_30 = &cf_tingLyricsItem;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  FUN_008ebfa0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar3 = local_98;
  if (lVar2 == 0) {
    local_70 = &cf_shareListenItem;
    local_68 = &cf_shareCategoryItem;
    local_60 = &cf_shareChatRoomItem;
    local_58 = &cf_shareLyricsItem;
    local_50 = &cf_tingItem;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70,5
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_008ebfa0();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    lVar2 = local_90;
    if (lVar3 == 0) {
      local_80 = &cf_m_nsContent;
      local_78 = &cf_content;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_80
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      FUN_008eb4dc();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      FUN_008e5574();
      _objc_retainAutoreleasedReturnValue();
      local_b0 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      lVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_rangeOfString_options__0269d118,&cf_ting,1);
      if (lVar3 == 0x7fffffffffffffff) {
        lVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_rangeOfString_options__0269d118,&cf_listen,1);
        if (lVar3 == 0x7fffffffffffffff) {
          local_81 = 0;
        }
        else {
          local_81 = 1;
        }
      }
      else {
        local_81 = 1;
      }
      local_a8 = 1;
      _objc_storeStrong(&local_b0,0);
    }
    else {
      local_81 = 1;
      local_a8 = 1;
    }
  }
  else {
    local_81 = 1;
    local_a8 = 1;
  }
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_81 & 1;
}

