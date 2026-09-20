// editRepositoryItem: @ 01ef0864

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoHTMLRepositoryViewController::editRepositoryItem_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  cfstringStruct *local_98;
  cfstringStruct *local_88;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineToDoHTMLCodeEditorViewController_026cf728;
  _objc_alloc_init();
  pcVar2 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
  _objc_retainAutoreleasedReturnValue();
  local_88 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_88 = &cf__Nx;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setEditorTitle__026c7f10,local_88);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_html);
  _objc_retainAutoreleasedReturnValue();
  local_98 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_98 = &::cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setInitialHTML__026c7f18,local_98);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  _objc_initWeak(auStack_38,local_18);
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01ef0b28;
  local_50 = &DAT_0257c948;
  _objc_copyWeak(auStack_40,auStack_38);
  pcVar2 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setSaveBlock__026c7f20,&local_68);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

