// dataForCellAtIndex: @0x8bc74

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCMYBIBDataMediator::dataForCellAtIndex_(ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 local_f8;
  undefined8 local_d0;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_50;
  long local_48;
  long_long local_40;
  SEL local_38;
  ID local_30;
  undefined8 local_28;
  
  local_40 = param_3;
  local_38 = param_2;
  local_30 = param_1;
  if (((long)param_3 < 0) ||
     (lVar1 = _objc_msgSend_numberOfCells(param_1,local_d0), lVar1 + -1 < (long)param_3)) {
    local_28 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(local_30 + 0x10);
    _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_d0,local_40);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_objectForKey_(uVar4,local_d0);
    local_48 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar2);
    if (local_48 == 0) {
      uVar2 = _objc_loadWeakRetained(local_30 + 8);
      _objc_msgSend_dataSource(uVar2,local_d0);
      lVar1 = _objc_retainAutoreleasedReturnValue();
      if (lVar1 == 0) {
        local_90 = _objc_loadWeakRetained(local_30 + 8);
        _objc_msgSend_dataSourceArray(local_90,local_d0);
        local_a0 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_objectAtIndexedSubscript_(local_a0,local_d0,local_40);
        local_f8 = _objc_retainAutoreleasedReturnValue();
        local_b0 = local_f8;
      }
      else {
        local_50 = _objc_loadWeakRetained(local_30 + 8);
        _objc_msgSend_dataSource(local_50,local_d0);
        local_60 = _objc_retainAutoreleasedReturnValue();
        local_70 = _objc_loadWeakRetained(local_30 + 8);
        _objc_msgSend_wcm_yb_imageBrowser_dataForCellAtIndex_(local_60,local_d0,local_70,local_40);
        local_f8 = _objc_retainAutoreleasedReturnValue();
        local_80 = local_f8;
      }
      _objc_storeStrong(&local_48,local_f8);
      if (lVar1 == 0) {
        (*(code *)PTR__objc_release_00110458)(local_b0);
        (*(code *)PTR__objc_release_00110458)(local_a0);
        (*(code *)PTR__objc_release_00110458)(local_90);
      }
      else {
        (*(code *)PTR__objc_release_00110458)(local_80);
        (*(code *)PTR__objc_release_00110458)(local_70);
        (*(code *)PTR__objc_release_00110458)(local_60);
        (*(code *)PTR__objc_release_00110458)(local_50);
      }
      (*(code *)PTR__objc_release_00110458)(lVar1);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      lVar1 = local_48;
      uVar4 = *(undefined8 *)(local_30 + 0x10);
      _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_d0,local_40);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setObject_forKey_(uVar4,local_d0,lVar1);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      uVar2 = _objc_loadWeakRetained(local_30 + 8);
      _objc_msgSend_implementGetBaseInfoProtocol_(uVar2,local_d0,local_48);
      (*(code *)PTR__objc_release_00110458)(uVar2);
    }
    local_28 = (*(code *)PTR__objc_retain_00110460)(local_48);
    _objc_storeStrong(&local_48,0);
  }
  IVar3 = _objc_autoreleaseReturnValue(local_28);
  return IVar3;
}

