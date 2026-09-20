// WCRefineToDo_removeCard @ 007ff9d0

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHook::WCRefineToDo_removeCard(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ID local_58;
  undefined4 local_50;
  undefined1 local_49;
  undefined *local_48;
  undefined1 local_3a;
  byte local_39;
  ID local_38;
  byte local_29;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_007fe8cc();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar3 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028ccee6);
  _objc_retainAutoreleasedReturnValue();
  local_29 = IVar3 != 0;
  local_28 = IVar3;
  if (IVar3 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_removeFromSuperview_026ca800);
    _objc_setAssociatedObject(local_18,&DAT_028ccee6,0,1);
  }
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_WCRefineToDo_restoreInsetIfNeede_026a8820,IVar3);
  IVar3 = local_18;
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  local_39 = IVar3 != 0;
  _objc_setAssociatedObject(local_18,&DAT_028ccee7,0,1);
  if (local_38 != 0) {
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tableHeaderView_0269ea08);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_49 = 0;
    uVar1 = IVar4 != _kWCRHomeTableHeaderHostTag;
    bVar2 = true;
    if ((bool)uVar1) {
      puVar5 = PTR_WCRefineHomeTableHeaderHost_026ce570;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHomeTableHeaderHost_026ce570,PTR_s_todoSlotInTableView__026a8938,
                 local_38);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = puVar5 != (undefined *)0x0;
      local_49 = uVar1;
      local_48 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      uVar1 = local_49;
    }
    local_49 = uVar1;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_3a = bVar2;
    if ((((local_29 & 1) == 0) && ((local_39 & 1) == 0)) && (!bVar2)) {
      local_50 = 1;
      goto LAB_007ffd2c;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHomeTableHeaderHost_026ce570,PTR_s_applyOnTableView_owner__026a23c8,
               local_38,local_18);
    IVar3 = local_38;
    puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
    if ((local_39 & 1) != 0) {
      local_78 = PTR___NSConcreteGlobalBlock_02578658;
      local_70 = 0xd0800000;
      local_6c = 0;
      local_68 = FUN_007ffd54;
      local_60 = &DAT_0257a9d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_performWithoutAnimation__0269e7e0,&local_78);
      _objc_storeStrong(&local_58,0);
    }
  }
  local_50 = 0;
LAB_007ffd2c:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

