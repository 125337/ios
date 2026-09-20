// FUN_015a9cc0 @ 015a9cc0

void FUN_015a9cc0(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  dispatch_time_t dVar7;
  ulong uVar8;
  long lVar9;
  cfstringStruct *local_d8;
  cfstringStruct *local_c0;
  cfstringStruct *local_a8;
  bool local_81;
  cfstringStruct *local_80;
  bool local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  bool local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  byte local_39;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  
  uVar8 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18);
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
  if (uVar8 < uVar2) {
    pcVar4 = *(cfstringStruct **)(param_1 + 0x20);
    lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    *(long *)(lVar9 + 0x18) = *(long *)(lVar9 + 0x18) + 1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_objectAtIndexedSubscript__0269cc78);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 0;
    local_38 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar6 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    local_51 = false;
    bVar1 = ((ulong)pcVar6 & 1) == 0;
    if (bVar1) {
      local_a8 = &cf___;
    }
    else {
      local_a8 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_a8;
    }
    local_51 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_a8;
    if ((local_51 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar6 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_text);
    if (((ulong)pcVar6 & 1) == 0) {
      pcVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_localId);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_81 = ((ulong)pcVar4 & 1) == 0;
      if (local_81) {
        local_d8 = (cfstringStruct *)0x0;
      }
      else {
        local_80 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_localId);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      local_81 = !local_81;
      if (local_81) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      FUN_015aa864();
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = local_d8;
      FUN_015aa34c();
      local_39 = (byte)pcVar6;
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    else {
      pcVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar4 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
      local_69 = ((ulong)pcVar4 & 1) == 0;
      if (local_69) {
        local_c0 = &cf___;
      }
      else {
        local_c0 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_c0;
      }
      local_69 = !local_69;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_c0;
      if (local_69) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      pcVar6 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if (pcVar6 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,local_60,
                   *(undefined8 *)(param_1 + 0x28));
        local_39 = 1;
      }
      _objc_storeStrong(pcVar6 != (cfstringStruct *)0x0,&local_60,0);
    }
    if ((local_39 & 1) == 0) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 8);
      *(long *)(lVar9 + 0x18) = *(long *)(lVar9 + 0x18) + 1;
    }
    else {
      lVar9 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      *(long *)(lVar9 + 0x18) = *(long *)(lVar9 + 0x18) + 1;
    }
    uVar8 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18);
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
    if (uVar8 < uVar2) {
      dVar7 = _dispatch_time(0,350000000);
      puVar5 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar7,puVar5,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x28))
      ;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    else {
      if (*(long *)(param_1 + 0x30) != 0) {
        (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
                  (*(long *)(param_1 + 0x30),
                   *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18),
                   *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18));
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0x50) + 8);
      uVar3 = *(undefined8 *)(lVar9 + 0x28);
      *(undefined8 *)(lVar9 + 0x28) = 0;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_38,0);
  }
  else {
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
                (*(long *)(param_1 + 0x30),
                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18),
                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18));
    }
    lVar9 = *(long *)(*(long *)(param_1 + 0x50) + 8);
    uVar3 = *(undefined8 *)(lVar9 + 0x28);
    *(undefined8 *)(lVar9 + 0x28) = 0;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  return;
}

