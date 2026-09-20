// FUN_0199a1f0 @ 0199a1f0

void FUN_0199a1f0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 == 0) {
    local_2c = 1;
  }
  else {
    puVar2 = PTR_WCRFileManagerState_026cf1c8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = &cf_yR;
    if (*(long *)(param_1 + 0x28) != 2) {
      local_40 = &cf_Y6R;
    }
    local_38 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_clearClipboard_026ba668);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateBottomBarBadge_026ba2b8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reload_026af6c8);
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

