// initWithModels:currentModel:title:host:selection:manual: @ 017d2394

/* Function Stack Size: 0x40 bytes */

ID WCRAIModelPickerViewController::initWithModels_currentModel_title_host_selection_manual_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             undefined4 param_8,ID param_9,undefined4 param_10)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  cfstringStruct *local_d0;
  cfstringStruct *local_c0;
  long local_a8;
  undefined8 *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_6);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_7);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_8);
  local_60 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_60;
  local_58 = PTR_WCRAIModelPickerViewController_026cfb78;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_026ca6a8);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if (ppuVar2 != (undefined8 **)0x0) {
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    local_a8 = lVar3;
    if (lVar3 == 0) {
      local_a8 = *(long *)PTR____NSArray0___02578280;
    }
    _objc_storeStrong((long)local_18 + (long)_allModels,local_a8);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    _objc_storeStrong((long)local_18 + (long)_visibleModels,
                      *(undefined8 *)((long)local_18 + (long)_allModels));
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
    local_c0 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_c0 = &::cf___;
    }
    _objc_storeStrong((long)local_18 + (long)_currentModel,local_c0);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
    local_d0 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_d0 = &::cf___;
    }
    _objc_storeStrong((long)local_18 + (long)_sourceHost,local_d0);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    uVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
    uVar6 = *(undefined8 *)((long)local_18 + (long)_selectionBlock);
    *(undefined8 *)((long)local_18 + (long)_selectionBlock) = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    uVar5 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
    uVar6 = *(undefined8 *)((long)local_18 + (long)_manualBlock);
    *(undefined8 *)((long)local_18 + (long)_manualBlock) = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTitle__0269cef0,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

