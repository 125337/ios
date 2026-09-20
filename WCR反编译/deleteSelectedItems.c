// deleteSelectedItems @ 01eee24c

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHTMLRepositoryViewController::deleteSelectedItems(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [8];
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedIds_026c7e78);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_38 = PTR__OBJC_CLASS___UIAlertController_026ce178;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (IVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbNx);
  }
  else {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedIds_026c7e78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_nx_Rd_Nv);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_alertControllerWithTitle_message_0269dc00,&cf_RdNx);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_initWeak(auStack_40,local_28);
    puVar2 = local_38;
    puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertAction_026ce180,
               PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_38;
    puVar2 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_01eee60c;
    local_60 = &DAT_02583468;
    _objc_copyWeak(auStack_58,auStack_40);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Rd,2,&local_78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_38,1,0);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_40);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

