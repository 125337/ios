// FUN_007dfc2c @ 007dfc2c

void FUN_007dfc2c(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **local_368;
  uint local_358;
  uint local_2dc;
  undefined *local_240;
  uint local_228;
  undefined *local_108;
  byte local_f9;
  undefined *local_f8;
  undefined *local_f0;
  byte local_e1;
  undefined *local_e0;
  undefined *local_d8;
  byte local_c9;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  bool local_99;
  undefined *local_98;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70 [2];
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  int local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar2 = local_28;
  puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
  if ((uVar2 & 1) == 0) {
    local_38 = 1;
  }
  else {
    uVar2 = local_28;
    FUN_007cf428();
    if ((uVar2 & 1) == 0) {
      local_38 = 1;
    }
    else {
      local_40 = (undefined *)0x0;
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_28)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar5;
      do {
        puVar5 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
        if (puVar5 == (undefined *)0x0) break;
        puVar5 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_50 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeObjectAtIndex__0269d530,0);
        puVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        if (((ulong)puVar3 & 1) == 0) {
          puVar5 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_48;
          if (puVar3 != (undefined *)0x0) {
            puVar3 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObjectsFromArray__0269d540);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          local_38 = 0;
        }
        else {
          _objc_storeStrong(&local_40,local_50);
          local_38 = 3;
        }
        _objc_storeStrong(&local_50,0);
      } while (local_38 == 0);
      puVar5 = local_40;
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)puVar5 & 1) == 0) {
        local_38 = 1;
      }
      else {
        local_58 = (undefined *)0x0;
        puVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_valueForKey__0269d128,&cf_accessibilityLabel);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_60 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)puVar5 & 1) != 0) {
          _objc_storeStrong(&local_58,local_60);
        }
        _objc_storeStrong(&local_60,0);
        puVar5 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        if (puVar5 == (undefined *)0x0) {
          puVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_accessibilityLabel_0269e1c8);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = local_58;
          local_58 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
        puVar5 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        if (puVar5 == (undefined *)0x0) {
          local_38 = 1;
        }
        else {
          puVar5 = local_58;
          FUN_007d21e4();
          _objc_retainAutoreleasedReturnValue();
          local_70[0] = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
          if (puVar5 == (undefined *)0x0) {
            local_38 = 1;
          }
          else {
            puVar3 = local_70[0];
            FUN_007e1240();
            _objc_retainAutoreleasedReturnValue();
            local_78 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
            puVar5 = local_58;
            if (puVar3 == (undefined *)0x0) {
              local_38 = 1;
            }
            else {
              puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                         PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
              _objc_retainAutoreleasedReturnValue();
              local_80 = puVar5;
              (*(code *)PTR__objc_release_02578630)(puVar3);
              puVar5 = local_80;
              (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_hasSuffix__0269d018,&cf__);
              local_228 = 1;
              if (((ulong)puVar5 & 1) == 0) {
                puVar5 = local_80;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_80,PTR_s_hasSuffix__0269d018,&cf_format_s_);
                local_228 = (uint)puVar5;
              }
              local_81 = (byte)local_228 & 1;
              local_99 = false;
              bVar1 = (local_228 & 1) == 0;
              if (bVar1) {
                local_240 = local_78;
              }
              else {
                local_240 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf____);
                _objc_retainAutoreleasedReturnValue();
                local_98 = local_240;
              }
              local_99 = !bVar1;
              (*(code *)PTR__objc_retain_02578638)();
              local_90 = local_240;
              if ((local_99 & 1U) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_98);
              }
              puVar5 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_accessibilityLabel_0269e1c8);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar5);
              if (((ulong)puVar3 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_setAccessibilityLabel__0269e968,local_90);
              }
              puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,
                         local_28);
              _objc_retainAutoreleasedReturnValue();
              local_a8 = puVar5;
              while (puVar5 = local_a8,
                    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_count_0269cfe0),
                    puVar5 != (undefined *)0x0) {
                puVar5 = local_a8;
                (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_firstObject_0269d1f8);
                _objc_retainAutoreleasedReturnValue();
                local_b0 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_a8,PTR_s_removeObjectAtIndex__0269d530,0);
                puVar5 = local_b0;
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(puVar5);
                puVar5 = local_a8;
                if (puVar3 != (undefined *)0x0) {
                  puVar3 = local_b0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObjectsFromArray__0269d540);
                  (*(code *)PTR__objc_release_02578630)(puVar3);
                }
                puVar5 = local_b0;
                puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
                puVar3 = local_b0;
                if (((ulong)puVar5 & 1) == 0) {
                  local_38 = 7;
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_b8 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_text_0269ce68);
                  _objc_retainAutoreleasedReturnValue();
                  local_c9 = 0;
                  local_c0 = puVar3;
                  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
                  local_2dc = 0;
                  if (puVar3 == (undefined *)0x0) {
                    puVar5 = local_b8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_attributedText_0269fcf8);
                    _objc_retainAutoreleasedReturnValue();
                    local_c9 = 1;
                    puVar3 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
                    local_c8 = puVar5;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSAttributedString_026ce0d8,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
                    local_2dc = (uint)puVar5;
                  }
                  if ((local_c9 & 1) != 0) {
                    (*(code *)PTR__objc_release_02578630)(local_c8);
                  }
                  if ((local_2dc & 1) != 0) {
                    puVar3 = local_b8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_attributedText_0269fcf8);
                    _objc_retainAutoreleasedReturnValue();
                    puVar4 = puVar3;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    puVar5 = local_c0;
                    local_c0 = puVar4;
                    (*(code *)PTR__objc_release_02578630)(puVar5);
                    (*(code *)PTR__objc_release_02578630)(puVar3);
                  }
                  puVar5 = local_c0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
                  if (puVar5 == (undefined *)0x0) {
                    local_38 = 7;
                  }
                  else {
                    puVar3 = local_c0;
                    FUN_007d21e4();
                    _objc_retainAutoreleasedReturnValue();
                    local_d8 = puVar3;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar3,PTR_s_isEqualToString__0269ccc8,local_70[0]);
                    puVar5 = local_c0;
                    if (((ulong)puVar3 & 1) == 0) {
                      local_38 = 7;
                    }
                    else {
                      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
                      _objc_retainAutoreleasedReturnValue();
                      local_e0 = puVar5;
                      (*(code *)PTR__objc_release_02578630)(puVar3);
                      puVar5 = local_e0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_e0,PTR_s_hasSuffix__0269d018,&cf__);
                      local_358 = 1;
                      if (((ulong)puVar5 & 1) == 0) {
                        puVar5 = local_e0;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_e0,PTR_s_hasSuffix__0269d018,&cf_format_s_);
                        local_358 = (uint)puVar5;
                      }
                      local_e1 = (byte)local_358 & 1;
                      if ((local_358 & 1) == 0) {
                        local_368 = &local_78;
                      }
                      else {
                        local_368 = &local_90;
                      }
                      puVar5 = *local_368;
                      (*(code *)PTR__objc_retain_02578638)();
                      local_f0 = puVar5;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar5,PTR_s_isEqualToString__0269ccc8,local_c0);
                      if (((ulong)puVar5 & 1) == 0) {
                        local_f9 = 0;
                        puVar5 = local_b8;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_b8,PTR_s_attributedText_0269fcf8);
                        _objc_retainAutoreleasedReturnValue();
                        puVar3 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSAttributedString_026ce0d8,
                                   PTR_s_class_0269cd60);
                        puVar4 = puVar5;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (puVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
                        bVar1 = false;
                        if (((ulong)puVar4 & 1) != 0) {
                          puVar3 = local_b8;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_b8,PTR_s_attributedText_0269fcf8);
                          _objc_retainAutoreleasedReturnValue();
                          local_f9 = 1;
                          local_f8 = puVar3;
                          (*(code *)PTR__objc_msgSend_02578628)();
                          bVar1 = puVar3 != (undefined *)0x0;
                        }
                        if ((local_f9 & 1) != 0) {
                          (*(code *)PTR__objc_release_02578630)(local_f8);
                        }
                        (*(code *)PTR__objc_release_02578630)(puVar5);
                        if (bVar1) {
                          puVar5 = local_b8;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_b8,PTR_s_attributedText_0269fcf8);
                          _objc_retainAutoreleasedReturnValue();
                          puVar3 = puVar5;
                          (*(code *)PTR__objc_msgSend_02578628)();
                          _objc_retainAutoreleasedReturnValue();
                          local_108 = puVar3;
                          (*(code *)PTR__objc_release_02578630)(puVar5);
                          puVar5 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
                          _objc_alloc();
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (puVar5,PTR_s_initWithString_attributes__026a02b0,local_f0,
                                     local_108);
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_b8,PTR_s_setAttributedText__026a0000,puVar5);
                          (*(code *)PTR__objc_release_02578630)(puVar5);
                          _objc_storeStrong(&local_108,0);
                        }
                        else {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_b8,PTR_s_setText__026caa88,local_f0);
                        }
                        local_38 = 0;
                      }
                      else {
                        local_38 = 7;
                      }
                      _objc_storeStrong(&local_f0);
                      _objc_storeStrong(&local_e0,0);
                    }
                    _objc_storeStrong(&local_d8,0);
                  }
                  _objc_storeStrong(&local_c0);
                  _objc_storeStrong(&local_b8,0);
                }
                _objc_storeStrong(&local_b0,0);
              }
              _objc_storeStrong(0,&local_a8);
              _objc_storeStrong(&local_90,0);
              _objc_storeStrong(&local_80,0);
              local_38 = 0;
            }
            _objc_storeStrong(&local_78,0);
          }
          _objc_storeStrong(local_70,0);
        }
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

