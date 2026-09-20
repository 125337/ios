// sharedWebHeldByLivePreview @ 01e884a8

/* Function Stack Size: 0x10 bytes */

bool WCRefineToDoCardView::sharedWebHeldByLivePreview(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  int iVar5;
  ID local_68;
  ID local_50;
  ID local_48;
  int local_3c;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = param_1;
  if (param_1 == 0) {
    local_68 = DAT_028e47d0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_68;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  do {
    IVar2 = local_38;
    if (local_38 == 0) {
      local_3c = 2;
LAB_01e886f8:
      _objc_storeStrong(&local_38,0);
      iVar5 = local_3c + -2;
      if (iVar5 == 0) {
        iVar5 = 1;
        local_11 = 0;
        local_3c = 1;
      }
      _objc_storeStrong(iVar5,&local_30,0);
      return local_11 & 1;
    }
    puVar3 = PTR_WCRefineToDoCardView_026ce978;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineToDoCardView_026ce978,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    IVar4 = local_38;
    if ((IVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = IVar4;
      bVar1 = false;
      local_11 = false;
      if (IVar4 != local_20) {
        (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_usesExpandedPreviewSlot_026c7270);
        local_11 = false;
        if ((IVar4 & 1) != 0) {
          local_50 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_window_026cabf0);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          local_11 = local_50 != 0;
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      local_3c = 1;
      _objc_storeStrong(&local_48,0);
      goto LAB_01e886f8;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_38;
    local_38 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  } while( true );
}

