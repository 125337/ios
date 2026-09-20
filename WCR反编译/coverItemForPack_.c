// coverItemForPack: @ 0108a64c

/* Function Stack Size: 0x18 bytes */

ID WCRefineLocalEmoticonStore::coverItemForPack_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_itemForRelative_isPack__026ae328,local_30,1);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_coverAbsolutePath_026ae390);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_20;
  if (IVar2 == 0) {
    local_18 = 0;
    local_3c = 1;
  }
  else {
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_coverAbsolutePath_026ae390);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_relativePathFromAbsolute__026ae380);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_itemForRelative_isPack__026ae328,local_48,0);
    _objc_retainAutoreleasedReturnValue();
    local_3c = 1;
    local_18 = IVar1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

