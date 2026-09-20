// FUN_0158bee4 @ 0158bee4

void FUN_0158bee4(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  undefined1 local_61;
  undefined *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  uint local_3c;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_2);
  if ((local_30 == (undefined *)0x0) || (local_38 == (undefined *)0x0)) {
    local_28 = (undefined *)0x0;
    local_3c = 1;
    goto LAB_0158c3fc;
  }
  puVar3 = local_30;
  FUN_0158c42c(local_30,"m_memberData");
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_getItemInSection_atRow_;
  local_48 = puVar3;
  _NSSelectorFromString();
  local_50 = pcVar4;
  if ((local_48 == (undefined *)0x0) ||
     (puVar5 = local_48,
     (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar4),
     puVar3 = local_48, pcVar4 = local_50, ((ulong)puVar5 & 1) == 0)) {
LAB_0158c108:
    local_70 = (undefined *)0x0;
    pcVar4 = &cf_relatedGroupLogic;
    _NSSelectorFromString();
    puVar3 = local_30;
    local_78 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar4);
    if (((ulong)puVar3 & 1) != 0) {
      puVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,local_78);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_70;
      local_70 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    pcVar4 = &cf_getContactRelatedGroup;
    _NSSelectorFromString();
    local_80 = pcVar4;
    if ((local_70 == (undefined *)0x0) ||
       (puVar3 = local_70,
       (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_respondsToSelector__026ca818,pcVar4),
       ((ulong)puVar3 & 1) == 0)) {
LAB_0158c3cc:
      local_28 = (undefined *)0x0;
      local_3c = 1;
    }
    else {
      puVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,local_80);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_88 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)puVar3 & 1) == 0) {
LAB_0158c3a8:
        local_3c = 0;
      }
      else {
        puVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_row_0269e210);
        puVar6 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
        puVar3 = local_88;
        if (puVar6 <= puVar5) goto LAB_0158c3a8;
        puVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_row_0269e210);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectAtIndex__026b0360,puVar5);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = false;
        local_90 = puVar3;
        if (puVar3 != (undefined *)0x0) {
          puVar5 = PTR__OBJC_CLASS___NSNull_026ce0e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = puVar3 != puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
        puVar3 = local_90;
        if (bVar2) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = puVar3;
        }
        local_3c = (uint)bVar2;
        _objc_storeStrong(&local_90,0);
        if (local_3c == 0) goto LAB_0158c3a8;
      }
      _objc_storeStrong(&local_88,0);
      if (local_3c == 0) goto LAB_0158c3cc;
    }
    _objc_storeStrong(&local_70,0);
  }
  else {
    puVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_section_0269e988);
    puVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_row_0269e210);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,pcVar4,puVar5,puVar6);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 0;
    bVar2 = false;
    uVar1 = puVar3 != (undefined *)0x0;
    local_58 = puVar3;
    if ((bool)uVar1) {
      puVar5 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = puVar3 != puVar5;
      local_61 = uVar1;
      local_60 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      uVar1 = local_61;
    }
    local_61 = uVar1;
    puVar3 = local_58;
    if (bVar2) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar3;
    }
    local_3c = (uint)bVar2;
    _objc_storeStrong(&local_58,0);
    if (local_3c == 0) goto LAB_0158c108;
  }
  _objc_storeStrong(&local_48,0);
LAB_0158c3fc:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

