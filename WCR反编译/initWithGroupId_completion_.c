// initWithGroupId:completion: @ 01a9da28

/* Function Stack Size: 0x20 bytes */

ID WCRGroupOfficialIconPickerViewController::initWithGroupId_completion_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  cfstringStruct *local_70;
  undefined8 *local_40;
  undefined *local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_40 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_40;
  local_38 = PTR_WCRGroupOfficialIconPickerViewController_026cfe08;
  _objc_msgSendSuper2(ppuVar2,PTR_s_initWithNibName_bundle__026a2600,0);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if (ppuVar2 != (undefined8 **)0x0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    local_70 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_70 = &::cf___;
    }
    _objc_storeStrong((long)local_18 + (long)_groupId,local_70);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    uVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
    uVar4 = *(undefined8 *)((long)local_18 + (long)_completion);
    *(undefined8 *)((long)local_18 + (long)_completion) = uVar5;
    (*(code *)PTR__objc_release_02578630)();
    FUN_01a9dc18();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)local_18 + (long)_icons);
    *(undefined8 *)((long)local_18 + (long)_icons) = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTitle__0269cef0,&cf__eVh);
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

