// setCollapsed:forGroup: @ 01adaa48

/* Function Stack Size: 0x1c bytes */

void WCRefineGroupManager::setCollapsed_forGroup_(ID param_1,SEL param_2,bool param_3,ID param_4)

{
  ID IVar1;
  ID local_38;
  undefined8 local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_30 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_groupForId__026a27e0,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setCollapsed__026be180,local_21 & 1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_persist_026b68b8);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

