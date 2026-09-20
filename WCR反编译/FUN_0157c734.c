// FUN_0157c734 @ 0157c734

void FUN_0157c734(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_b8;
  undefined *local_88;
  undefined *local_78;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_28 = &cf_ChatRoomContactSelectForHalfScreenViewController;
  local_20 = &cf_RoomContactSelectForHalfScreenViewController;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  FUN_01565438();
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  FUN_015671ac(puVar1,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    FUN_015611fc();
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar1;
    FUN_015671ac(puVar1,local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_48;
    local_48 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_48;
    if (local_48 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_b8 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_68 = PTR__OBJC_CLASS___UIApplication_026ce010;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
        _objc_retainAutoreleasedReturnValue();
        local_78 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_88 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_b8 = local_88;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_b8;
      if (puVar2 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_88);
        (*(code *)PTR__objc_release_02578630)(local_78);
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_rootViewController_026ca820);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      FUN_015671ac();
      _objc_retainAutoreleasedReturnValue();
      local_30 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_4c = 1;
      _objc_storeStrong(&local_60,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = puVar1;
      local_4c = 1;
    }
    _objc_storeStrong(&local_58,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_4c = 1;
    local_30 = puVar1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_30);
  return;
}

