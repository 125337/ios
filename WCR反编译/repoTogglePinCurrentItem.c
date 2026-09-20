// repoTogglePinCurrentItem @ 01ef00b4

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHTMLRepositoryViewController::repoTogglePinCurrentItem(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  byte local_30;
  byte local_2d;
  uint local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentRepositoryActionItem_026c7ee0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = param_1 != 0;
  local_28 = param_1;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_objectForKeyedSubscript__0269d098,&cf_pinned);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    local_2d = (byte)IVar2;
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc0000000;
    local_44 = 0;
    local_40 = FUN_01ef01e0;
    local_38 = &DAT_0258cab0;
    local_30 = local_2d & 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_updateItem_mutate__026c7f08,local_28,&local_50);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

