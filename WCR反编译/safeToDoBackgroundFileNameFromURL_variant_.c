// safeToDoBackgroundFileNameFromURL:variant: @ 01ecefb0

/* Function Stack Size: 0x20 bytes */

ID WCRefineToDoListSettingsViewController::safeToDoBackgroundFileNameFromURL_variant_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ID IVar6;
  cfstringStruct *local_160;
  cfstringStruct *local_138;
  cfstringStruct *local_120;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  byte local_b9;
  undefined *local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  bool local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  ulong local_80;
  cfstringStruct *local_78;
  SEL local_70;
  ID local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_78 = (cfstringStruct *)0x0;
  local_70 = param_2;
  local_68 = param_1;
  _objc_storeStrong(&local_78,param_3);
  local_80 = 0;
  _objc_storeStrong(&local_80,param_4);
  pcVar1 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_91 = false;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_120 = &cf_dat;
  }
  else {
    local_120 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_120;
  }
  local_91 = pcVar2 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_120;
  if ((local_91 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_138 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  local_a9 = 0;
  local_b9 = 0;
  local_c9 = 0;
  if (pcVar2 == (cfstringStruct *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    local_b9 = 1;
    local_b8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_stringWithFormat__0269cca8,&cf_uNR_);
    _objc_retainAutoreleasedReturnValue();
    local_c9 = 1;
    local_c8 = local_138;
  }
  else {
    local_138 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    local_a9 = 1;
    local_a8 = local_138;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = local_138;
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  if ((local_b9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b8);
  }
  if ((local_a9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_a0;
  local_a0 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_stringByDeletingPathExtension_0269fd18);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_160 = &cf_uNR;
  }
  else {
    local_160 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_stringByDeletingPathExtension_0269fd18);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = local_160;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = local_160;
  if (pcVar2 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_d8;
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf___);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_d8;
  local_d8 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar5 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,&cf_dark);
  IVar6 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_isToDoBackgroundDarkFileName__026c7c90,local_a0);
  pcVar1 = local_d8;
  if (((uVar5 & 1) == 0) || ((IVar6 & 1) != 0)) {
    if (((uVar5 & 1) == 0) && ((IVar6 & 1) != 0)) {
      pcVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
      local_38 = 0;
      local_30 = 0;
      local_40 = pcVar2;
      local_28 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_stringByReplacingOccurrencesOfSt_026a3778,&cf__dark,&::cf___,1,0,
                 pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
      local_58 = 0;
      local_50 = 0;
      pcVar4 = pcVar1;
      local_60 = pcVar2;
      local_48 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_stringByReplacingOccurrencesOfSt_026a3778,&cf__dark,&::cf___,1,0,
                 pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_d8;
      local_d8 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        _objc_storeStrong(&local_d8,&cf_uNR);
      }
    }
  }
  else {
    pcVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,PTR_s_stringByAppendingString__0269d398,&cf__dark);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_d8;
    local_d8 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar3;
}

