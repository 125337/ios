// FUN_016c9bc8 @ 016c9bc8

void FUN_016c9bc8(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long local_88;
  undefined *local_80;
  long local_78;
  undefined *local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  long local_50;
  uint local_48;
  undefined *local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fileExistsAtPath__026ca630,local_30);
  lVar3 = local_30;
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = lVar3;
    local_48 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stringByDeletingLastPathComponen_0269fb90);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_30;
    local_50 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
    local_60 = lVar3;
    _objc_alloc_init();
    local_68 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setDateFormat__0269d1c8,&cf_yyyyMMdd_HHmmss);
    puVar2 = local_68;
    puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringFromDate__0269d1d8);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    for (local_78 = 1; lVar3 = local_30, puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8,
        local_78 < 1000; local_78 = local_78 + 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_stringWithFormat__0269cca8,&cf________ld___);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_50;
      local_80 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_stringByAppendingPathComponent__026cab30,puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_38;
      local_88 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_fileExistsAtPath__026ca630,lVar3);
      lVar3 = local_88;
      bVar1 = ((ulong)puVar2 & 1) == 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = lVar3;
      }
      local_48 = (uint)bVar1;
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
      if (local_48 != 0) goto LAB_016ca0d8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = lVar3;
    local_48 = 1;
LAB_016ca0d8:
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

