// activeQueue @ 00f77bac

/* Function Stack Size: 0x10 bytes */

ID WCRefineFriendRelationChecker::activeQueue(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ID IVar4;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_30;
  
  IVar4 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_rechecking_026aca80);
  local_70 = PTR_WCRefineFriendRelationStore_026cebd0;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  if ((IVar4 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_snap_026aca78);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_queueFromSnapshot__026aca68);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_50 = local_70;
    local_40 = param_1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_recheckQueue_026acab0);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = true;
    local_68 = (undefined *)param_1;
    if ((undefined *)param_1 == (undefined *)0x0) {
      local_68 = *(undefined **)PTR____NSArray0___02578280;
    }
    local_70 = local_68;
    local_30 = (undefined *)param_1;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_70;
}

