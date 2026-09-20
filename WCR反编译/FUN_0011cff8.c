// FUN_0011cff8 @ 0011cff8

void FUN_0011cff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_380;
  cfstringStruct *local_360;
  cfstringStruct *local_2e0;
  cfstringStruct *local_288;
  cfstringStruct *local_268;
  long *local_1f8;
  long *local_1e8;
  long *local_1d0;
  long *local_1b8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_190;
  cfstringStruct *local_178;
  cfstringStruct *local_168;
  cfstringStruct *local_158;
  cfstringStruct *local_148;
  cfstringStruct *local_138;
  cfstringStruct *local_108;
  long local_b8;
  long local_b0;
  long local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88 [3];
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_58,param_7);
  local_60 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_60,param_8);
  if (local_28 == (cfstringStruct *)0x0) {
    local_108 = &cf___;
  }
  else {
    local_108 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_108;
  pcVar2 = local_30;
  FUN_001172d8(local_30,local_48);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_30;
  local_70 = pcVar2;
  FUN_00117c9c();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_30;
  local_88[0] = pcVar1;
  FUN_00117ed8();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_70;
  local_90 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar2 = local_88[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar2 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
        if (pcVar2 == (cfstringStruct *)0x0) {
          if (local_30 == (cfstringStruct *)0x0) {
            local_178 = &cf___;
          }
          else {
            local_178 = local_30;
          }
          local_168 = local_178;
        }
        else {
          local_168 = local_38;
        }
        local_158 = local_168;
      }
      else {
        local_158 = local_90;
      }
      local_148 = local_158;
    }
    else {
      local_148 = local_88[0];
    }
    local_138 = local_148;
  }
  else {
    local_138 = local_70;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = local_138;
  pcVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    if (local_48 == (cfstringStruct *)0x0) {
      local_1a0 = &cf___;
    }
    else {
      local_1a0 = local_48;
    }
    local_190 = local_1a0;
  }
  else {
    local_190 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = local_190;
  pcVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_1b8 = (long *)&local_98;
  }
  else {
    local_1b8 = (long *)&local_70;
  }
  pcVar1 = (cfstringStruct *)*local_1b8;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = local_88[0];
  local_a8 = (long)pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_1d0 = (long *)&local_98;
  }
  else {
    local_1d0 = (long *)local_88;
  }
  pcVar1 = (cfstringStruct *)*local_1d0;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = local_90;
  local_b0 = (long)pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_1f8 = (long *)&local_98;
    }
    else {
      local_1f8 = (long *)&local_38;
    }
    local_1e8 = local_1f8;
  }
  else {
    local_1e8 = (long *)&local_90;
  }
  pcVar2 = (cfstringStruct *)*local_1e8;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar1 = local_68;
  local_b8 = (long)pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_a8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_a8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_b0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_68;
  pcVar3 = local_30;
  FUN_00120ad0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_68;
  local_68 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_98);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__S,local_98);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (local_60 == (cfstringStruct *)0x0) {
    local_268 = &cf___;
  }
  else {
    local_268 = local_60;
  }
  pcVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_268);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (local_40 == (cfstringStruct *)0x0) {
    local_288 = &cf___;
  }
  else {
    local_288 = local_40;
  }
  pcVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_288);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__Tip,&cf___);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf___);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf___);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf___);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_a0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_a0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_a0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (local_48 == (cfstringStruct *)0x0) {
    local_2e0 = &cf___;
  }
  else {
    local_2e0 = local_48;
  }
  pcVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_2e0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_68;
  pcVar3 = local_48;
  FUN_00120b64();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_68;
  local_68 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar2 = local_68;
  pcVar3 = local_48;
  FUN_00120c20();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_68;
  local_68 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar2 = local_68;
  pcVar3 = local_48;
  FUN_00120c20();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_68;
  local_68 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if (local_58 == (cfstringStruct *)0x0) {
    local_360 = &cf___;
  }
  else {
    local_360 = local_58;
  }
  pcVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_360);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (local_58 == (cfstringStruct *)0x0) {
    local_380 = &cf___;
  }
  else {
    local_380 = local_58;
  }
  pcVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__T,local_380);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_format_s_,&cf___);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf___,&cf___);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_68;
  local_68 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_68;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(local_88,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(pcVar2);
  return;
}

