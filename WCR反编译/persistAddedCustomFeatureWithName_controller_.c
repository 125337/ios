// persistAddedCustomFeatureWithName:controller: @ 01c956e8

/* Function Stack Size: 0x20 bytes */

void WCRefinePluginFeatureManagementViewController::persistAddedCustomFeatureWithName_controller_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ID IVar11;
  undefined *local_238;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1a8;
  undefined *local_190;
  cfstringStruct *local_138;
  undefined *local_130;
  undefined *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  bool local_109;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  bool local_f1;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  byte local_c1;
  cfstringStruct *local_c0;
  undefined *local_b8;
  int local_ac;
  ulong local_a8;
  long local_a0;
  ulong local_98;
  long local_90;
  SEL local_88;
  ID local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  long local_48;
  cfstringStruct *local_40;
  ulong local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_90 = 0;
  local_88 = param_2;
  local_80 = param_1;
  _objc_storeStrong(&local_90,param_3);
  local_98 = 0;
  _objc_storeStrong(&local_98,param_4);
  lVar3 = local_90;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = lVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar4 = local_98;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_a8 = uVar4;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar3 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
  if ((lVar3 == 0) ||
     (uVar4 = local_a8, (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0),
     uVar4 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_cNTbc6RhVN_Nzz);
    local_ac = 1;
  }
  else {
    uVar4 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineRootViewController);
    if ((uVar4 & 1) == 0) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_b8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_pluginFeatureCustomEntries_026a8400);
      _objc_retainAutoreleasedReturnValue();
      local_190 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_190 = *(undefined **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_arrayWithArray__0269eab8,local_190);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_c1 = 0;
      local_d0 = (undefined *)0x0;
      for (local_d8 = (cfstringStruct *)0x0; pcVar5 = local_d8, pcVar6 = local_c0,
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0), pcVar5 < pcVar6;
          local_d8 = (cfstringStruct *)((long)&local_d8->field0_0x0 + 1)) {
        pcVar5 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_objectAtIndexedSubscript__0269cc78,local_d8);
        _objc_retainAutoreleasedReturnValue();
        local_e0 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_objectForKeyedSubscript__0269d098,&cf_controller);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar6 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
        local_f1 = false;
        bVar1 = ((ulong)pcVar6 & 1) == 0;
        if (bVar1) {
          local_1a8 = &::cf___;
        }
        else {
          local_1a8 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_controller);
          _objc_retainAutoreleasedReturnValue();
          local_f0 = local_1a8;
        }
        local_f1 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_e8 = local_1a8;
        if ((local_f1 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_f0);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        pcVar5 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_isEqualToString__0269ccc8,local_a8);
        if (((ulong)pcVar5 & 1) == 0) {
          local_ac = 4;
        }
        else {
          pcVar5 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar6 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_109 = false;
          bVar1 = ((ulong)pcVar6 & 1) == 0;
          if (bVar1) {
            local_1c0 = &::cf___;
          }
          else {
            local_1c0 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
            _objc_retainAutoreleasedReturnValue();
            local_108 = local_1c0;
          }
          local_109 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_100 = local_1c0;
          if ((local_109 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_108);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          pcVar5 = local_100;
          FUN_01c8c5e8(local_100,local_e8);
          _objc_retainAutoreleasedReturnValue();
          local_118 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
          if (pcVar5 == (cfstringStruct *)0x0) {
            local_ac = 4;
          }
          else {
            _objc_storeStrong(&local_d0,local_118);
            local_c1 = 1;
            pcVar5 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_mutableCopy_0269d8a0);
            local_120 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_setObject_forKeyedSubscript__0269d248,local_118,&cf_id);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_setObject_forKeyedSubscript__0269d248,local_a0,&cf_title);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_setObject_forKeyedSubscript__0269d248,
                       &cf_openCustomPluginFeature_,&cf_selector);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_setObject_forKeyedSubscript__0269d248,local_a8,&cf_controller
                      );
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_setObject_forKeyedSubscript__0269d248,local_a0,
                       &cf_source_plugin);
            pcVar5 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_copy_0269d150);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_setObject_atIndexedSubscript__0269e970,pcVar5,local_d8);
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            local_ac = 2;
            _objc_storeStrong(&local_120,0);
          }
          _objc_storeStrong(&local_118);
          _objc_storeStrong(&local_100,0);
        }
        _objc_storeStrong(&local_e8);
        _objc_storeStrong(&local_e0,0);
        if (local_ac == 2) break;
      }
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if ((local_c1 & 1) == 0) {
        puVar7 = PTR__OBJC_CLASS___NSUUID_026ce668;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_____);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = local_d0;
        local_d0 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar10);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        local_78 = &cf_id;
        local_50 = local_d0;
        local_70 = &cf_title;
        local_48 = local_a0;
        local_68 = &cf_selector;
        local_40 = &cf_openCustomPluginFeature_;
        local_60 = &cf_controller;
        local_38 = local_a8;
        local_58 = &cf_source_plugin;
        local_30 = local_a0;
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_78,5);
        _objc_retainAutoreleasedReturnValue();
        local_128 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,puVar2);
        _objc_storeStrong(&local_128,0);
      }
      pcVar5 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setPluginFeatureCustomEntries__026c2ba0);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      puVar10 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_pluginFeatureCustomTitles_026c2a68);
      _objc_retainAutoreleasedReturnValue();
      local_238 = puVar10;
      if (puVar10 == (undefined *)0x0) {
        local_238 = *(undefined **)PTR____NSDictionary0___02578288;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_dictionaryWithDictionary__026aadf0,local_238);
      _objc_retainAutoreleasedReturnValue();
      local_130 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar10);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_removeObjectForKey__0269d700,local_d0);
      puVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setPluginFeatureCustomTitles__026c2b78);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_b8;
      IVar11 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_hiddenFeatureIDs_026c2b38);
      _objc_retainAutoreleasedReturnValue();
      FUN_01c96324(puVar2);
      (*(code *)PTR__objc_release_02578630)(IVar11);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_postGlobalSettingsChangedNotific_026a6558);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_reloadFeatureData_026c2ac8);
      local_138 = &cf__feUSucNeQSSn_eQST6e_eQS_b_b__T;
      if ((local_c1 & 1) == 0) {
        local_138 = &cf__mRUSucNeQSSn_eQST6e_eQS_b_b__T;
      }
      (*(code *)PTR__objc_retain_02578638)();
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_138);
      _objc_storeStrong(&local_138);
      _objc_storeStrong(&local_130,0);
      _objc_storeStrong(&local_d0,0);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_b8,0);
      local_ac = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_NSc_);
      local_ac = 1;
    }
  }
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

