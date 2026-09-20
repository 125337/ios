// openOfficialMomentsDetailForItem: @ 01bddcac

/* Function Stack Size: 0x18 bytes */

bool WCRefineMomentsCacheViewController::openOfficialMomentsDetailForItem_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  bool bVar2;
  char *pcVar3;
  ID IVar4;
  undefined *puVar5;
  long lVar6;
  char *local_50;
  undefined4 local_48;
  undefined1 local_41;
  ID local_40;
  char *local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar3 = "WCCommentDetailViewControllerFB";
  _objc_getClass();
  local_41 = 0;
  bVar2 = true;
  uVar1 = pcVar3 != (char *)0x0;
  local_38 = pcVar3;
  if ((bool)uVar1) {
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = IVar4 == 0;
    local_41 = uVar1;
    local_40 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    uVar1 = local_41;
  }
  local_41 = uVar1;
  if (bVar2) {
    local_11 = 0;
    local_48 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_markDataItemFromCache__026a4c08,local_30);
    pcVar3 = local_38;
    _objc_alloc_init();
    puVar5 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    local_50 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((ulong)pcVar3 & 1) == 0) {
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setValue_forKey__0269d300,local_30,&cf_dataItem);
      lVar6 = local_30;
      FUN_01bc7fd4();
      pcVar3 = local_50;
      if ((lVar6 == 3) || (lVar6 == 2)) {
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_setValue_forKey__0269d300,puVar5,&cf_bForbideComment);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      IVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      FUN_01bcec58();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      local_11 = 1;
    }
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

