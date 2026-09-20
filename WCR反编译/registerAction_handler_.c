// registerAction:handler: @ 016076bc

/* Function Stack Size: 0x20 bytes */

void WCRSuperFloatMgr::registerAction_handler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  cfstringStruct *local_208;
  cfstringStruct *local_1f8;
  undefined *local_198;
  cfstringStruct *local_180;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  undefined *local_e0;
  long local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  long local_a8;
  undefined **local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined4 local_6c;
  long local_68;
  cfstringStruct *local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = (cfstringStruct *)0x0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3,param_3,param_4,param_5);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_4);
  pcVar4 = local_60;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)pcVar4 & 1) == 0) {
    local_6c = 1;
  }
  else {
    pcVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    FUN_016082d8();
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      pcVar5 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar5;
      FUN_016082d8();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_78;
      local_78 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
    }
    pcVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon)
    ;
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    FUN_016082d8();
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    FUN_016082d8();
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    if ((pcVar4 == (cfstringStruct *)0x0) ||
       (pcVar4 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0),
       pcVar4 == (cfstringStruct *)0x0)) {
      local_6c = 1;
    }
    else {
      pcVar5 = local_88;
      FUN_01608388();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_88;
      local_90 = pcVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_hasPrefix__0269d320,&cf_wcr_sf_);
      if (((ulong)pcVar4 & 1) == 0) {
        pcVar4 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_isEqualToString__0269ccc8,&cf_switch);
        if (((ulong)pcVar4 & 1) == 0) {
          pcVar4 = &cf_wcr_sf_reg_;
          (*(code *)PTR__objc_msgSend_02578628)
                    (&cf_wcr_sf_reg_,PTR_s_stringByAppendingString__0269d398,local_88);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = local_98;
          local_98 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
        }
        else {
          pcVar4 = &cf_wcr_sf_switch_;
          (*(code *)PTR__objc_msgSend_02578628)
                    (&cf_wcr_sf_switch_,PTR_s_stringByAppendingString__0269d398,local_88);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = local_98;
          local_98 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
        }
      }
      lVar1 = local_68;
      local_a0 = (undefined **)0x0;
      if (local_68 != 0) {
        ppuVar7 = &local_c8;
        local_c8 = PTR___NSConcreteStackBlock_02578660;
        local_c0 = 0xc2000000;
        local_bc = 0;
        local_b8 = FUN_016087b0;
        local_b0 = &DAT_025819d0;
        (*(code *)PTR__objc_retain_02578638)();
        local_a8 = lVar1;
        _objc_retainBlock();
        ppuVar2 = local_a0;
        local_a0 = ppuVar7;
        (*(code *)PTR__objc_release_02578630)(ppuVar2);
        _objc_storeStrong(&local_a8,0);
      }
      pcVar5 = local_78;
      pcVar4 = local_98;
      pcVar6 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_180 = &cf_icons_outlined_more;
      }
      else {
        local_180 = local_80;
      }
      _WCRSuperFloatRegisterAction(pcVar4,pcVar5,local_180,&cf_lQcS,local_a0);
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_198 = puVar8;
      if (puVar8 == (undefined *)0x0) {
        local_198 = *(undefined **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_mutableCopy_0269d8a0);
      local_d0 = local_198;
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      for (local_d8 = 0; lVar1 = local_d8, puVar3 = local_d0,
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0), lVar1 < (long)puVar3
          ; local_d8 = local_d8 + 1) {
        puVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectAtIndexedSubscript__0269cc78,local_d8);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        puVar9 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar8);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (((ulong)puVar9 & 1) != 0) {
          puVar3 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_objectAtIndexedSubscript__0269cc78,local_d8);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          FUN_016082d8();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar9);
          (*(code *)PTR__objc_release_02578630)(puVar8);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (((ulong)puVar10 & 1) != 0) {
            puVar3 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_objectAtIndexedSubscript__0269cc78,local_d8);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_e0 = puVar8;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_setObject_forKeyedSubscript__0269d248,local_90,
                       _WCRSuperFloatCustomKindKey);
            pcVar4 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90,PTR_s_isEqualToString__0269ccc8,&cf_switch);
            if (((ulong)pcVar4 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e0,PTR_s_setObject_forKeyedSubscript__0269d248,local_88,
                         _WCRSuperFloatCustomPayloadKey);
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
              pcVar4 = local_88;
              local_e8 = &::cf___;
              (*(code *)PTR__objc_retain_02578638)();
              local_f0 = pcVar4;
              pcVar4 = local_88;
              (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_rangeOfString__0269d838,&cf__);
              if ((pcVar4 != (cfstringStruct *)0x7fffffffffffffff) &&
                 (pcVar4 != (cfstringStruct *)0x0)) {
                pcVar6 = local_88;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_88,PTR_s_substringToIndex__0269d6c0,pcVar4);
                _objc_retainAutoreleasedReturnValue();
                pcVar5 = local_e8;
                local_e8 = pcVar6;
                (*(code *)PTR__objc_release_02578630)(pcVar5);
                pcVar5 = local_88;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_88,PTR_s_substringFromIndex__0269d120,
                           (undefined1 *)((long)&pcVar4->field0_0x0 + 1));
                _objc_retainAutoreleasedReturnValue();
                pcVar4 = local_f0;
                local_f0 = pcVar5;
                (*(code *)PTR__objc_release_02578630)(pcVar4);
                pcVar4 = local_e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_isEqualToString__0269ccc8,&cf_switch);
                if (((ulong)pcVar4 & 1) != 0) {
                  _objc_storeStrong(&local_e8,&::cf___);
                  pcVar4 = local_f0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_f0,PTR_s_rangeOfString__0269d838,&cf__);
                  if (pcVar4 != (cfstringStruct *)0x7fffffffffffffff) {
                    pcVar6 = local_f0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_f0,PTR_s_substringToIndex__0269d6c0,pcVar4);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar5 = local_e8;
                    local_e8 = pcVar6;
                    (*(code *)PTR__objc_release_02578630)(pcVar5);
                    pcVar5 = local_f0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_f0,PTR_s_substringFromIndex__0269d120,
                               (undefined1 *)((long)&pcVar4->field0_0x0 + 1));
                    _objc_retainAutoreleasedReturnValue();
                    pcVar4 = local_f0;
                    local_f0 = pcVar5;
                    (*(code *)PTR__objc_release_02578630)(pcVar4);
                  }
                }
              }
              local_48 = &cf_key;
              if (local_f0 == (cfstringStruct *)0x0) {
                local_1f8 = &::cf___;
              }
              else {
                local_1f8 = local_f0;
              }
              local_38 = local_1f8;
              local_40 = &cf_storage;
              if (local_e8 == (cfstringStruct *)0x0) {
                local_208 = &::cf___;
              }
              else {
                local_208 = local_e8;
              }
              local_30 = local_208;
              puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,
                         _WCRSuperFloatCustomPayloadKey);
              (*(code *)PTR__objc_release_02578630)(puVar3);
              _objc_storeStrong(&local_f0);
              _objc_storeStrong(&local_e8,0);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_lQcS,
                       _WCRSuperFloatSourceKey);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_setObject_atIndexedSubscript__0269e970,local_e0,local_d8);
            local_6c = 2;
            _objc_storeStrong(&local_e0,0);
            break;
          }
        }
      }
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _WCRSuperFloatNotifySettingsChanged();
      _objc_storeStrong(&local_d0);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
      local_6c = 0;
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

