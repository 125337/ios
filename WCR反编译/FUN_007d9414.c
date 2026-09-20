// FUN_007d9414 @ 007d9414

void FUN_007d9414(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_d0;
  bool local_61;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50 [3];
  undefined *local_38;
  long local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  lVar1 = DAT_028ccd08;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  if ((DAT_028ccd08 == 0) || ((DAT_026f46cb & 1) != 0)) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_50[0] = (undefined *)0x0;
    if ((local_38 != (undefined *)0x0) &&
       (puVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
       puVar2 != (undefined *)0x0)) {
      puVar3 = local_38;
      FUN_007d9ec0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_50[0];
      local_50[0] = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if ((local_50[0] == (undefined *)0x0) ||
       (puVar2 = local_50[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_count_0269cfe0),
       puVar2 == (undefined *)0x0)) {
      local_28 = &cf_4_2_6_END;
      local_20 = &cf_4_2_7;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_50[0];
      local_50[0] = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      puVar2 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_mutableCopy_0269d8a0);
      local_58 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_objectForKey__0269e048,&cf_4_2_6_END);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar2 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_setObject_forKey__026ca9e8,&cf_4_2_7,&cf_4_2_6_END);
      }
      puVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_copy_0269d150);
      puVar2 = local_50[0];
      local_50[0] = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_58,0);
    }
    local_61 = local_50[0] == (undefined *)0x0;
    if (local_61) {
      local_d0 = *(undefined **)PTR____NSDictionary0___02578288;
    }
    else {
      local_d0 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_copy_0269d150);
      local_60 = local_d0;
    }
    local_61 = !local_61;
    _objc_storeStrong(&DAT_028ccd08,local_d0);
    if (local_61) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    lVar1 = DAT_028ccd08;
    DAT_026f46cb = 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = lVar1;
    _objc_storeStrong(local_50);
    _objc_storeStrong(&local_38,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = lVar1;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0,local_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

