// showViewControllerSelectionFromStack:topVC: @ 01d85938

/* Function Stack Size: 0x20 bytes */

void WCRefineSearchSettingsViewController::showViewControllerSelectionFromStack_topVC_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  ID local_e0;
  ID local_d8;
  ID local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  ulong local_a8;
  undefined *local_a0;
  ID local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined *local_48;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_60 = 0;
  local_48 = puVar1;
  while( true ) {
    uVar3 = local_60;
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    if (uVar2 <= uVar3) break;
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_60);
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_78 = (undefined *)0x0;
    local_70 = uVar3;
    if (local_68 == local_40) {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_78;
      local_78 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___ld___);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_78;
      local_78 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addObject__0269d180,local_78);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    local_60 = local_60 + 1;
  }
  puVar1 = PTR__OBJC_CLASS___UIAlertController_026ce178;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIAlertController_026ce178,
             PTR_s_alertControllerWithTitle_message_0269dc00,&cf_bUcvub,&cf_N__h_Nb,0);
  _objc_retainAutoreleasedReturnValue();
  local_88 = (undefined *)0x0;
  local_80 = puVar1;
  while( true ) {
    puVar1 = local_88;
    puVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    puVar4 = local_80;
    if (puVar5 <= puVar1) break;
    puVar5 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_88);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_38;
    puVar4 = local_80;
    puVar1 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_c8 = PTR___NSConcreteStackBlock_02578660;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_01d85fb8;
    local_b0 = &DAT_0258c320;
    local_a0 = local_88;
    local_90 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = uVar3;
    local_98 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_actionWithTitle_style_handler__0269dc08,puVar5,0,&local_c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_90,0);
    local_88 = local_88 + 1;
  }
  puVar1 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIAlertAction_026ce180,PTR_s_actionWithTitle_style_handler__0269dc08,
             &cf_Sm,1,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getKeyWindow_026c4c60);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = IVar6;
  if (IVar6 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_rootViewController_026ca820);
    _objc_retainAutoreleasedReturnValue();
    IVar7 = local_28;
    local_d8 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getTopmostViewController__026c4c50,IVar6);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = IVar7;
    if (IVar7 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar7,PTR_s_presentViewController_animated_c_0269d2b0,local_80,1,0);
    }
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

