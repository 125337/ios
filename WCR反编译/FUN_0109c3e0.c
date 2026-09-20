// FUN_0109c3e0 @ 0109c3e0

void FUN_0109c3e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  cfstringStruct *local_150;
  undefined *local_f0;
  undefined *local_e8;
  undefined4 local_dc;
  long local_d8;
  cfstringStruct *local_d0;
  long local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  long local_b0;
  undefined *local_a8;
  undefined *local_a0;
  long local_98;
  long local_90;
  undefined *local_88;
  undefined *local_80;
  long local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_c0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c0,param_1);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_2);
  pcVar2 = local_c0;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_150 = &cf___;
  }
  else {
    local_150 = local_c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_150;
  lVar3 = local_c8;
  FUN_0109a9f4();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_d0;
  local_d8 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if ((pcVar2 == (cfstringStruct *)0x0) ||
     (lVar3 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = &cf___;
    local_dc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<__>);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    lVar3 = local_d8;
    local_e8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<___>);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_d0;
    puVar7 = PTR_s_rangeOfString_options__0269d118;
    local_f0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_rangeOfString_options__0269d118,local_e8,1)
    ;
    pcVar2 = local_d0;
    puVar1 = local_f0;
    if (pcVar5 == (cfstringStruct *)0x7fffffffffffffff) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = &cf___;
    }
    else {
      puVar4 = (undefined *)((long)&pcVar5->field0_0x0 + (long)puVar7);
      pcVar6 = local_d0;
      local_30 = pcVar5;
      local_28 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
      local_90 = (long)pcVar6 - (long)((long)&pcVar5->field0_0x0 + (long)puVar7);
      local_88 = puVar4;
      local_80 = puVar4;
      local_78 = local_90;
      local_40 = pcVar5;
      local_38 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_rangeOfString_options_range__0269d130,puVar1,1,puVar4,local_90,in_x6,
                 in_x7,lVar3);
      if ((pcVar2 == (cfstringStruct *)0x7fffffffffffffff) ||
         (local_50 = pcVar5, local_48 = puVar7,
         pcVar2 < (cfstringStruct *)(puVar7 + (long)&pcVar5->field0_0x0))) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b8 = &cf___;
      }
      else {
        local_a8 = (undefined *)((long)&pcVar5->field0_0x0 + (long)puVar7);
        local_b0 = (long)pcVar2 - (long)((long)&pcVar5->field0_0x0 + (long)puVar7);
        pcVar2 = local_d0;
        local_a0 = local_a8;
        local_98 = local_b0;
        local_70 = pcVar5;
        local_68 = puVar7;
        local_60 = pcVar5;
        local_58 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_substringWithRange__0269d138,local_a8,local_b0);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar2;
        FUN_0109a9f4();
        _objc_retainAutoreleasedReturnValue();
        local_b8 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
    }
    local_dc = 1;
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_autoreleaseReturnValue(local_b8);
  return;
}

