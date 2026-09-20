// exportFonts @ 019cf2a8

/* Function Stack Size: 0x10 bytes */

void WCRefineFontListViewController::exportFonts(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  dispatch_queue_t pdVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [12];
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pathsForExport_026bae18);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (param_1 == 0) {
    pcVar1 = &cf__b;
    if ((*(byte *)(local_18 + (long)_multiSelectMode) & 1) == 0) {
      pcVar1 = &cf_S_MR_O_u__W_SOel_Q;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ck_W_Q_);
    _objc_initWeak(auStack_38,local_18);
    pdVar3 = _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_019cf474;
    local_50 = &DAT_02579c60;
    _objc_copyWeak(auStack_40,auStack_38);
    IVar2 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = IVar2;
    _dispatch_async(pdVar3,&local_68);
    (*(code *)PTR__objc_release_02578630)(pdVar3);
    _objc_storeStrong(&local_48,0);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

