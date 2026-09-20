// manageAPIKey @ 017e08ec

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineAISettingsViewController::manageAPIKey(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  ID local_110;
  undefined1 auStack_108 [15];
  undefined1 local_f9;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  undefined1 auStack_d8 [15];
  undefined1 local_c9;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [15];
  undefined1 local_99;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [8];
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  ID local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar2 = PTR_WCRefineAIStore_026ce048;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editingProvider_026b5450);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_38;
  local_40 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_providerID_0269d480);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingAPIKeyKind_026b5490);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_apiKeyForProviderID_kind__0269d488,IVar3);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar2;
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_apiKeyHistoryRecords_026aae20);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar4;
  _objc_initWeak(auStack_60,local_28);
  puVar5 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
  IVar3 = local_28;
  puVar4 = local_58;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (puVar5 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_N_OX_Mn_b_);
    _objc_retainAutoreleasedReturnValue();
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_017e11d4;
    local_80 = &DAT_0257be28;
    _objc_copyWeak(auStack_78,auStack_60);
    local_99 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_actionWithTitle_block__026b5340,puVar2,&local_98);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
    local_99 = 0;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_destroyWeak(auStack_78);
  }
  IVar3 = local_28;
  puVar2 = local_58;
  local_c8 = PTR___NSConcreteStackBlock_02578660;
  local_c0 = 0xc2000000;
  local_bc = 0;
  local_b8 = FUN_017e1224;
  local_b0 = &DAT_0257be28;
  _objc_copyWeak(auStack_a8,auStack_60);
  local_c9 = 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_actionWithTitle_block__026b5340,&cf_NjR4_g_4v_fbc,&local_c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
  local_c9 = 0;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  puVar2 = local_58;
  puVar4 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  pcVar1 = &cf_KbRfbc;
  if (puVar4 == (undefined *)0x0) {
    pcVar1 = &cf_KbReQ;
  }
  local_f8 = PTR___NSConcreteStackBlock_02578660;
  local_f0 = 0xc2000000;
  local_ec = 0;
  local_e8 = FUN_017e1274;
  local_e0 = &DAT_0257be28;
  _objc_copyWeak(auStack_d8,auStack_60);
  local_f9 = 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_actionWithTitle_block__026b5340,pcVar1,&local_f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
  local_f9 = 0;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar4 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  IVar3 = local_28;
  puVar2 = local_58;
  if (puVar4 != (undefined *)0x0) {
    local_130 = PTR___NSConcreteStackBlock_02578660;
    local_128 = 0xc2000000;
    local_124 = 0;
    local_120 = FUN_017e12c4;
    local_118 = &DAT_02579c60;
    IVar6 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_110 = IVar6;
    _objc_copyWeak(auStack_108,auStack_60);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_actionWithTitle_block__026b5340,&cf_nd,&local_130);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_destroyWeak(auStack_108);
    _objc_storeStrong(&local_110,0);
  }
  IVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  IVar6 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_name_0269d828);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf___APIKey);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_showSheetTitle_actions__026b5348,puVar2,local_58);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_60);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

