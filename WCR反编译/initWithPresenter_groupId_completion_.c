// initWithPresenter:groupId:completion: @ 01aa0c10

/* Function Stack Size: 0x28 bytes */

ID WCRGroupAvatarPickerCoordinator::initWithPresenter_groupId_completion_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  cfstringStruct *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  cfstringStruct *local_78;
  undefined8 *local_48;
  undefined *local_40;
  ID local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_48 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_48;
  local_40 = PTR_WCRGroupAvatarPickerCoordinator_026cfe18;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_026ca6a8);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if (ppuVar2 != (undefined8 **)0x0) {
    _objc_storeWeak(local_18 + 1,local_28);
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
    local_78 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_78 = &::cf___;
    }
    _objc_storeStrong(local_18 + 2,local_78);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    puVar4 = (undefined8 *)local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
    puVar5 = (undefined8 *)local_18[3];
    local_18[3] = (ID)puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

