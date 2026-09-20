// FUN_01e54424 @ 01e54424

void FUN_01e54424(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  double dVar5;
  undefined *local_58;
  ulong local_50;
  undefined *local_48;
  uint local_3c;
  ulong local_38;
  undefined4 local_2c;
  undefined *local_28;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    puVar1 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
    local_2c = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf___);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (uVar2 == 6) {
      local_3c = 0;
      puVar4 = PTR__OBJC_CLASS___NSScanner_026ce368;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_scanHexInt__0269fa38,&local_3c);
      puVar1 = local_28;
      if (((ulong)puVar4 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = puVar1;
      }
      else {
        dVar5 = (double)NEON_ucvtf((ulong)(byte)local_3c);
        puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  ((double)((local_3c & 0xff0000) >> 0x10) / 255.0,
                   (double)((local_3c & 0xff00) >> 8) / 255.0,dVar5 / 255.0,0x3ff0000000000000,
                   PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_18 = puVar1;
      }
      local_2c = 1;
      _objc_storeStrong(&local_48,0);
    }
    else {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      local_18 = local_28;
      if (uVar2 == 8) {
        local_50 = 0;
        puVar4 = PTR__OBJC_CLASS___NSScanner_026ce368;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_58 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_scanHexLongLong__026ca838,&local_50);
        puVar1 = local_28;
        if (((ulong)puVar4 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = puVar1;
        }
        else {
          puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    ((double)((local_50 & 0xff000000) >> 0x18) / 255.0,
                     (double)((local_50 & 0xff0000) >> 0x10) / 255.0,
                     (double)((local_50 & 0xff00) >> 8) / 255.0,(double)(byte)local_50 / 255.0,
                     PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithRed_green_blue_alpha__0269cc48);
          _objc_retainAutoreleasedReturnValue();
          local_18 = puVar1;
        }
        local_2c = 1;
        _objc_storeStrong(&local_58,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_2c = 1;
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

