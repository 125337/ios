// initWithTargets:changeHandler: @ 01d32cac

/* Function Stack Size: 0x20 bytes */

ID WCRScheduledTaskTargetListViewController::initWithTargets_changeHandler_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_70;
  undefined *local_48;
  undefined8 *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined *local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_40 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_40;
  local_38 = PTR_WCRScheduledTaskTargetListViewController_026d0080;
  _objc_msgSendSuper2(ppuVar2,PTR_s_initWithStyle__026ca710,1);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if ((undefined8 **)local_18 != (undefined8 **)0x0) {
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mutableCopy_0269d8a0);
    local_70 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_48 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_48;
    }
    _objc_storeStrong((long)local_18 + (long)_targets,local_70);
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
    uVar5 = *(undefined8 *)((long)local_18 + (long)_changeHandler);
    *(undefined8 *)((long)local_18 + (long)_changeHandler) = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar5);
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

