// FUN_00192f68 @ 00192f68

void FUN_00192f68(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint local_2fc;
  uint local_24c;
  undefined *local_1f0;
  undefined *local_e8;
  byte local_d9;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8 [2];
  undefined *local_a8;
  byte local_99;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80 [2];
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58 [3];
  undefined *local_40;
  uint local_34;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == (undefined *)0x0) {
    local_28 = (undefined *)0x0;
    local_34 = 1;
    goto LAB_00194204;
  }
  local_40 = (undefined *)0x0;
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_contactsItemView_0269fcf0);
  if (((ulong)puVar2 & 1) != 0) {
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contactsItemView_0269fcf0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_40;
    local_40 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = local_40;
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_30;
    local_58[0] = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = local_58[0];
    if (((ulong)puVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_addObject__0269d180,local_30);
    }
    else {
      puVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    do {
      puVar2 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_count_0269cfe0);
      uVar5 = 0;
      if (puVar2 == (undefined *)0x0) break;
      puVar2 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_removeObjectAtIndex__0269d530,0);
      puVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar3 & 1) == 0) {
        puVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_58[0];
        if (puVar3 != (undefined *)0x0) {
          puVar3 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        local_34 = 0;
      }
      else {
        _objc_storeStrong(&local_40,local_60);
        local_34 = 3;
      }
      _objc_storeStrong(&local_60,0);
      uVar5 = local_34;
    } while (local_34 == 0);
    _objc_storeStrong(uVar5,local_58,0);
  }
  puVar2 = local_40;
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)puVar2 & 1) == 0) {
    local_28 = (undefined *)0x0;
    local_34 = 1;
  }
  else {
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_valueForKey__0269d128,&cf_accessibilityLabel);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_68 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      local_1f0 = (undefined *)0x0;
    }
    else {
      local_1f0 = local_68;
    }
    FUN_00194e40();
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_1f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_length_0269cca0);
    puVar2 = local_70;
    bVar1 = local_1f0 != (undefined *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
    }
    local_34 = (uint)bVar1;
    _objc_storeStrong(bVar1,&local_70);
    _objc_storeStrong(&local_68,0);
    if (local_34 == 0) {
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_valueForKey__0269d128,&cf_m_nickNameLabel);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      local_80[0] = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      puVar2 = local_80[0];
      if (((ulong)puVar3 & 1) == 0) {
LAB_00193b58:
        local_34 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_88 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        local_99 = 0;
        local_90 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
        local_24c = 0;
        if (puVar2 == (undefined *)0x0) {
          puVar2 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_attributedText_0269fcf8);
          _objc_retainAutoreleasedReturnValue();
          local_99 = 1;
          puVar3 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
          local_98 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSAttributedString_026ce0d8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_24c = (uint)puVar2;
        }
        if ((local_99 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_98);
        }
        if ((local_24c & 1) != 0) {
          puVar3 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_attributedText_0269fcf8);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_90;
          local_90 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        puVar3 = local_90;
        FUN_00194e40();
        _objc_retainAutoreleasedReturnValue();
        local_a8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
        puVar2 = local_a8;
        bVar1 = puVar3 != (undefined *)0x0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = puVar2;
        }
        local_34 = (uint)bVar1;
        _objc_storeStrong(bVar1,&local_a8);
        _objc_storeStrong(&local_90,0);
        _objc_storeStrong(&local_88,0);
        if (local_34 == 0) goto LAB_00193b58;
      }
      _objc_storeStrong(local_80,0);
      if (local_34 == 0) {
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,
                   local_40);
        _objc_retainAutoreleasedReturnValue();
        local_b8[0] = puVar2;
        do {
          puVar2 = local_b8[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_count_0269cfe0);
          if (puVar2 == (undefined *)0x0) {
            local_28 = (undefined *)0x0;
            local_34 = 1;
            break;
          }
          puVar2 = local_b8[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          local_c0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_removeObjectAtIndex__0269d530,0);
          puVar2 = local_c0;
          puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          puVar3 = local_c0;
          if (((ulong)puVar2 & 1) == 0) {
LAB_00194050:
            puVar2 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
            puVar2 = local_b8[0];
            if (puVar3 != (undefined *)0x0) {
              puVar3 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_subviews_026cab40);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
              (*(code *)PTR__objc_release_02578630)(puVar3);
            }
            local_34 = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_c8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_text_0269ce68);
            _objc_retainAutoreleasedReturnValue();
            local_d9 = 0;
            local_d0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
            local_2fc = 0;
            if (puVar3 == (undefined *)0x0) {
              puVar2 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_attributedText_0269fcf8);
              _objc_retainAutoreleasedReturnValue();
              local_d9 = 1;
              puVar3 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
              local_d8 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSAttributedString_026ce0d8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
              local_2fc = (uint)puVar2;
            }
            if ((local_d9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_d8);
            }
            if ((local_2fc & 1) != 0) {
              puVar3 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_attributedText_0269fcf8);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = local_d0;
              local_d0 = puVar4;
              (*(code *)PTR__objc_release_02578630)(puVar2);
              (*(code *)PTR__objc_release_02578630)(puVar3);
            }
            puVar3 = local_d0;
            FUN_00194e40();
            _objc_retainAutoreleasedReturnValue();
            local_e8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
            puVar2 = local_e8;
            bVar1 = puVar3 != (undefined *)0x0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = puVar2;
            }
            local_34 = (uint)bVar1;
            _objc_storeStrong(bVar1,&local_e8);
            _objc_storeStrong(&local_d0,0);
            _objc_storeStrong(&local_c8,0);
            if (local_34 == 0) goto LAB_00194050;
          }
          _objc_storeStrong(&local_c0,0);
        } while (local_34 == 0);
        _objc_storeStrong(local_b8,0);
      }
    }
  }
  _objc_storeStrong(&local_40,0);
LAB_00194204:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

