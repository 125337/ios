// centerCell @0x8c7b0

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBCollectionView::centerCell(ID param_1,SEL param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  double dVar6;
  double in_d2;
  double local_110;
  double local_100;
  undefined8 local_d8;
  int local_8c;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  SEL local_38;
  ID local_30;
  undefined8 local_28;
  
  local_38 = param_2;
  local_30 = param_1;
  _objc_msgSend_visibleCells(param_1);
  local_40 = _objc_retainAutoreleasedReturnValue();
  lVar1 = _objc_msgSend_count(local_40,local_d8);
  if (lVar1 == 0) {
    local_28 = 0;
    local_44 = 1;
  }
  else {
    _objc_msgSend_objectAtIndexedSubscript_(local_40,local_d8,0);
    local_50 = _objc_retainAutoreleasedReturnValue();
    dVar6 = (double)_objc_msgSend_contentOffset(local_30,local_d8);
    _objc_msgSend_bounds(local_30,local_d8);
    dVar6 = dVar6 + in_d2 / 2.0;
    local_8c = 1;
    while( true ) {
      uVar2 = _objc_msgSend_count(local_40,local_d8);
      if (uVar2 <= (ulong)(long)local_8c) break;
      _objc_msgSend_objectAtIndexedSubscript_
                ((long)local_8c - uVar2,local_40,local_d8,(long)local_8c);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      local_100 = (double)_objc_msgSend_center(uVar3,local_d8);
      local_100 = local_100 - dVar6;
      (*(code *)PTR__objc_release_00110458)(uVar3);
      if (local_100 < 0.0) {
        local_100 = -local_100;
      }
      local_110 = (double)_objc_msgSend_center(local_50,local_d8);
      local_110 = local_110 - dVar6;
      if (local_110 < 0.0) {
        local_110 = -local_110;
      }
      if (local_100 < local_110) {
        _objc_msgSend_objectAtIndexedSubscript_(local_40,local_d8,(long)local_8c);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        uVar3 = local_50;
        local_50 = uVar4;
        (*(code *)PTR__objc_release_00110458)(uVar3);
      }
      local_8c = local_8c + 1;
    }
    local_28 = (*(code *)PTR__objc_retain_00110460)(local_50);
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  IVar5 = _objc_autoreleaseReturnValue(local_28);
  return IVar5;
}

