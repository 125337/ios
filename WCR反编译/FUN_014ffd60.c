// FUN_014ffd60 @ 014ffd60

void FUN_014ffd60(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_98;
  ulong local_90;
  undefined4 local_84;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  cfstringStruct *local_68;
  long local_60;
  undefined *local_58;
  undefined *local_50;
  long local_48;
  ulong local_40;
  undefined *local_38;
  ulong local_30;
  undefined *local_28;
  
  local_70 = 0;
  _objc_storeStrong(&local_70,param_1);
  uVar1 = local_70;
  FUN_01500174(local_70,&cf_title);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_78 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_80 = uVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar1 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_98 = local_70;
    FUN_01500174(local_70,&cf_refermsg);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_98;
    FUN_014fdf60();
    if (((long)local_98 < 1) &&
       (uVar1 = local_90, (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0),
       uVar1 != 0)) {
      uVar1 = local_90;
      puVar2 = PTR_s_rangeOfString_options__0269d118;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_rangeOfString_options__0269d118,&cf_<type>);
      uVar3 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_rangeOfString_options__0269d118,&cf_<_type>,1);
      if ((uVar1 != 0x7fffffffffffffff) && (uVar1 < uVar3)) {
        local_58 = puVar2 + uVar1;
        local_60 = uVar3 - (long)(puVar2 + uVar1);
        uVar3 = local_90;
        local_50 = local_58;
        local_48 = local_60;
        local_40 = uVar1;
        local_38 = puVar2;
        local_30 = uVar1;
        local_28 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_substringWithRange__0269d138,local_58,local_60);
        _objc_retainAutoreleasedReturnValue();
        local_98 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
    }
    if (local_98 == 3) {
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = &cf_image;
    }
    else if (local_98 == 0x22) {
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = &cf_voice;
    }
    else if ((local_98 == 0x2b) || (local_98 == 0x2c)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = &cf_video;
    }
    else if (local_98 == 0x2f) {
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = &cf_emoticon;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = &cf_text;
    }
    local_84 = 1;
    _objc_storeStrong(&local_90,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = &cf_text;
    local_84 = 1;
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_autoreleaseReturnValue(local_68);
  return;
}

