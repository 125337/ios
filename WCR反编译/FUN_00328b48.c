// FUN_00328b48 @ 00328b48

void FUN_00328b48(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40 [3];
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    lVar1 = *(long *)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar1;
  }
  else {
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_visibleCells_0269fc48);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_20;
    local_60 = PTR___NSConcreteGlobalBlock_02578658;
    local_58 = 0xd0800000;
    local_54 = 0;
    local_50 = FUN_00329778;
    local_48 = &DAT_0257c268;
    (*(code *)PTR__objc_retain_02578638)();
    local_40[0] = lVar1;
    lVar1 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_sortedArrayUsingComparator__0269fae8,&local_60);
    _objc_retainAutoreleasedReturnValue();
    local_18 = lVar1;
    _objc_storeStrong(local_40,0);
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  local_24 = 1;
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

