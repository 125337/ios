// initWithScene:dark:selectionMode: @ 01c6eab0

/* Function Stack Size: 0x20 bytes */

ID WCRefinePageBackgroundLibraryViewController::initWithScene_dark_selectionMode_
             (ID param_1,SEL param_2,ID param_3,bool param_4,bool param_5)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *local_40;
  undefined *local_38;
  byte local_2a;
  byte local_29;
  undefined8 local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_40 = local_18;
  local_29 = (byte)param_4;
  local_2a = (byte)param_5;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_40;
  local_38 = PTR_WCRefinePageBackgroundLibraryViewController_026cffb8;
  _objc_msgSendSuper2(ppuVar2,PTR_s_initWithNibName_bundle__026a2600,0);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if (ppuVar2 != (undefined8 **)0x0) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    uVar4 = *(undefined8 *)((long)local_18 + (long)_scene);
    *(undefined8 *)((long)local_18 + (long)_scene) = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    *(byte *)((long)local_18 + (long)_dark) = local_29 & 1;
    *(byte *)((long)local_18 + (long)_selectionMode) = local_2a & 1;
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

