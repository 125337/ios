// FUN_014ff400 @ 014ff400

undefined1 * FUN_014ff400(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *local_140;
  undefined1 *local_e0;
  undefined1 *local_90;
  undefined4 local_84;
  undefined *local_80;
  undefined1 *local_78;
  long local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  long local_58;
  long local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  long local_38;
  undefined1 *local_30;
  undefined *local_28;
  
  local_80 = (undefined1 *)0x0;
  _objc_storeStrong(&local_80,param_1);
  puVar2 = local_80;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)puVar2 & 1) == 0) ||
     (puVar1 = local_80, (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0),
     puVar2 = local_80, puVar1 == (undefined1 *)0x0)) {
    local_78 = (undefined1 *)0xffffffffffffffff;
    local_84 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_90 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar3 = local_90;
    puVar2 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_rangeOfString_options__0269d118,&cf_<_[CDATA[,1);
    if (puVar3 != (undefined1 *)0x7fffffffffffffff) {
      puVar5 = puVar3 + (long)puVar2;
      puVar4 = local_90;
      local_30 = puVar3;
      local_28 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      puVar3 = local_90;
      if (puVar5 < puVar4) {
        puVar4 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
        local_50 = (long)puVar4 - (long)puVar5;
        local_48 = puVar5;
        local_40 = puVar5;
        local_38 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_rangeOfString_options_range__0269d130,&cf___>,0,puVar5,local_50);
        if (puVar3 != (undefined1 *)0x7fffffffffffffff) {
          local_70 = (long)puVar3 - (long)puVar5;
          puVar4 = local_90;
          local_68 = puVar5;
          local_60 = puVar5;
          local_58 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_substringWithRange__0269d138,puVar5,local_70);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_90;
          local_90 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
      }
    }
    puVar3 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
    if ((puVar3 == (undefined1 *)0x0) ||
       (puVar3 = local_90, (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0),
       &MACH_HEADER.ncmds < puVar3)) {
      local_78 = (undefined1 *)0xffffffffffffffff;
    }
    else {
      for (local_e0 = (undefined1 *)0x0; puVar3 = local_90,
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0), local_e0 < puVar3;
          local_e0 = local_e0 + 1) {
        puVar3 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_characterAtIndex__0269fa18,local_e0);
        if (((ushort)puVar3 < 0x30) || (0x39 < (ushort)puVar3)) {
          local_78 = (undefined1 *)0xffffffffffffffff;
          goto LAB_014ff884;
        }
      }
      local_140 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_integerValue_026ca750);
      if ((long)local_140 < 1) {
        local_140 = (undefined1 *)0xffffffffffffffff;
      }
      local_78 = local_140;
    }
LAB_014ff884:
    local_84 = 1;
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_80,0);
  return local_78;
}

