// FUN_007cf5a8 @ 007cf5a8

void FUN_007cf5a8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_158;
  uint local_140;
  bool local_79;
  undefined *local_78;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  puVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)puVar2 & 1) == 0) ||
     (puVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     puVar2 == (undefined *)0x0)) {
    puVar2 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
    local_40 = 1;
  }
  else {
    puVar1 = local_30;
    FUN_007d21e4();
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
    puVar2 = local_30;
    if (puVar1 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_40 = 1;
    }
    else {
      puVar3 = DAT_028cccb8;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccb8,PTR_s_objectForKey__0269e048,local_48);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_50 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      puVar1 = local_30;
      puVar2 = local_50;
      if (((ulong)puVar3 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar1;
        local_40 = 1;
      }
      else {
        puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
        _objc_retainAutoreleasedReturnValue();
        local_58 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        puVar2 = local_30;
        if (puVar1 == (undefined *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = puVar2;
          local_40 = 1;
        }
        else {
          puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_60 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          puVar2 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasSuffix__0269d018,&cf__);
          local_140 = 1;
          if (((ulong)puVar2 & 1) == 0) {
            puVar2 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasSuffix__0269d018,&cf_format_s_);
            local_140 = (uint)puVar2;
          }
          local_61 = (byte)local_140 & 1;
          local_79 = (local_140 & 1) == 0;
          if (local_79) {
            local_158 = local_58;
          }
          else {
            local_158 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_78 = local_158;
          }
          local_79 = !local_79;
          (*(code *)PTR__objc_retain_02578638)();
          local_70 = local_158;
          if (local_79) {
            (*(code *)PTR__objc_release_02578630)(local_78);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,local_30);
          puVar2 = local_70;
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = puVar2;
          local_40 = 1;
          _objc_storeStrong(&local_70);
          _objc_storeStrong(&local_60,0);
        }
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

