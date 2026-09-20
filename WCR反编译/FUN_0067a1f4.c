// FUN_0067a1f4 @ 0067a1f4

void FUN_0067a1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if ((lVar1 != 0) &&
     (lVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar1 != 0)) {
    FUN_00677084();
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_enter();
    if (DAT_028cbca8 == (undefined1 *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = DAT_028cbca8;
      DAT_028cbca8 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar2,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = DAT_028cbca8;
    lVar4 = local_18;
    FUN_00679c2c(local_18,local_20);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2)
    ;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar5 = DAT_028cbca8;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cbca8,PTR_s_count_0269cfe0);
    if (section_00000068.segname + 8 < puVar5) {
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cbca8,PTR_s_removeAllObjects_0269d508);
    }
    _objc_sync_exit(lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

