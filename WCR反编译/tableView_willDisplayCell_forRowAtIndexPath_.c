// tableView:willDisplayCell:forRowAtIndexPath: @ 01dc4db8

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x28 bytes */

void WCRefineSessionStatsLayoutViewController::tableView_willDisplayCell_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double in_d3;
  double local_c0;
  long local_40 [5];
  ID local_18;
  
  local_40[3] = 0;
  local_40[4] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_40 + 3,param_3);
  local_40[2] = 0;
  _objc_storeStrong(local_40 + 2,param_4);
  local_40[1] = 0;
  _objc_storeStrong(local_40 + 1,param_5);
  lVar1 = local_40[2];
  (*(code *)PTR__objc_msgSend_02578628)(local_40[2],PTR_s_contentView_026ca5a8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (local_40[0] != 0) {
    lVar1 = local_40[2];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[2],PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    if (in_d3 <= 1.0) {
      local_c0 = 28.0;
    }
    else {
      local_c0 = in_d3 / 2.0;
    }
    uVar3 = 0x4034000000000000;
    FUN_01dc4f9c();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,local_c0,local_40[0],PTR_s_setCenter__026ca8c0);
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(local_40 + 1,0);
  _objc_storeStrong(local_40 + 2,0);
  _objc_storeStrong(local_40 + 3,0);
  return;
}

