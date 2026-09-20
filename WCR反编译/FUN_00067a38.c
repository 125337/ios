// FUN_00067a38 @ 00067a38

void FUN_00067a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_50;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_1;
  local_18 = param_2;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  plVar1 = &DAT_028c7ca8;
  if ((uVar3 & 1) == 0) {
    plVar1 = &DAT_028c7ca0;
  }
  if (*plVar1 == 0) {
    if ((uVar3 & 1) == 0) {
      local_50 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
    }
    else {
      local_50 = PTR__OBJC_CLASS___UITableView_026ce1a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    }
    _class_getMethodImplementation(local_50,PTR_s_setContentOffset_animated__0269ddd8);
    *plVar1 = (long)local_50;
  }
  (*(code *)*plVar1)(local_20,local_18,local_28,PTR_s_setContentOffset_animated__0269ddd8,0);
  _objc_storeStrong(&local_28,0);
  return;
}

