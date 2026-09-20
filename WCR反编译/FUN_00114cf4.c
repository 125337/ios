// FUN_00114cf4 @ 00114cf4

void FUN_00114cf4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_138;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  long local_60;
  undefined *local_58;
  undefined *local_50;
  long local_48;
  long local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_70 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_70,param_1);
  pcVar1 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = &cf___;
  }
  else {
    pcVar2 = local_70;
    puVar3 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_rangeOfString__0269d838,&cf_<_[CDATA[);
    pcVar1 = local_70;
    if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = &cf___;
    }
    else {
      puVar3 = puVar3 + (long)pcVar2;
      pcVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      local_40 = (long)pcVar2 - (long)puVar3;
      local_38 = puVar3;
      local_30 = puVar3;
      local_28 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_rangeOfString_options_range__0269d130,&cf___>,0,puVar3,local_40);
      if (pcVar1 == (cfstringStruct *)0x7fffffffffffffff) {
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = &cf___;
      }
      else {
        local_60 = (long)pcVar1 - (long)puVar3;
        pcVar1 = local_70;
        local_58 = puVar3;
        local_50 = puVar3;
        local_48 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_substringWithRange__0269d138,puVar3,local_60);
        _objc_retainAutoreleasedReturnValue();
        local_138 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_138 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = local_138;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
    }
  }
  _objc_storeStrong(&local_70,0);
  _objc_autoreleaseReturnValue(local_68);
  return;
}

