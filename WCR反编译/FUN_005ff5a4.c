// FUN_005ff5a4 @ 005ff5a4

void FUN_005ff5a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long lVar6;
  ulong local_108;
  ulong local_e8;
  long local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  byte local_79;
  ulong local_78;
  ulong local_70;
  byte local_61;
  ulong local_60;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  undefined8 local_30;
  long local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  if (local_38 == 0) {
    local_3c = 1;
  }
  else {
    local_61 = 0;
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
    if ((uVar1 & 1) == 0) {
      local_e8 = 0;
    }
    else {
      local_e8 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsUsrName_0269d638);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = local_e8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_e8;
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    local_79 = 0;
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsNickName_0269d758);
    if ((uVar1 & 1) == 0) {
      local_108 = 0;
    }
    else {
      local_108 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsNickName_0269d758);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = local_108;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_108;
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    pcVar2 = &cf_WCListViewController;
    _NSClassFromString();
    local_88 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_3c = 1;
    }
    else {
      _objc_alloc_init();
      pcVar3 = &cf_setM_contact_;
      local_90 = pcVar2;
      _NSSelectorFromString();
      pcVar2 = local_90;
      local_98 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_respondsToSelector__026ca818,pcVar3);
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_90,local_98,local_38);
      }
      pcVar2 = &cf_WCMomentsPageContext;
      _NSClassFromString();
      local_a0 = pcVar2;
      if (pcVar2 != (cfstringStruct *)0x0) {
        _objc_alloc_init();
        pcVar3 = &cf_setPageContext_;
        local_a8 = pcVar2;
        _NSSelectorFromString();
        pcVar2 = local_90;
        local_b0 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_respondsToSelector__026ca818,pcVar3);
        if (((ulong)pcVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_90,local_b0,local_a8);
        }
        _objc_storeStrong(&local_a8,0);
      }
      pcVar2 = &cf_setSourceScene_;
      _NSSelectorFromString();
      pcVar4 = local_90;
      local_b8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_respondsToSelector__026ca818,pcVar2);
      pcVar3 = local_90;
      pcVar2 = local_b8;
      if (((ulong)pcVar4 & 1) != 0) {
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar2);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      pcVar2 = &cf_setIsStarBrowsingEnabled_;
      _NSSelectorFromString();
      pcVar4 = local_90;
      local_c0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_respondsToSelector__026ca818,pcVar2);
      pcVar3 = local_90;
      pcVar2 = local_c0;
      if (((ulong)pcVar4 & 1) != 0) {
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar2);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      pcVar2 = &cf_setPuzzleImageViewLayoutStyle_;
      _NSSelectorFromString();
      pcVar4 = local_90;
      local_c8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_respondsToSelector__026ca818,pcVar2);
      pcVar3 = local_90;
      pcVar2 = local_c8;
      if (((ulong)pcVar4 & 1) != 0) {
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar2);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      lVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentNavigationController_026a5e00);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = lVar6;
      if (lVar6 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar6,PTR_s_PushViewController_animated__0269cd40,local_90,1);
      }
      _objc_storeStrong(&local_d0);
      _objc_storeStrong(&local_90,0);
      local_3c = 0;
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

