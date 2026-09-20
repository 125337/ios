// FUN_00fbc9a4 @ 00fbc9a4

undefined1  [16] FUN_00fbc9a4(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_118;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_c8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c8,param_1);
  pcVar3 = local_c8;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_118 = &cf___;
  }
  else {
    local_118 = local_c8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_118;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_118,PTR_s_rangeOfString_options__0269d118,&cf_<refermsg,1);
  pcVar3 = local_d0;
  if (local_118 == (cfstringStruct *)0x7fffffffffffffff) {
    local_48 = 0x7fffffffffffffff;
    local_50 = 0;
    local_40 = 0x7fffffffffffffff;
    local_38 = 0;
    local_c0 = (cfstringStruct *)0x7fffffffffffffff;
    local_b8 = (undefined *)0x0;
  }
  else {
    pcVar4 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
    local_70 = (long)pcVar4 - (long)local_118;
    puVar2 = PTR_s_rangeOfString_options_range__0269d130;
    local_68 = local_118;
    local_60 = local_118;
    local_58 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_rangeOfString_options_range__0269d130,&cf_<_refermsg>,1,local_118,
               local_70);
    if (pcVar3 == (cfstringStruct *)0x7fffffffffffffff) {
      local_88 = 0x7fffffffffffffff;
      local_90 = 0;
      local_80 = 0x7fffffffffffffff;
      local_78 = 0;
      local_c0 = (cfstringStruct *)0x7fffffffffffffff;
      local_b8 = (undefined *)0x0;
    }
    else {
      local_b8 = puVar2 + ((long)pcVar3 - (long)local_118);
      local_c0 = local_118;
      local_b0 = local_b8;
      local_a8 = local_118;
      local_a0 = local_118;
      local_98 = local_b8;
      local_30 = pcVar3;
      local_28 = puVar2;
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  auVar1._8_8_ = local_b8;
  auVar1._0_8_ = local_c0;
  return auVar1;
}

