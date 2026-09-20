// FUN_0001a680 @ 0001a680

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0001a680(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  long local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined *local_70;
  long local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_b0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  pcVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (lVar2 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = &cf___;
    local_c8 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<__>);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    lVar2 = local_b8;
    local_d0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<___>);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_b0;
    puVar3 = PTR_s_rangeOfString_options__0269d118;
    local_d8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_rangeOfString_options__0269d118,local_d0,1)
    ;
    if (pcVar1 == (cfstringStruct *)0x7fffffffffffffff) {
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = &cf___;
    }
    else {
      puVar4 = puVar3 + (long)pcVar1;
      pcVar5 = local_b0;
      local_30 = pcVar1;
      local_28 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
      local_80 = (long)pcVar5 - (long)(puVar3 + (long)pcVar1);
      pcVar5 = local_b0;
      local_78 = puVar4;
      local_70 = puVar4;
      local_68 = local_80;
      local_40 = pcVar1;
      local_38 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_rangeOfString_options_range__0269d130,local_d8,1,puVar4,local_80,
                 in_x6,in_x7,lVar2);
      if (pcVar5 == (cfstringStruct *)0x7fffffffffffffff) {
        (*(code *)PTR__objc_retain_02578638)();
        local_a8 = &cf___;
      }
      else {
        local_98 = puVar3 + (long)pcVar1;
        local_a0 = (long)pcVar5 - (long)(puVar3 + (long)pcVar1);
        pcVar5 = local_b0;
        local_90 = local_98;
        local_88 = local_a0;
        local_60 = pcVar1;
        local_58 = puVar3;
        local_50 = pcVar1;
        local_48 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_substringWithRange__0269d138,local_98,local_a0);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = pcVar5;
      }
    }
    local_c8 = 1;
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  _objc_autoreleaseReturnValue(local_a8);
  return;
}

