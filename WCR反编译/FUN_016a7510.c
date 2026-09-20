// FUN_016a7510 @ 016a7510

void FUN_016a7510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_cancelCompositeCapture_026b2e08);
  _objc_setAssociatedObject(local_18,&DAT_028e3f10,0,1);
  FUN_016d3610(local_18);
  _objc_storeStrong(&local_28,0);
  return;
}

