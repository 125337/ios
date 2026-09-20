// FUN_005aef34 @ 005aef34

void FUN_005aef34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *local_60;
  char *local_58;
  char *local_50;
  long local_48;
  uint local_40;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  FUN_005cf274();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_gSWQ_fN_eclS0RO);
    local_40 = 1;
  }
  else {
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefine_findViewController_026a5820);
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar1;
    if (lVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el_MOS_MRgSWub);
      local_40 = 1;
    }
    else {
      pcVar2 = "FavForwardLogicController";
      _objc_getClass();
      local_50 = pcVar2;
      if ((pcVar2 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_instancesRespondToSelector__0269da90,
                     PTR_s_ForwardFavItemList_delegate__026a5b80), ((ulong)pcVar2 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__eRNb_gNS_u);
        local_40 = 1;
      }
      else {
        pcVar2 = local_50;
        _objc_alloc_init();
        local_58 = pcVar2;
        if (pcVar2 != (char *)0x0) {
          puVar3 = PTR_WCRefineFavForwardDelegateProxy_026ce7c0;
          _objc_alloc_init();
          local_60 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setViewController__026a59c0,local_48);
          _objc_setAssociatedObject(local_48,&DAT_028cb780,local_58,1);
          _objc_setAssociatedObject(local_58,&DAT_028cb781,local_60,1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_ForwardFavItemList_delegate__026a5b80,local_30,local_60);
          _objc_storeStrong(&local_60,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Sb);
        }
        local_40 = (uint)(pcVar2 == (char *)0x0);
        _objc_storeStrong(&local_58,0);
      }
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

