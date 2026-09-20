// presentEditorForEntry: @ 01eb5c88

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoListEditorViewController::presentEditorForEntry_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [8];
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_initWeak(auStack_30,local_18);
  IVar3 = local_18;
  uVar2 = local_28;
  puVar1 = PTR_WCRefineToDoItemEditViewController_026cf6e0;
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_backend_026c7148);
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01eb5dd4;
  local_50 = &DAT_0257be28;
  _objc_copyWeak(auStack_48,auStack_30);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_presentFromViewController_entry__026c77a0,IVar3,uVar2,IVar4,&local_68);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

