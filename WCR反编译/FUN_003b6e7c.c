// FUN_003b6e7c @ 003b6e7c

undefined8 FUN_003b6e7c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_session_0269d000);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_00396798();
  uVar3 = 0;
  FUN_003b703c(0,lVar2);
  local_20 = uVar3;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  uVar3 = local_20;
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_session_0269d000);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_00396798();
  FUN_003b703c(uVar3,lVar2);
  local_20 = uVar3;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cellData_026a27b0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_003612b8();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  uVar3 = local_20;
  if (local_28 != 0) {
    lVar1 = local_28;
    FUN_00396798(local_28,&cf_sortTime);
    FUN_003b703c(uVar3,lVar1);
    lVar1 = local_28;
    local_20 = uVar3;
    FUN_00396798(local_28,&cf_m_uLastTime);
    FUN_003b703c(uVar3,lVar1);
    local_20 = uVar3;
  }
  uVar3 = local_20;
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return uVar3;
}

