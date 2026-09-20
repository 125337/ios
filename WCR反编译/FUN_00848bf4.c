// FUN_00848bf4 @ 00848bf4

void FUN_00848bf4(undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *local_2e8;
  undefined *local_2e0;
  undefined *local_288;
  undefined *local_1f8;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  undefined8 local_140;
  byte local_131;
  undefined *local_130;
  undefined *local_128;
  byte local_119;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108 [3];
  undefined4 local_f0;
  int local_ec;
  long local_e8;
  undefined *local_e0;
  undefined1 auStack_d8 [128];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = (undefined *)0x0;
  _objc_storeStrong(&local_e0,param_1);
  local_e8 = 0;
  _objc_storeStrong(&local_e8,param_2);
  puVar3 = local_e0;
  local_ec = param_3;
  if (((local_e0 == (undefined *)0x0) || (local_e8 == 0)) || (param_3 < 0)) {
    local_f0 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UITextField_026ce2a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITextField_026ce2a0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = local_e0;
      _object_getClass();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_108[0] = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_containsString__0269d0b0,&cf_SearchBarTextField);
      if ((((ulong)puVar3 & 1) == 0) &&
         (puVar3 = local_108[0],
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_108[0],PTR_s_containsString__0269d0b0,&cf_TextFieldImageBackground),
         ((ulong)puVar3 & 1) == 0)) {
        puVar3 = local_e0;
        FUN_00849728();
        if (((ulong)puVar3 & 1) == 0) {
          FUN_00827dfc(local_e0,local_e8);
          _memset(auStack_180,0,0x40);
          puVar3 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_2e0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_d8,
                     0x10);
          if (local_2e0 != (undefined *)0x0) {
            lVar7 = *local_170;
            local_2e8 = (undefined *)0x0;
            do {
              do {
                if (*local_170 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_170 - lVar7,puVar2);
                }
                local_140 = *(undefined8 *)(local_178 + (long)local_2e8 * 8);
                FUN_00848bf4(local_140,local_e8,local_ec + -1);
                local_2e8 = local_2e8 + 1;
              } while (local_2e8 < local_2e0);
              local_2e0 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,
                         auStack_d8,0x10);
              local_2e8 = (undefined *)0x0;
            } while (local_2e0 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_f0 = 0;
        }
        else {
          lVar7 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_objectForKey__0269e048,local_e0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (lVar7 == 0) {
            local_58 = &cf_color;
            puVar3 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_backgroundColor_026ca518);
            _objc_retainAutoreleasedReturnValue();
            local_119 = 0;
            local_1f8 = puVar3;
            if (puVar3 == (undefined *)0x0) {
              local_1f8 = PTR__OBJC_CLASS___NSNull_026ce0e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
              _objc_retainAutoreleasedReturnValue();
              local_118 = local_1f8;
            }
            puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_40 = local_1f8;
            local_50 = &cf_opaque;
            puVar4 = local_e0;
            local_119 = puVar3 == (undefined *)0x0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isOpaque_0269f438);
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_numberWithBool__0269ce60,(ulong)puVar4 & 0xffffffff);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_48 = &cf_hidden;
            puVar5 = local_e0;
            local_38 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isHidden_026ca768);
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_numberWithBool__0269ce60,(ulong)puVar5 & 0xffffffff);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_30 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_110 = puVar6;
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            if ((local_119 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_118);
            }
            (*(code *)PTR__objc_release_02578630)(puVar3);
            puVar3 = local_e0;
            puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((ulong)puVar3 & 1) != 0) {
              local_288 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_image_026ca678);
              _objc_retainAutoreleasedReturnValue();
              local_131 = 0;
              bVar1 = local_288 == (undefined *)0x0;
              local_128 = local_288;
              if (bVar1) {
                local_288 = PTR__OBJC_CLASS___NSNull_026ce0e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
                _objc_retainAutoreleasedReturnValue();
                local_130 = local_288;
              }
              local_131 = bVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_110,PTR_s_setObject_forKeyedSubscript__0269d248,local_288,&cf_image);
              if ((local_131 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_130);
              }
              _objc_storeStrong(&local_128,0);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_setObject_forKey__026ca9e8,local_110,local_e0);
            _objc_storeStrong(&local_110,0);
          }
          puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setBackgroundColor__026ca888);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setOpaque__026ca9f8,0);
          puVar3 = local_e0;
          puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((ulong)puVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setImage__026ca978,0);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setHidden__026ca970,1);
          local_f0 = 1;
        }
      }
      else {
        local_f0 = 1;
      }
      _objc_storeStrong(local_108,0);
    }
    else {
      local_f0 = 1;
    }
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

