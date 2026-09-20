// cancelEdit @ 0196b594

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::cancelEdit(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_initWeak(auStack_28,param_1);
  IVar1 = local_18;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_0196b670;
  local_38 = &DAT_0257be28;
  _objc_copyWeak(auStack_30,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_confirmLeaveEditorIfNeeded__026ba068,&local_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}

