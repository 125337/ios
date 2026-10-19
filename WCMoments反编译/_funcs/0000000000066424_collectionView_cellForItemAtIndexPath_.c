// collectionView:cellForItemAtIndexPath: @0x66424

/* Function Stack Size: 0x20 bytes */

ID WCMYBImageBrowser::collectionView_cellForItemAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ID IVar4;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  _objc_msgSend_dataMediator(local_18,local_70);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend_row(local_30,local_70);
  _objc_msgSend_dataForCellAtIndex_(uVar1,local_70,uVar2);
  local_38 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = local_28;
  uVar2 = _objc_msgSend_wcm_yb_classOfCell(local_38,local_70);
  _objc_msgSend_reuseIdentifierForCellClass_(uVar1,local_70,uVar2);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_dequeueReusableCellWithReuseIdentifier_forIndexPath_(uVar1,local_70,uVar2,local_30);
  local_40 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_implementGetBaseInfoProtocol_(local_18,local_70,local_40);
  _objc_msgSend_implementOperateBrowserProtocol_(local_18,local_70,local_40);
  uVar3 = _objc_opt_respondsToSelector(local_40,"setWcm_yb_selfPage:");
  uVar1 = local_40;
  if ((uVar3 & 1) != 0) {
    local_68 = PTR___NSConcreteStackBlock_001104f0;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = ___59__WCMYBImageBrowser_collectionView_cellForItemAtIndexPath___block_invoke;
    local_50 = &___block_descriptor_40_e8_32s_e5_q8__0l;
    local_48 = (*(code *)PTR__objc_retain_00110460)(local_30);
    _objc_msgSend_setWcm_yb_selfPage_(uVar1,local_70,&local_68);
    _objc_storeStrong(&local_48,0);
  }
  _objc_msgSend_setWcm_yb_cellData_(local_40,local_70,local_38);
  uVar3 = _objc_opt_respondsToSelector(local_40,"wcm_yb_pageChanged");
  if ((uVar3 & 1) != 0) {
    _objc_msgSend_wcm_yb_pageChanged(local_40,local_70);
  }
  _objc_msgSend_dataMediator(local_18,local_70);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend_row(local_30,local_70);
  _objc_msgSend_preloadWithPage_(uVar1,local_70,uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  uVar1 = (*(code *)PTR__objc_retain_00110460)(local_40);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  IVar4 = _objc_autoreleaseReturnValue(uVar1);
  return IVar4;
}

