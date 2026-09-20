// FUN_01c82a18 @ 01c82a18

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01c82a18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  cfstringStruct *local_1a8;
  cfstringStruct *local_148;
  cfstringStruct *local_128;
  cfstringStruct *local_118;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined *local_88;
  bool local_79;
  cfstringStruct *local_78;
  bool local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  long local_58;
  byte local_49;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  pcVar3 = local_30;
  local_48 = param_1;
  local_40 = param_4;
  local_38 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  local_49 = (byte)pcVar4;
  local_58 = 0;
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_kind);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_storage);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
    local_69 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_128 = &cf___;
    }
    else {
      local_128 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_storage);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_128;
    }
    local_69 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_128;
    if ((local_69 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    if (((ulong)pcVar4 & 1) == 0) {
      pcVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        _objc_storeStrong(&local_58,&cf___);
      }
      else {
        _objc_storeStrong(&local_58,local_60);
      }
    }
    else {
      _objc_storeStrong(&local_58,&cf_WCR);
    }
    _objc_storeStrong(&local_60,0);
  }
  else {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_version);
    _objc_retainAutoreleasedReturnValue();
    local_118 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_118 = &cf___;
    }
    _objc_storeStrong(&local_58,local_118);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  if ((local_49 & 1) == 0) {
    lVar6 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    local_79 = false;
    if (lVar6 == 0) {
      local_148 = &cf__P_u;
    }
    else {
      local_148 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_148;
    }
    local_79 = lVar6 != 0;
    _objc_storeStrong(&local_58,local_148);
    if ((local_79 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
  }
  puVar5 = PTR_WCRefinePluginHubCellAction_026cf4a0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefinePluginHubCellAction_026cf4a0,PTR_s_new_0269d288)
  ;
  local_b8 = PTR___NSConcreteStackBlock_02578660;
  local_b0 = 0xc2000000;
  local_ac = 0;
  local_a8 = FUN_01c83120;
  local_a0 = &DAT_025799c0;
  local_88 = puVar5;
  _objc_copyWeak(auStack_98,param_1 + 0x28);
  local_90 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setBlock__026b4f10,&local_b8);
  lVar6 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar7);
  (*(code *)PTR__objc_release_02578630)(lVar6);
  puVar2 = local_88;
  puVar8 = PTR_WCRefineHelper_026ce000;
  puVar5 = PTR_s_invoke_0269e1b8;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
  _objc_retainAutoreleasedReturnValue();
  local_1a8 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_1a8 = &cf__g_TT;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar8,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar5,puVar2,local_1a8,local_58
             ,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  _objc_destroyWeak(auStack_98);
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_30,0);
  return;
}

