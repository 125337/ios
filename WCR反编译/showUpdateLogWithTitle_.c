// showUpdateLogWithTitle: @ 01f460b0

/* Function Stack Size: 0x18 bytes */

void WCRefineUpdateLogView::showUpdateLogWithTitle_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *local_48;
  undefined *local_40;
  undefined *local_38;
  char *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = "MMPageSheetConfig";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setTitle__0269cef0,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setNavLeftStyle__026aa730,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setEnableEdgeSlideToClose__026aa738,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setEnableDragToClose__026aa740,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setIsAllowTapBgMaskToClose__026aa748,1);
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  _objc_alloc_init();
  puVar3 = PTR_WCRefineUpdateLogView_026cf590;
  local_38 = puVar2;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_40 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setView__026aa750,local_40);
  pcVar1 = "MMPageSheetAdapter";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_48 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setPageSheetConfig__026aa758,local_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setHostViewController__026a58c8,local_38);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4081300000000000,local_48,PTR_s_setContentHeight__026aa760);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setHostSheet__026c8ee0,local_48);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_showWithAnimated__0269e5a8,1);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

