// FUN_00442ba0 @ 00442ba0

void FUN_00442ba0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  uint local_7c;
  ulong local_78;
  undefined *local_70;
  undefined *local_68;
  ulong local_60;
  ulong local_58 [3];
  ulong local_40;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  if (((((ulong)puVar1 & 1) != 0) && (uVar4 = local_28, FUN_004504e8(), (uVar4 & 1) != 0)) &&
     (DAT_028ca9b8 != 0)) {
    uVar4 = local_28;
    FUN_00455950();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_40;
    local_58[0] = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_item_026a1890);
    uVar2 = local_58[0];
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_60 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar4 = local_60;
    if ((((uVar2 & 1) != 0) && (-1 < (long)local_60)) &&
       (uVar2 = local_58[0], (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_count_0269cfe0)
       , puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440, (long)uVar4 < (long)uVar2)) {
      uVar4 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58[0],PTR_s_objectAtIndexedSubscript__0269cc78,local_60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_relativePathResolvingWrap__026a3d80);
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar1;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      puVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      if (puVar1 != (undefined *)0x0) {
        FUN_0043c204();
        _objc_retainAutoreleasedReturnValue();
        local_70 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_containsObject__0269cbb8,local_68);
        if (((ulong)puVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addObject__0269d180,local_68);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_removeObject__0269d678,local_68);
        }
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_cellForItemAtIndexPath__026a3d90,local_40);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_78 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        uVar4 = local_78;
        if ((uVar2 & 1) != 0) {
          puVar1 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_containsObject__0269cbb8,local_68);
          FUN_00455ae0(uVar4,(ulong)puVar1 & 0xffffffff);
        }
        uVar4 = local_28;
        FUN_00450a84();
        _objc_retainAutoreleasedReturnValue();
        FUN_00456da8();
        (*(code *)PTR__objc_release_02578630)(uVar4);
        _objc_storeStrong(&local_78);
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_68,0);
    }
    local_7c = 1;
    _objc_storeStrong(local_58,0);
    goto LAB_00443398;
  }
  puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  if ((((ulong)puVar1 & 1) != 0) && (uVar4 = local_28, FUN_004504e8(), (uVar4 & 1) != 0)) {
    uVar4 = local_28;
    FUN_00455950();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_40;
    local_88 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_item_026a1890);
    uVar3 = local_88;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_90 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar2 = local_90;
    uVar4 = uVar3 & 0xffffffff;
    if (((uVar3 & 1) == 0) || (uVar4 = local_90, (long)local_90 < 0)) {
LAB_0044333c:
      local_7c = 0;
    }
    else {
      uVar3 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
      uVar4 = uVar2 - uVar3;
      if ((long)uVar3 <= (long)uVar2) goto LAB_0044333c;
      uVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_objectAtIndexedSubscript__0269cc78,local_90);
      _objc_retainAutoreleasedReturnValue();
      local_98 = uVar4;
      FUN_0045715c();
      _objc_retainAutoreleasedReturnValue();
      local_a0 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
      if (((uVar4 == 0) ||
          (uVar4 = local_a0,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_isEqualToString__0269ccc8,&cf_custom_emoticon_pid),
          (uVar4 & 1) != 0)) ||
         (uVar4 = local_98, FUN_004575a4(local_98,local_28), (uVar4 & 1) == 0)) {
        local_7c = 0;
      }
      else {
        local_7c = 1;
      }
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_98,0);
      uVar4 = (ulong)local_7c;
      if (local_7c == 0) goto LAB_0044333c;
    }
    _objc_storeStrong(uVar4,&local_88,0);
    if (local_7c != 0) goto LAB_00443398;
  }
  (*DAT_028caa60)(local_28,local_30,local_38,local_40);
  local_7c = 0;
LAB_00443398:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

