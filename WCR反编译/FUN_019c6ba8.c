// FUN_019c6ba8 @ 019c6ba8

void FUN_019c6ba8(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                 byte param_6,double *param_7,double *param_8)

{
  cfstringStruct *pcVar1;
  double dVar2;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  cfstringStruct *local_190;
  cfstringStruct *local_178;
  cfstringStruct *local_c8;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  bool local_a1;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  double local_78;
  double local_70;
  cfstringStruct *local_68;
  double *local_60;
  double *local_58;
  double local_50;
  double local_48;
  byte local_39;
  double local_38;
  double local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_5);
  pcVar1 = local_28;
  local_60 = param_8;
  local_58 = param_7;
  local_50 = param_4;
  local_48 = param_3;
  local_39 = param_6;
  local_38 = param_2;
  local_30 = param_1;
  FUN_019c4b14();
  _objc_retainAutoreleasedReturnValue();
  local_70 = local_30;
  local_78 = local_38;
  dVar2 = local_38;
  local_68 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 != (cfstringStruct *)0x0) {
    pcVar1 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_count_0269cfe0);
    local_91 = 0;
    local_a1 = false;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_178 = &cf___;
    }
    else {
      local_178 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      local_91 = 1;
      local_90 = local_178;
      FUN_019c4b14();
      _objc_retainAutoreleasedReturnValue();
      local_a0 = local_178;
    }
    local_a1 = pcVar1 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = local_178;
    if ((local_a1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    pcVar1 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
    if (pcVar1 < (cfstringStruct *)0x2) {
      local_190 = local_88;
    }
    else {
      local_b8 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      local_190 = local_b8;
      FUN_019c4b14();
      _objc_retainAutoreleasedReturnValue();
      local_c8 = local_190;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_190;
    if (pcVar1 >= (cfstringStruct *)0x2) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
      (*(code *)PTR__objc_release_02578630)(local_b8);
    }
    pcVar1 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    if (pcVar1 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_doubleValue_026ca608);
      local_70 = dVar2;
    }
    pcVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
    if (pcVar1 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_doubleValue_026ca608);
      local_78 = dVar2;
    }
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
  }
  if ((local_39 & 1) != 0) {
    if (local_70 <= local_48) {
      local_1b0 = local_48;
    }
    else {
      local_1b0 = local_70;
    }
    if (local_1b0 <= local_50) {
      local_1b8 = local_1b0;
    }
    else {
      local_1b8 = local_50;
    }
    local_70 = local_1b8;
    if (local_78 <= local_48) {
      local_1c0 = local_48;
    }
    else {
      local_1c0 = local_78;
    }
    if (local_1c0 <= local_50) {
      local_1c8 = local_1c0;
    }
    else {
      local_1c8 = local_50;
    }
    local_78 = local_1c8;
  }
  if (local_58 != (double *)0x0) {
    *local_58 = local_70;
  }
  if (local_60 != (double *)0x0) {
    *local_60 = local_78;
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_28,0);
  return;
}

