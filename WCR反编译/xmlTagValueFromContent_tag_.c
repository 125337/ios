// xmlTagValueFromContent:tag: @ 00f3fdd8

/* Function Stack Size: 0x20 bytes */

ID WCRefineEmoticonToolsHelper::xmlTagValueFromContent_tag_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_f8;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined4 local_6c;
  long local_68;
  undefined *local_60;
  SEL local_58;
  ID local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_60 = (undefined *)0x0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_4);
  puVar1 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if ((puVar1 == (undefined *)0x0) ||
     (lVar2 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_48 = (undefined *)0x0;
    local_6c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<__>);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_78 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<___>);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_60;
    puVar4 = PTR_s_rangeOfString_options__0269d118;
    local_80 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_rangeOfString_options__0269d118,local_78);
    puVar3 = local_60;
    puVar5 = PTR_s_rangeOfString_options__0269d118;
    local_90 = puVar1;
    local_88 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_rangeOfString_options__0269d118,local_80,1)
    ;
    local_a0 = puVar3;
    local_98 = puVar5;
    if ((local_90 == (undefined *)0x7fffffffffffffff) || (puVar3 <= local_90 + (long)local_88)) {
      local_48 = (undefined *)0x0;
      local_6c = 1;
    }
    else {
      local_38 = local_90 + (long)local_88;
      local_40 = puVar3 + (-(long)local_88 - (long)local_90);
      puVar3 = local_60;
      local_30 = local_38;
      local_28 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_substringWithRange__0269d138,local_38,local_40);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      local_a8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_a8;
      local_a8 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar1 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
      if (puVar1 == (undefined *)0x0) {
        local_f8 = (undefined *)0x0;
      }
      else {
        local_f8 = local_a8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = local_f8;
      local_6c = 1;
      _objc_storeStrong(&local_a8,0);
    }
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_48;
}

