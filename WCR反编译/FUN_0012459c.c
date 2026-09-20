// FUN_0012459c @ 0012459c

void FUN_0012459c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_188;
  cfstringStruct *local_178;
  cfstringStruct *local_168;
  cfstringStruct *local_158;
  cfstringStruct *local_148;
  cfstringStruct *local_118;
  long local_f8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined *local_80 [3];
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  local_f8 = param_8;
  local_60 = param_8;
  if (param_8 == 0) {
    local_f8 = local_40;
    FUN_00113420(0);
  }
  local_68 = local_f8;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lu);
  _objc_retainAutoreleasedReturnValue();
  if (local_28 == (cfstringStruct *)0x0) {
    local_118 = &cf___;
  }
  else {
    local_118 = local_28;
  }
  local_80[0] = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_118;
  pcVar2 = local_30;
  FUN_001172d8(local_30,local_40);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_30;
  local_90 = pcVar2;
  FUN_00117c9c();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_30;
  local_98 = pcVar3;
  FUN_00117ed8();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_90;
  local_a0 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar2 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar2 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
        if (pcVar2 == (cfstringStruct *)0x0) {
          if (local_30 == (cfstringStruct *)0x0) {
            local_188 = &cf___;
          }
          else {
            local_188 = local_30;
          }
          local_178 = local_188;
        }
        else {
          local_178 = local_38;
        }
        local_168 = local_178;
      }
      else {
        local_168 = local_a0;
      }
      local_158 = local_168;
    }
    else {
      local_158 = local_98;
    }
    local_148 = local_158;
  }
  else {
    local_148 = local_90;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_a8 = local_148;
  FUN_00125274();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_88;
  local_b0 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_88,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_148);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_88;
  local_88 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar3 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_88,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_b0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_88;
  local_88 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar3 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_88,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_80[0]);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_88;
  local_88 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar3 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_88,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_80[0]);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_88;
  local_88 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_88;
  FUN_0011cff8(local_88,local_30,local_38,&cf___,local_40,local_48,local_50,local_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(local_80,0);
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

