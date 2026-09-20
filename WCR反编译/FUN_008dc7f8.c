// FUN_008dc7f8 @ 008dc7f8

void FUN_008dc7f8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_88;
  undefined8 local_50;
  byte local_41;
  undefined *local_40;
  undefined *local_38 [3];
  undefined *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
  _objc_alloc_init();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setDateFormat__0269d1c8,&cf_yyyyMMdd_HHmmss);
  puVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringFromDate__0269d1d8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_41 = 0;
  local_88 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    _time();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar1;
    local_40 = puVar1;
  }
  local_41 = puVar3 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_38[0] = local_88;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  puVar1 = PTR_WCRefineVoicePackStore_026cea20;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoicePackStore_026cea20,PTR_s_isSupportedAudioExtension__026a9d50,local_50)
  ;
  if (((ulong)puVar1 & 1) == 0) {
    _objc_storeStrong(&local_50,&cf_silk);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__eQ_);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_50);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

