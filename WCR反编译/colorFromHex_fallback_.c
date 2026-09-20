// colorFromHex:fallback: @ 010de240

/* Function Stack Size: 0x20 bytes */

ID WCRefineNameplateHelper::colorFromHex_fallback_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  double dVar5;
  cfstringStruct *local_68;
  undefined *local_50;
  uint local_48 [2];
  cfstringStruct *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_4);
  if (local_30 == (cfstringStruct *)0x0) {
    local_68 = &::cf___;
  }
  else {
    local_68 = local_30;
  }
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(local_68);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf__);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringFromIndex__0269d120,1);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_40;
    local_40 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar2 != (cfstringStruct *)0x6) {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    puVar1 = local_38;
    if (pcVar2 != (cfstringStruct *)0x8) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar1;
      local_48[1] = 1;
      goto LAB_010de5dc;
    }
  }
  local_48[0] = 0;
  puVar4 = PTR__OBJC_CLASS___NSScanner_026ce368;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_scanHexInt__0269fa38,local_48);
  puVar1 = local_38;
  if (((ulong)puVar4 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
  }
  else {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x6) {
      dVar5 = (double)NEON_ucvtf((ulong)(byte)local_48[0]);
      puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                ((double)(local_48[0] >> 0x10 & 0xff) / 255.0,
                 (double)(local_48[0] >> 8 & 0xff) / 255.0,dVar5 / 255.0,0x3ff0000000000000,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar1;
    }
    else {
      dVar5 = (double)NEON_ucvtf((ulong)(local_48[0] & 0xff));
      puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                ((double)(local_48[0] >> 0x18) / 255.0,(double)(local_48[0] >> 0x10 & 0xff) / 255.0,
                 (double)(local_48[0] >> 8 & 0xff) / 255.0,dVar5 / 255.0,
                 PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar1;
    }
  }
  local_48[1] = 1;
  _objc_storeStrong(&local_50,0);
LAB_010de5dc:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

