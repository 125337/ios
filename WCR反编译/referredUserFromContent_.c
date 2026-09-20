// referredUserFromContent: @ 0109be90

/* Function Stack Size: 0x18 bytes */

ID WCRefineMessageBlockSupport::referredUserFromContent_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  uint local_114;
  cfstringStruct *local_110;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  long local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  byte local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  SEL local_88;
  ID local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  long local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_90 = (cfstringStruct *)0x0;
  local_88 = param_2;
  local_80 = param_1;
  _objc_storeStrong(&local_90,param_3);
  pcVar2 = local_90;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_110 = &::cf___;
  }
  else {
    local_110 = local_90;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = local_110;
  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
  local_a1 = 0;
  local_114 = 1;
  if (local_110 != (cfstringStruct *)0x0) {
    pcVar2 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_a1 = 1;
    local_a0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_114 = (uint)pcVar2 ^ 1;
  }
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  if ((local_114 & 1) != 0) {
    local_78 = (cfstringStruct *)0x0;
    local_a8 = 1;
    goto LAB_0109c3b0;
  }
  pcVar3 = local_98;
  puVar1 = PTR_s_rangeOfString_options__0269d118;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_98,PTR_s_rangeOfString_options__0269d118,&cf_<refermsg,1);
  pcVar2 = local_98;
  local_b8 = pcVar3;
  local_b0 = puVar1;
  if (pcVar3 == (cfstringStruct *)0x7fffffffffffffff) {
    local_78 = (cfstringStruct *)0x0;
    local_a8 = 1;
    goto LAB_0109c3b0;
  }
  pcVar4 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
  local_d0 = (long)pcVar4 - (long)local_b8;
  puVar1 = PTR_s_rangeOfString_options_range__0269d130;
  local_d8 = pcVar3;
  local_50 = local_d0;
  local_48 = pcVar3;
  local_40 = pcVar3;
  local_38 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_rangeOfString_options_range__0269d130,&cf_<_refermsg>,1,pcVar3,local_d0);
  pcVar3 = local_98;
  local_c8 = pcVar2;
  local_c0 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = pcVar3;
  if (local_c8 != (cfstringStruct *)0x7fffffffffffffff) {
    local_30 = local_c8;
    local_28 = local_c0;
    local_e8 = local_c0 + ((long)local_c8 - (long)local_b8);
    local_68 = local_b8;
    local_60 = local_b8;
    local_f0 = local_b8;
    pcVar3 = local_98;
    local_70 = local_e8;
    local_58 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_substringWithRange__0269d138,local_b8,local_e8);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_e0;
    local_e0 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_e0;
  FUN_0109c3e0(local_e0,&cf_fromusr);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
LAB_0109c254:
    pcVar2 = local_e0;
    FUN_0109c3e0(local_e0,&cf_chatusr);
    _objc_retainAutoreleasedReturnValue();
    local_100 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
LAB_0109c2e0:
      pcVar2 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar2 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_160 = (cfstringStruct *)0x0;
        }
        else {
          local_160 = local_100;
        }
        local_158 = local_160;
      }
      else {
        local_158 = local_f8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_158;
    }
    else {
      IVar5 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isChatRoomID__0269ec68,local_100);
      pcVar2 = local_100;
      if ((IVar5 & 1) != 0) goto LAB_0109c2e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = pcVar2;
    }
    local_a8 = 1;
    _objc_storeStrong(&local_100,0);
  }
  else {
    IVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isChatRoomID__0269ec68,local_f8);
    pcVar2 = local_f8;
    if ((IVar5 & 1) != 0) goto LAB_0109c254;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = pcVar2;
    local_a8 = 1;
  }
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_e0,0);
LAB_0109c3b0:
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_78;
}

