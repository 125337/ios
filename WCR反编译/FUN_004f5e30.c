// FUN_004f5e30 @ 004f5e30

void FUN_004f5e30(undefined8 param_1,cfstringStruct *param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_e0;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_60 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_60,param_1);
  if (local_60 == (cfstringStruct *)0x0) {
    local_e0 = &cf___;
  }
  else {
    local_e0 = local_60;
  }
  local_68 = param_2;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_e0;
  if ((local_68 == (cfstringStruct *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0),
     local_e0 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = &cf___;
  }
  else {
    pcVar1 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    pcVar2 = local_70;
    if (local_68 < pcVar1) {
      local_48 = 0;
      local_50 = local_68;
      local_40 = 0;
      local_38 = local_68;
      puVar3 = PTR_s_rangeOfComposedCharacterSequence_026a44a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_rangeOfComposedCharacterSequence_026a44a0,0,local_68);
      if ((pcVar2 == (cfstringStruct *)0x7fffffffffffffff) ||
         (pcVar1 = local_70, local_30 = pcVar2, local_28 = puVar3,
         (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
         pcVar1 < (cfstringStruct *)(puVar3 + (long)&pcVar2->field0_0x0))) {
        pcVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_substringToIndex__0269d6c0,local_68);
        _objc_retainAutoreleasedReturnValue();
        local_58 = pcVar2;
      }
      else {
        pcVar1 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_substringWithRange__0269d138,pcVar2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        local_58 = pcVar1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = pcVar2;
    }
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_60,0);
  _objc_autoreleaseReturnValue(local_58);
  return;
}

