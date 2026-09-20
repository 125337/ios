// showLongPressMenuSettings: @ 01b4648c

/* Function Stack Size: 0x18 bytes */

void WCRefineLayoutFunctionViewController::showLongPressMenuSettings_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *local_38;
  uint local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_3);
  _WCRLongPressMenuFeatureAllowed();
  bVar1 = ((ulong)puVar2 & 1) != 0;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
    puVar3 = PTR_WCRefineLongPressMenuViewController_026cf3d0;
    _objc_alloc_init();
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

