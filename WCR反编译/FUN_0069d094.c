// FUN_0069d094 @ 0069d094

byte FUN_0069d094(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  byte local_84;
  undefined1 *local_80;
  cfstringStruct *local_68;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  byte local_11;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_68 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_68;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf__2x);
    if ((((ulong)pcVar2 & 1) != 0) ||
       (pcVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf__3x),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar2 = local_30;
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      local_80 = (undefined1 *)((long)&pcVar3[-1].field3_0x18 + 5);
      if ((long)local_80 < 0) {
        local_80 = (undefined1 *)0x0;
      }
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringToIndex__0269d6c0,local_80);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_30;
      local_30 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WeChat_Lab_Logo_light_small);
    local_84 = 1;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WeChat_Lab_Logo_light_small_dark);
      local_84 = 1;
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_isEqualToString__0269ccc8,&cf_WeChat_Lab_Logo);
        local_84 = (byte)pcVar2;
      }
    }
    local_11 = local_84 & 1;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

