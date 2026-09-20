// FUN_0083d900 @ 0083d900

void FUN_0083d900(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double local_70;
  undefined *local_68;
  uint local_5c;
  undefined *local_58;
  ulong local_50;
  undefined4 local_48;
  double local_38;
  ulong local_30;
  undefined *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_30;
  if ((uVar2 & 1) == 0) {
    local_28 = (undefined *)0x0;
    local_48 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_28 = (undefined *)0x0;
      local_48 = 1;
    }
    else {
      uVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasPrefix__0269d320,&cf__);
      if ((uVar2 & 1) != 0) {
        uVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringFromIndex__0269d120,1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_50;
        local_50 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      uVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      if (uVar2 == 8) {
        uVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringToIndex__0269d6c0,6);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_50;
        local_50 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      uVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      if (uVar2 == 6) {
        puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf_0123456789ABCDEF);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_50;
        local_58 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_stringByTrimmingCharactersInSet__0269d0c0,puVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (uVar3 == 0) {
          local_5c = 0;
          puVar1 = PTR__OBJC_CLASS___NSScanner_026ce368;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,local_50
                    );
          _objc_retainAutoreleasedReturnValue();
          local_68 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_scanHexInt__0269fa38,&local_5c);
          if (((ulong)puVar1 & 1) == 0) {
            local_28 = (undefined *)0x0;
          }
          else {
            local_70 = local_38;
            if (local_38 < 0.0) {
              local_70 = 0.0;
            }
            if (1.0 < local_70) {
              local_70 = 1.0;
            }
            dVar4 = (double)NEON_ucvtf((ulong)(local_5c & 0xff));
            puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
            (*(code *)PTR__objc_msgSend_02578628)
                      ((double)(local_5c >> 0x10 & 0xff) / 255.0,
                       (double)(local_5c >> 8 & 0xff) / 255.0,dVar4 / 255.0,local_70,
                       PTR__OBJC_CLASS___UIColor_026cdf78,
                       PTR_s_colorWithRed_green_blue_alpha__0269cc48);
            _objc_retainAutoreleasedReturnValue();
            local_28 = puVar1;
          }
          local_48 = 1;
          _objc_storeStrong(&local_68,0);
        }
        else {
          local_28 = (undefined *)0x0;
          local_48 = 1;
        }
        _objc_storeStrong(&local_58,0);
      }
      else {
        local_28 = (undefined *)0x0;
        local_48 = 1;
      }
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

