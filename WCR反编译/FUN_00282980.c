// FUN_00282980 @ 00282980

void FUN_00282980(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long local_1e0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  long local_90;
  ulong local_88;
  ulong local_80 [2];
  ulong local_70;
  ulong local_68 [2];
  ulong local_58;
  ulong local_50;
  ulong local_48;
  byte local_39;
  undefined4 local_38;
  ulong local_28;
  ulong *puVar2;
  
  puVar2 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  FUN_0028364c();
  if (((uVar1 & 1) == 0) || (local_28 == 0)) {
    local_38 = 1;
  }
  else {
    local_39 = 0;
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_displayGridStyle_026a1790);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_displayGridStyle_026a1790);
      local_39 = (byte)uVar3;
    }
    local_48 = 0;
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_contentVM_026a1798);
    if ((uVar3 & 1) != 0) {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentVM_026a1798);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_48;
      local_48 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    if ((local_39 & 1) == 0) {
      local_88 = 0;
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_itemArray_026a1328);
      if ((uVar3 & 1) != 0) {
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_itemArray_026a1328);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_88;
        local_88 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      uVar3 = local_88;
      puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar6);
      if (((uVar3 & 1) == 0) ||
         (uVar3 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0),
         uVar3 == 0)) {
        local_38 = 1;
      }
      else {
        uVar3 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
        if (uVar3 < 2) {
          local_1e0 = 0;
        }
        else {
          uVar3 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
          local_1e0 = uVar3 - 1;
        }
        local_90 = local_1e0;
        uVar4 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_objectAtIndexedSubscript__0269cc78,local_1e0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_98 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
        uVar3 = local_98;
        if ((uVar4 & 1) == 0) {
          local_38 = 1;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_a0 = uVar3;
          FUN_002836e8();
          if ((uVar3 & 1) == 0) {
            uVar3 = local_48;
            FUN_00283b44();
            _objc_retainAutoreleasedReturnValue();
            local_a8 = uVar3;
            if (uVar3 == 0) {
              local_38 = 1;
            }
            else {
              uVar3 = local_a0;
              (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_mutableCopy_0269d8a0);
              local_b0 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_insertObject_atIndex__0269eac0,local_a8,0);
              uVar3 = local_88;
              (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_mutableCopy_0269d8a0);
              local_b8 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_setObject_atIndexedSubscript__0269e970,local_b0,local_90);
              uVar3 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setItemArray__026a1338);
              if ((uVar3 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_setItemArray__026a1338,local_b8);
              }
              uVar3 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_respondsToSelector__026ca818,
                         PTR_s_relayoutScrollSheet_026a1340);
              if ((uVar3 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_relayoutScrollSheet_026a1340);
              }
              _objc_storeStrong(&local_b8);
              _objc_storeStrong(&local_b0,0);
              local_38 = 0;
            }
            _objc_storeStrong(&local_a8,0);
          }
          else {
            local_38 = 1;
          }
          _objc_storeStrong(&local_a0,0);
        }
        _objc_storeStrong(&local_98,0);
      }
      _objc_storeStrong(&local_88,0);
    }
    else {
      local_50 = 0;
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_bodyGridView_026a17a0);
      if ((uVar3 & 1) != 0) {
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bodyGridView_026a17a0);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_50;
        local_50 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      local_58 = 0;
      uVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_valueForKey__0269d128,&cf_sections);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar3 = local_58;
      local_58 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar3 = local_58;
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar6);
      if (((uVar3 & 1) == 0) ||
         (uVar3 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0),
         uVar3 == 0)) {
        local_38 = 1;
      }
      else {
        uVar4 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_70 = 0;
        local_68[0] = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_valueForKey__0269d128,&cf_items);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        uVar3 = local_70;
        local_70 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar3 = local_70;
        puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar6);
        if ((uVar3 & 1) == 0) {
          local_38 = 1;
        }
        else {
          uVar3 = local_70;
          FUN_002836e8();
          if ((uVar3 & 1) == 0) {
            uVar3 = local_48;
            FUN_00283b44();
            _objc_retainAutoreleasedReturnValue();
            local_80[0] = uVar3;
            if (uVar3 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_70,PTR_s_insertObject_atIndex__0269eac0,uVar3,0);
              uVar3 = local_68[0];
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_68[0],PTR_s_respondsToSelector__026ca818,PTR_s_setItems__026a17a8);
              if ((uVar3 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_setItems__026a17a8,local_70)
                ;
              }
              uVar3 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setSections__026a17b0);
              if ((uVar3 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setSections__026a17b0,local_58)
                ;
              }
              uVar3 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setNeedsLayout_0269deb8);
              if ((uVar3 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setNeedsLayout_0269deb8);
              }
            }
            local_38 = 1;
            _objc_storeStrong(local_80,0);
          }
          else {
            local_38 = 1;
          }
        }
        _objc_storeStrong(&local_70);
        _objc_storeStrong(local_68,0);
      }
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

