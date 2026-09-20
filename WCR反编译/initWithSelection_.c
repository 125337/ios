// initWithSelection: @ 01a9f9f4

/* Function Stack Size: 0x18 bytes */

ID WCRGroupAvatarDirectoryPickerViewController::initWithSelection_
             (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *local_38;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4);
  local_38 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_38;
  local_30 = PTR_WCRGroupAvatarDirectoryPickerViewController_026cfe10;
  _objc_msgSendSuper2(ppuVar2,PTR_s_initWithNibName_bundle__026a2600,0);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if (ppuVar2 != (undefined8 **)0x0) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    uVar4 = *(undefined8 *)((long)local_18 + (long)_selection);
    *(undefined8 *)((long)local_18 + (long)_selection) = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTitle__0269cef0,&cf_R_4YPvU_);
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

