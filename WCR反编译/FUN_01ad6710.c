// FUN_01ad6710 @ 01ad6710

long FUN_01ad6710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_order_026ad490);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_order_026ad490);
  if (lVar1 == lVar2) {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_groupId_0269ea88);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_groupId_0269ea88);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_compare__0269cd10);
    local_18 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  else {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_order_026ad490);
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_order_026ad490);
    local_18 = 1;
    if (lVar1 < lVar2) {
      local_18 = -1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

