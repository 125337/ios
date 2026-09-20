// FUN_000da074 @ 000da074

void FUN_000da074(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong local_140;
  ulong local_f8;
  bool local_91;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  int local_38;
  ulong local_28;
  ulong *puVar2;
  
  puVar2 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  FUN_000da710();
  if ((uVar1 & 1) == 0) {
    local_38 = 1;
    goto LAB_000da6ac;
  }
  uVar5 = local_28;
  FUN_000d8d08(local_28,"m_buttonIndexes");
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_28;
  local_40 = uVar5;
  FUN_000d8d08(local_28,"m_buttons");
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_28;
  local_48 = uVar3;
  FUN_000d8d08(local_28,"m_buttonTitles");
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_40;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_50 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  uVar5 = local_48;
  if ((uVar3 & 1) == 0) {
LAB_000da1f8:
    uVar5 = 1;
    local_38 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar5 & 1) == 0) goto LAB_000da1f8;
    uVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    uVar3 = local_48;
    local_60 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    local_f8 = uVar3;
    if (local_60 < uVar3) {
      local_f8 = local_60;
    }
    local_70 = local_f8;
    local_58 = local_f8;
    local_68 = uVar3;
    for (local_78 = 0; uVar5 = local_78 - local_58, local_78 < local_58; local_78 = local_78 + 1) {
      uVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_78);
      _objc_retainAutoreleasedReturnValue();
      local_80 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
      if (((uVar5 & 1) == 0) ||
         (uVar5 = local_80,
         (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_integerValue_026ca750), uVar5 != 0xb))
      {
        local_38 = 4;
      }
      else {
        uVar5 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_78);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
        uVar3 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
        local_91 = (uVar3 & 1) == 0;
        if (local_91) {
          local_140 = 0;
        }
        else {
          local_140 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_78);
          _objc_retainAutoreleasedReturnValue();
          local_90 = local_140;
        }
        local_91 = !local_91;
        (*(code *)PTR__objc_retain_02578638)();
        local_88 = local_140;
        if (local_91) {
          (*(code *)PTR__objc_release_02578630)(local_90);
        }
        (*(code *)PTR__objc_release_02578630)(uVar5);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_setTitle_forState__026caab8,&cf_J_YU_,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_setAccessibilityLabel__0269e968,&cf_J_YU_);
        uVar3 = local_50;
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        uVar5 = local_78;
        if (((uVar3 & 1) != 0) &&
           (uVar3 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0),
           uVar5 < uVar3)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_setObject_atIndexedSubscript__0269e970,&cf_J_YU_,local_78);
        }
        local_38 = 2;
        _objc_storeStrong(&local_88,0);
      }
      _objc_storeStrong(&local_80,0);
      uVar5 = (ulong)(local_38 - 2U);
      if (local_38 - 2U == 0) break;
    }
    local_38 = 0;
  }
  _objc_storeStrong(uVar5,&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
LAB_000da6ac:
  _objc_storeStrong(&local_28,0);
  return;
}

