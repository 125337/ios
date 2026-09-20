// FUN_008fd604 @ 008fd604

void FUN_008fd604(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_a0;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  byte local_59;
  undefined *local_58;
  undefined *local_50 [3];
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_2);
  uVar1 = local_28;
  FUN_008fda78();
  _objc_retainAutoreleasedReturnValue();
  local_59 = 0;
  local_69 = 0;
  puVar2 = local_30;
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_a0 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_stringWithFormat__0269cca8,&cf_vt__lld_dat)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = local_a0;
  }
  else {
    local_a0 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50[0] = local_a0;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf_____<>_);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_50[0];
  local_78 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50[0],PTR_s_componentsSeparatedByCharactersI_0269d1a8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_50[0];
  local_50[0] = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = local_50[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    _objc_storeStrong(local_50,&cf_voice_dat);
  }
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_stringByAppendingPathComponent__026cab30,local_50[0]);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_78);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

