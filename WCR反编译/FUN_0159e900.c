// FUN_0159e900 @ 0159e900

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0159e900(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  cfstringStruct *local_230;
  uint local_1fc;
  cfstringStruct *local_1e0;
  uint local_1bc;
  cfstringStruct *local_1b0;
  cfstringStruct *local_198;
  ulong local_158;
  undefined *local_120;
  cfstringStruct *local_110;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  bool local_d9;
  cfstringStruct *local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  byte local_b1;
  cfstringStruct *local_b0;
  bool local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  byte local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  int local_74;
  ulong local_70;
  byte local_61;
  ulong local_60;
  byte local_51;
  ulong local_50;
  ulong local_48;
  long local_40;
  ulong local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = param_1;
  if (local_38 != 0) {
    uVar8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userInfo_0269f138);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_51 = 0;
    local_61 = 0;
    if ((uVar4 & 1) == 0) {
      local_158 = 0;
    }
    else {
      local_158 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userInfo_0269f138);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar8);
    local_48 = local_158;
    uVar8 = local_38;
    FUN_0159f634();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = *(long *)(param_1 + 0x28);
    puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_70 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_NO1Y__);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar9 + 0x10))(lVar9,0);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    local_74 = 1;
    _objc_storeStrong(&local_70,0);
    goto LAB_0159f608;
  }
  pcVar5 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_code);
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_89 = 0;
  if (((ulong)pcVar6 & 1) == 0) {
    local_198 = (cfstringStruct *)0x0;
  }
  else {
    local_198 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_code)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    local_88 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  local_80 = local_198;
  pcVar5 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar6 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar7);
  local_a1 = false;
  bVar1 = ((ulong)pcVar6 & 1) == 0;
  if (bVar1) {
    local_1b0 = &cf___;
  }
  else {
    local_1b0 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = local_1b0;
  }
  local_a1 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = local_1b0;
  if ((local_a1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  local_b1 = 0;
  local_1bc = 0;
  if (local_80 != (cfstringStruct *)0xc8) {
    pcVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_voices);
    _objc_retainAutoreleasedReturnValue();
    local_b1 = 1;
    puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_b0 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar7);
    local_1bc = (uint)pcVar5;
  }
  if ((local_b1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  if ((local_1bc & 1) == 0) {
    pcVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_data)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    pcVar6 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar7);
    local_c9 = 0;
    local_d9 = false;
    bVar1 = ((ulong)pcVar6 & 1) == 0;
    if (bVar1) {
      local_1e0 = (cfstringStruct *)0x0;
    }
    else {
      local_1e0 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
      _objc_retainAutoreleasedReturnValue();
      local_c9 = 1;
      local_c8 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_d8 = local_1e0;
    }
    local_d9 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = local_1e0;
    if ((local_d9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    if ((local_c9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    pcVar5 = local_c0;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar7);
    local_e9 = 0;
    local_1fc = 0;
    if (((ulong)pcVar5 & 1) == 0) {
      pcVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_voice);
      _objc_retainAutoreleasedReturnValue();
      local_e9 = 1;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_e8 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar7);
      local_1fc = (uint)pcVar5;
    }
    if ((local_e9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    if ((local_1fc & 1) != 0) {
      pcVar6 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_voice);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_c0;
      local_c0 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
    }
    pcVar5 = local_c0;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar7);
    bVar2 = false;
    bVar1 = false;
    if (((ulong)pcVar5 & 1) == 0) {
LAB_0159f378:
      local_230 = &cf___;
    }
    else {
      local_100 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_id)
      ;
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar5 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_isKindOfClass__0269cd68,puVar7);
      if (((ulong)pcVar5 & 1) == 0) goto LAB_0159f378;
      local_230 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_id)
      ;
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_110 = local_230;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = local_230;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_110);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (local_80 == (cfstringStruct *)0xc8) {
      lVar9 = *(long *)(param_1 + 0x28);
      uVar8 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isEqualToString__0269ccc8,&cf_private);
      pcVar5 = &cf__ygNON_OT_OS0F;
      if ((uVar8 & 1) == 0) {
        pcVar5 = &cf__lQ;
      }
      (**(code **)(lVar9 + 0x10))(lVar9,1,pcVar5);
      local_74 = 0;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x28);
      pcVar5 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_120 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_gRzb__);
        _objc_retainAutoreleasedReturnValue();
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_stringWithFormat__0269cca8,&cf_NO1Y__);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar9 + 0x10))(lVar9,0);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      if (pcVar5 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_120);
      }
      local_74 = 1;
    }
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_c0,0);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),0,&cf_Nz__gr_NOcSfegRhV);
    local_74 = 1;
  }
  _objc_storeStrong(&local_98,0);
  if (local_74 == 0) {
    local_74 = 0;
  }
LAB_0159f608:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

