// numberOfCells @0x8ba2c

/* Function Stack Size: 0x10 bytes */

long_long WCMYBIBDataMediator::numberOfCells(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long_long lVar6;
  undefined8 local_90;
  
  uVar1 = _objc_loadWeakRetained(param_1 + 8);
  _objc_msgSend_dataSource(uVar1,local_90);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar3 = _objc_loadWeakRetained(param_1 + 8);
    _objc_msgSend_dataSourceArray(uVar3,local_90);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    lVar6 = _objc_msgSend_count(uVar4,local_90);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  else {
    uVar3 = _objc_loadWeakRetained(param_1 + 8);
    _objc_msgSend_dataSource(uVar3,local_90);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar5 = _objc_loadWeakRetained(param_1 + 8);
    lVar6 = _objc_msgSend_wcm_yb_numberOfCellsInImageBrowser_(uVar4,local_90);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  (*(code *)PTR__objc_release_00110458)(lVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return lVar6;
}

