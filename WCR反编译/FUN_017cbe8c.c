// FUN_017cbe8c @ 017cbe8c

void FUN_017cbe8c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *local_c0;
  cfstringStruct *local_a8;
  cfstringStruct *local_98;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x38;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar1;
  if (uVar1 == 0) {
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setEditAlert__026b4ff0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setEditStage__026b4fe8,0);
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrIsGroupAnalysisLibrary_026b4df8);
    local_38 = &cf_Q;
    if ((uVar1 & 1) == 0) {
      local_38 = &cf_Q;
    }
    (*(code *)PTR__objc_retain_02578638)();
    puVar3 = PTR_WCRefineHelper_026ce000;
    lVar2 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      local_98 = &cf_c_y;
    }
    else {
      local_98 = *(cfstringStruct **)(param_1 + 0x20);
    }
    lVar2 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      local_a8 = local_38;
    }
    else {
      local_a8 = *(cfstringStruct **)(param_1 + 0x28);
    }
    local_c0 = *(cfstringStruct **)(param_1 + 0x30);
    if (local_c0 == (cfstringStruct *)0x0) {
      local_c0 = &cf___;
    }
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_017cc198;
    local_50 = &DAT_02589100;
    _objc_copyWeak(auStack_48,param_1 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)
              (0,puVar3,PTR_s_presentPageSheetMultilineInputWi_026ab118,local_98,local_a8,&cf_eQc_y_
               ,local_c0,&local_68);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrFinishEdit_026b4fe0);
    }
    _objc_storeStrong(&local_40);
    _objc_destroyWeak(auStack_48);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

