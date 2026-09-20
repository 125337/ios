// FUN_002b5ec8 @ 002b5ec8

void FUN_002b5ec8(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined4 local_38;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)();
  if (((ulong)puVar2 & 1) == 0) {
    local_38 = 1;
  }
  else {
    FUN_002b64a4();
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_38 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(puVar1,&DAT_028c9802,puVar2,1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_setAssociatedObject(local_40,&DAT_028c9807,0,1);
      puVar1 = local_40;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_MiniTask_follow___);
      _objc_retainAutoreleasedReturnValue();
      FUN_002b6bb8(puVar1,puVar2,1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar1 = local_40;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_MiniTask_follow___);
      _objc_retainAutoreleasedReturnValue();
      FUN_002b6e10(puVar1,puVar2,0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar1 = local_40;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_MiniTask___);
      _objc_retainAutoreleasedReturnValue();
      FUN_002b7184(puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar1 = local_40;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_MiniTask_follow___);
      _objc_retainAutoreleasedReturnValue();
      FUN_002b7768(puVar1,0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isHidden_026ca768);
      if ((((ulong)puVar1 & 1) == 0) &&
         ((*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_alpha_026ca4d8),
         param_1 <= DAT_02323d38)) {
        (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_40,PTR_s_setAlpha__026ca860);
      }
      local_38 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

