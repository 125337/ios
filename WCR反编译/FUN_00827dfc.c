// FUN_00827dfc @ 00827dfc

void FUN_00827dfc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_c0;
  undefined *local_70;
  long local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = (undefined *)0x0;
  _objc_storeStrong(&local_50,param_1);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_2);
  if (((local_50 != (undefined *)0x0) && (local_58 != 0)) &&
     (puVar2 = local_50, FUN_0082f63c(), ((ulong)puVar2 & 1) != 0)) {
    lVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectForKey__0269e048,local_50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    lVar1 = local_58;
    if (lVar3 == 0) {
      local_48 = &cf_color;
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_backgroundColor_026ca518);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_70 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_c0 = local_70;
      }
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_38 = local_c0;
      local_40 = &cf_opaque;
      puVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isOpaque_0269f438);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_numberWithBool__0269ce60,(ulong)puVar4 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_30 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setObject_forKey__026ca9e8,puVar4,local_50);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      if (puVar2 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setOpaque__026ca9f8,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

