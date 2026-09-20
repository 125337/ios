// showLoadingState @ 014d9e68

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x10 bytes */

void WCRefineSearchManager::showLoadingState(ID param_1,SEL param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  ulong local_b0;
  long local_a8 [2];
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  char *local_70;
  undefined *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  undefined4 local_48;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  uVar1 = param_1 + 0x48;
  local_30 = param_2;
  local_28 = param_1;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = local_28 + 0x48;
    _objc_loadWeakRetained();
    uVar3 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_38;
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if (local_38 == 0) {
    local_48 = 1;
  }
  else {
    pcVar4 = "WCTableViewSectionManager";
    _objc_getClass();
    pcVar5 = "WCTableViewNormalCellManager";
    local_50 = pcVar4;
    _objc_getClass();
    local_58 = pcVar5;
    if ((local_50 == (char *)0x0) || (pcVar5 == (char *)0x0)) {
      local_48 = 1;
    }
    else {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_clearAllSection_0269e380);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_performSelector__026ca7b8,PTR_s_clearAllSection_0269e380);
      }
      pcVar4 = local_50;
      _objc_alloc_init();
      local_60 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_setHeaderTitle__0269e3c0);
      if (((ulong)pcVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_performSelector_withObject__026ca7c0,
                   PTR_s_setHeaderTitle__0269e3c0,&cf_d___g);
      }
      local_68 = PTR_s_normalCellForSel_target_title_ri_026acde8;
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,
                 PTR_s_normalCellForSel_target_title_ri_026acde8);
      if (((ulong)pcVar4 & 1) != 0) {
        pcVar4 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_methodSignatureForSelector__0269e190,local_68);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSInvocation_026ce208;
        local_70 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSInvocation_026ce208,
                   PTR_s_invocationWithMethodSignature__0269e1a0,pcVar4);
        _objc_retainAutoreleasedReturnValue();
        local_78 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_setTarget__0269e1a8,local_58);
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setSelector__0269e1b0,local_68);
        local_80 = 0;
        local_88 = 0;
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = &cf_ck_WR_cNzP_;
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = &::cf___;
        local_a8[1] = 0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_setArgument_atIndex__0269eae8,&local_80,2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_setArgument_atIndex__0269eae8,&local_88,3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_setArgument_atIndex__0269eae8,&local_90,4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_setArgument_atIndex__0269eae8,&local_98,5);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_setArgument_atIndex__0269eae8,local_a8 + 1,6);
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_invoke_0269e1b8);
        local_a8[0] = 0;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_getReturnValue__0269e1c0,local_a8);
        if ((local_a8[0] != 0) &&
           (pcVar4 = local_60,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_addCell__0269e3f8),
           ((ulong)pcVar4 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_performSelector_withObject__026ca7c0,PTR_s_addCell__0269e3f8,
                     local_a8[0]);
        }
        _objc_storeStrong(&local_98);
        _objc_storeStrong(&local_90,0);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(&local_78,0);
        _objc_storeStrong(&local_70,0);
      }
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_addSection__0269e3d0);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_performSelector_withObject__026ca7c0,PTR_s_addSection__0269e3d0,
                   local_60);
      }
      local_b0 = 0;
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_getTableView_026a09c8);
      if ((uVar1 & 1) != 0) {
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_performSelector__026ca7b8,PTR_s_getTableView_026a09c8);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_b0;
        local_b0 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      if ((local_b0 != 0) &&
         (uVar1 = local_b0,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_reloadData_0269e400),
         (uVar1 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_performSelector__026ca7b8,PTR_s_reloadData_0269e400);
      }
      _objc_storeStrong(&local_b0);
      _objc_storeStrong(&local_60,0);
      local_48 = 0;
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

