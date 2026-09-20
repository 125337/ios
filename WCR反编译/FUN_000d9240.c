// FUN_000d9240 @ 000d9240

void FUN_000d9240(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong local_190;
  ulong local_128;
  bool local_a1;
  ulong local_a0;
  ulong local_98;
  byte local_89;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  byte local_41;
  ulong local_40;
  ulong local_28;
  ulong *puVar3;
  
  puVar3 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar3,param_1);
  uVar2 = (uint)puVar3;
  local_41 = 0;
  FUN_000d8808();
  bVar1 = true;
  if ((uVar2 & 1) != 0) {
    uVar4 = local_28;
    FUN_000d88a4();
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    bVar1 = uVar4 == 0;
    local_40 = uVar4;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar1) {
    local_48 = 1;
    goto LAB_000d99b4;
  }
  uVar4 = local_28;
  FUN_000d8d08(local_28,"m_buttonIndexes");
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_28;
  local_50 = uVar4;
  FUN_000d8d08(local_28,"m_buttons");
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_28;
  local_58 = uVar5;
  FUN_000d8d08(local_28,"m_buttonTitles");
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_50;
  puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_60 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
  uVar4 = local_58;
  if ((uVar5 & 1) == 0) {
LAB_000d9454:
    local_48 = 1;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
    if ((uVar4 & 1) == 0) goto LAB_000d9454;
    local_68 = 0;
    while( true ) {
      uVar4 = local_68;
      uVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
      uVar7 = local_58;
      local_70 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
      local_128 = uVar7;
      if (local_70 < uVar7) {
        local_128 = local_70;
      }
      local_80 = local_128;
      local_78 = uVar7;
      if (local_128 <= uVar4) goto LAB_000d9980;
      local_89 = 0;
      uVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_68);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = true;
      if ((uVar5 & 1) != 0) {
        uVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_68);
        _objc_retainAutoreleasedReturnValue();
        local_89 = 1;
        local_88 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = uVar5 != 1;
      }
      if ((local_89 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      (*(code *)PTR__objc_release_02578630)(uVar4);
      if (!bVar1) break;
      local_68 = local_68 + 1;
    }
    uVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_68);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
    local_a1 = (uVar5 & 1) == 0;
    if (local_a1) {
      local_190 = 0;
    }
    else {
      local_190 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectAtIndexedSubscript__0269cc78,local_68);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = local_190;
    }
    local_a1 = !local_a1;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = local_190;
    if (local_a1) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setTitle_forState__026caab8,&cf_d__X__,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setAccessibilityLabel__0269e968,&cf_d__X__)
    ;
    uVar5 = local_60;
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
    uVar4 = local_68;
    if (((uVar5 & 1) != 0) &&
       (uVar5 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0),
       uVar4 < uVar5)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setObject_atIndexedSubscript__0269e970,&cf_d__X__,local_68);
    }
    local_48 = 2;
    _objc_storeStrong(&local_98,0);
LAB_000d9980:
    local_48 = 0;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
LAB_000d99b4:
  _objc_storeStrong(&local_28,0);
  return;
}

