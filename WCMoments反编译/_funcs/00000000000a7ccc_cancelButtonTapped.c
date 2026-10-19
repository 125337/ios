// cancelButtonTapped @0xa7ccc

/* Function Stack Size: 0x10 bytes */

void WCMTOCropViewController::cancelButtonTapped(ID param_1,SEL param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_a8;
  undefined8 local_a0 [3];
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  uVar1 = _objc_msgSend_showCancelConfirmationDialog(param_1);
  if ((uVar1 & 1) == 0) {
    _objc_msgSend_dismissCropViewController(local_28,local_a8);
  }
  else {
    _TO_CROP_VIEW_RESOURCE_BUNDLE_FOR_OBJECT(local_28);
    local_38 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_alertControllerWithTitle_message_preferredStyle_
              (&_OBJC_CLASS___UIAlertController,local_a8,0,0,0);
    local_40 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_toolbar(local_28,local_a8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_visibleCancelButton(uVar2,local_a8);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_popoverPresentationController(local_40,local_a8);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setSourceView_(uVar4,local_a8,uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_localizedStringForKey_value_table_(local_38,local_a8,&cf_DeleteChanges);
    local_48 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_localizedStringForKey_value_table_
              (local_38,local_a8,&cf_Cancel,&cf___,&cf_WCMTOCropViewControllerLocalizable);
    local_50 = _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_58,local_28);
    uVar2 = local_48;
    local_88 = PTR___NSConcreteStackBlock_001104f0;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = ___45__WCMTOCropViewController_cancelButtonTapped__block_invoke;
    local_70 = &___block_descriptor_40_e8_32w_e23_v16__0__UIAlertAction_8l;
    _objc_copyWeak(auStack_68,auStack_58);
    uVar2 = _objc_msgSend_actionWithTitle_style_handler_
                      (&_OBJC_CLASS___UIAlertAction,local_a8,uVar2,2,&local_88);
    local_60 = _objc_retainAutoreleasedReturnValue(uVar2);
    _objc_msgSend_addAction_(local_40,local_a8,local_60);
    uVar2 = _objc_msgSend_actionWithTitle_style_handler_
                      (&_OBJC_CLASS___UIAlertAction,local_a8,local_50,1,0);
    local_a0[0] = _objc_retainAutoreleasedReturnValue(uVar2);
    _objc_msgSend_addAction_(local_40,local_a8,local_a0[0]);
    uVar2 = _objc_loadWeakRetained(auStack_58);
    _objc_msgSend_presentViewController_animated_completion_(uVar2,local_a8,local_40,1,0);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_storeStrong(local_a0);
    _objc_storeStrong(&local_60,0);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

