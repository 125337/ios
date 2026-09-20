// pinRelativePathToFront: @ 01081d40

/* Function Stack Size: 0x18 bytes */

bool WCRefineLocalEmoticonStore::pinRelativePathToFront_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pinnedMutable_026ae270);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_removeObject__0269d678,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_insertObject_atIndex__0269eac0,local_30,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_saveIndex_026ae268);
    FUN_0107ad08();
    local_11 = 1;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

