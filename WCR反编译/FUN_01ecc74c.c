// FUN_01ecc74c @ 01ecc74c

void FUN_01ecc74c(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
                 ,byte param_6,double *param_7,double *param_8)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c0;
  double local_1b0;
  cfstringStruct *local_190;
  cfstringStruct *local_d8;
  cfstringStruct *local_c8;
  double local_c0;
  cfstringStruct *local_b0;
  cfstringStruct *local_a0;
  double local_98;
  cfstringStruct *local_90;
  bool local_81;
  cfstringStruct *local_80;
  byte local_71;
  undefined *local_70;
  cfstringStruct *local_68;
  double *local_60;
  double *local_58;
  double local_50;
  double local_48;
  byte local_39;
  undefined8 local_38;
  double local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_5);
  pcVar4 = local_28;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_60 = param_8;
  local_58 = param_7;
  local_50 = param_4;
  local_48 = param_3;
  local_39 = param_6;
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_190 = local_28;
  local_71 = 0;
  local_81 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_190 = &cf___;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_80 = local_190;
  }
  local_81 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_190;
  if ((local_81 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  pcVar4 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
  _objc_retainAutoreleasedReturnValue();
  local_90 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_count_0269cfe0);
  bVar2 = false;
  bVar1 = false;
  if (pcVar4 == (cfstringStruct *)0x0) {
LAB_01ecca4c:
    local_1b0 = local_30;
  }
  else {
    local_a0 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_objectAtIndexedSubscript__0269cc78,0);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    pcVar4 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (pcVar4 == (cfstringStruct *)0x0) goto LAB_01ecca4c;
    local_b0 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_objectAtIndexedSubscript__0269cc78,0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1b0 = param_1;
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  local_98 = local_1b0;
  pcVar4 = local_90;
  local_1c0 = local_1b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_count_0269cfe0);
  bVar2 = false;
  bVar1 = false;
  if ((cfstringStruct *)0x1 < pcVar4) {
    local_c8 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_objectAtIndexedSubscript__0269cc78,1);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    pcVar4 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (pcVar4 != (cfstringStruct *)0x0) {
      local_d8 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      (*(code *)PTR__objc_msgSend_02578628)();
      goto LAB_01eccbac;
    }
  }
  local_1c0 = local_1b0;
LAB_01eccbac:
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  local_c0 = local_1c0;
  if ((local_39 & 1) != 0) {
    if (local_48 <= local_1b0) {
      local_1d0 = local_1b0;
    }
    else {
      local_1d0 = local_48;
    }
    if (local_50 <= local_1d0) {
      local_1d8 = local_50;
    }
    else {
      local_1d8 = local_1d0;
    }
    local_98 = local_1d8;
    if (local_48 <= local_1c0) {
      local_1e0 = local_1c0;
    }
    else {
      local_1e0 = local_48;
    }
    if (local_50 <= local_1e0) {
      local_1e8 = local_50;
    }
    else {
      local_1e8 = local_1e0;
    }
    local_c0 = local_1e8;
  }
  if (local_58 != (double *)0x0) {
    *local_58 = local_98;
  }
  if (local_60 != (double *)0x0) {
    *local_60 = local_c0;
  }
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_28,0);
  return;
}

