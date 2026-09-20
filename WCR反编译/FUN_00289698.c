// FUN_00289698 @ 00289698

void FUN_00289698(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_40;
  undefined4 local_34;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == (undefined *)0x0) {
    puVar1 = *(undefined **)PTR____NSDictionary0___02578288;
    (*(code *)PTR__objc_retain_02578638)();
    local_34 = 1;
    local_28 = puVar1;
  }
  else {
    puVar1 = local_30;
    FUN_0027ac10(local_30,&cf_mediaWidth);
    puVar2 = local_30;
    local_40 = puVar1;
    FUN_0027ac10(local_30,&cf_mediaHeight);
    puVar1 = local_30;
    local_58 = puVar2;
    FUN_0027ac10(local_30,&cf_fileSize);
    puVar2 = local_30;
    local_60 = puVar1;
    FUN_0027ac10(local_30,&cf_bitrate);
    puVar1 = local_30;
    local_68 = puVar2;
    FUN_0027ac10(local_30,&cf_videoPlayDuration);
    local_70 = (undefined *)((long)puVar1 * 1000);
    if (local_70 == (undefined *)0x0) {
      puVar1 = local_30;
      FUN_0027ac10(local_30,&cf_durationMs);
      local_70 = puVar1;
    }
    local_78 = (undefined *)0x0;
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_suggestSpec_026a1808);
    if (((ulong)puVar1 & 1) != 0) {
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_suggestSpec_026a1808);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_78;
      local_78 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    if (local_78 != (undefined *)0x0) {
      puVar1 = local_78;
      FUN_0027ac10(local_78,&cf_width);
      puVar2 = local_78;
      local_80 = puVar1;
      FUN_0027ac10(local_78,&cf_height);
      puVar1 = local_80;
      if ((0 < (long)local_80) && (puVar1 = puVar2, 0 < (long)puVar2)) {
        local_40 = local_80;
        local_58 = puVar2;
      }
      puVar3 = local_78;
      local_88 = puVar2;
      FUN_0027ac10(puVar1,local_78,&cf_bitRate);
      local_90 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        puVar1 = local_78;
        FUN_0027ac10(local_78,&cf_videoBitrate);
        local_90 = puVar1;
      }
      if (local_90 != (undefined *)0x0) {
        local_68 = local_90;
      }
      puVar1 = local_78;
      FUN_0027ac10(local_90,local_78,&cf_durationMs);
      local_98 = puVar1;
      if (puVar1 != (undefined *)0x0) {
        local_70 = puVar1;
      }
    }
    if (local_60 == (undefined *)0x0) {
      puVar1 = local_30;
      FUN_00274abc();
      _objc_retainAutoreleasedReturnValue();
      local_a0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_a8 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_fileSize_026a1640);
        local_60 = puVar1;
        _objc_storeStrong(&local_a8,0);
      }
      _objc_storeStrong(&local_a0,0);
    }
    if ((local_60 == (undefined *)0x0) &&
       (puVar1 = local_68, FUN_0028dfb8(local_68,local_70), local_60 = puVar1,
       puVar1 == (undefined *)0x0)) {
      puVar1 = local_68;
      FUN_00292f78(local_68,local_70);
      local_60 = puVar1;
    }
    puVar1 = local_40;
    FUN_0027b474(local_40,local_58);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_60;
    local_b0 = puVar1;
    FUN_0028e088();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_b8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar1;
    if (local_b0 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_setObject_forKeyedSubscript__0269d248,local_b0,&cf_quality);
    }
    if (local_b8 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_setObject_forKeyedSubscript__0269d248,local_b8,&cf_size);
    }
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_width);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_58);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_height);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
               local_60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_fileSize);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
               local_70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_durationMs);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
               local_68);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_bitrate);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar1;
    local_34 = 1;
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

