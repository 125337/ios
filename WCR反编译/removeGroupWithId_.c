// removeGroupWithId: @ 01ad7ee0

/* Function Stack Size: 0x18 bytes */

bool WCRefineGroupManager::removeGroupWithId_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_groupForId__026a27e0,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  if ((IVar1 == 0) ||
     (((*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_kind_026a27e8), IVar1 != 0 &&
      (IVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_kind_026a27e8),
      IVar1 != 3)))) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_20 + 8),PTR_s_removeObject__0269d678,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_persist_026b68b8);
    local_11 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

