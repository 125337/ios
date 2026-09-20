// FUN_00834cd4 @ 00834cd4

void FUN_00834cd4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_18;
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tag_026cab98);
  if (puVar2 == (undefined *)0x24f6e7) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_appendString__0269ccb0,&cf__WCR_MEDIA_);
  }
  else if (puVar2 == &UNK_000d8cc0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_appendString__0269ccb0,&cf__PKC_DARK_);
  }
  else if (puVar2 == (undefined *)0xd90a7) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_appendString__0269ccb0,&cf__PKC_LIGHT_);
  }
  else if (puVar2 == &UNK_0000271a) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_appendString__0269ccb0,&cf__WECHAT_BG_);
  }
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_appendString__0269ccb0,&cf__THEMEBOX_);
  }
  puVar1 = local_18;
  puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIVisualEffectView_026cdf98,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_appendString__0269ccb0,&cf__BLUR_);
  }
  puVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

