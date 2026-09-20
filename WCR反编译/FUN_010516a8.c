// FUN_010516a8 @ 010516a8

void FUN_010516a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined *local_1b0;
  uint local_17c;
  undefined *local_170;
  undefined *local_158;
  undefined *local_140;
  undefined *local_128;
  undefined *local_110;
  undefined *local_c8;
  undefined *local_c0;
  bool local_b1;
  undefined *local_b0;
  undefined *local_a8;
  bool local_99;
  undefined *local_98;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  bool local_59;
  undefined *local_58;
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar2 = local_30;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_59 = false;
  if (lVar2 == 0) {
    local_110 = (undefined *)0x0;
  }
  else {
    local_110 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_JSONObjectWithData_options_error_026ca480,local_30,0,0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_110;
  }
  local_59 = lVar2 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_110;
  if ((local_59 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  puVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_71 = 0;
  local_81 = 0;
  local_128 = local_50;
  if (((ulong)puVar5 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_result);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = local_128;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_data)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = local_128;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_128;
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_durl);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_99 = false;
  bVar1 = ((ulong)puVar5 & 1) == 0;
  if (bVar1) {
    local_140 = (undefined *)0x0;
  }
  else {
    local_140 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_durl)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_98 = local_140;
  }
  local_99 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = local_140;
  if ((local_99 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_firstObject_0269d1f8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_b1 = false;
  bVar1 = ((ulong)puVar5 & 1) == 0;
  if (bVar1) {
    local_158 = (undefined *)0x0;
  }
  else {
    local_158 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = local_158;
  }
  local_b1 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_a8 = local_158;
  if ((local_b1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  bVar1 = ((ulong)puVar5 & 1) == 0;
  if (bVar1) {
    local_170 = (undefined *)0x0;
  }
  else {
    local_170 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = local_170;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_170;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  local_17c = 0;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_backup_url);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_17c = (uint)puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  if ((local_17c & 1) != 0) {
    puVar4 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_backup_url);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_c0;
    local_c0 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  puVar3 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_quality);
  _objc_retainAutoreleasedReturnValue();
  local_1b0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1b0 == (undefined *)0x0) {
    local_1b0 = *(undefined **)(param_1 + 0x50);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if ((long)local_1b0 < 0x50) {
    if ((long)local_1b0 < 0x40) {
      local_1c0 = 0x1e0;
      if ((long)local_1b0 < 0x20) {
        local_1c0 = 0x168;
      }
    }
    else {
      local_1c0 = 0x2d0;
    }
    local_1bc = local_1c0;
  }
  else {
    local_1bc = 0x438;
  }
  puVar4 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  puVar3 = local_c0;
  if (puVar4 != (undefined *)0x0) {
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_bilibiliQualityLabel__026ae070,local_1b0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_size)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar8,PTR_s_variantWithURL_label_width_heigh_026addc8,puVar3,uVar6,0,local_1bc,puVar5
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar7,PTR_s_appendUniqueVariant_to__026addd0,uVar8,*(undefined8 *)(param_1 + 0x20));
    (*(code *)PTR__objc_release_02578630)(uVar8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(uVar6);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_fetchBilibiliMP4Qualities_index__026ae078,
             *(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x60) + 1,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x48));
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

