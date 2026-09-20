// FUN_005090bc @ 005090bc

byte FUN_005090bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_50 [3];
  undefined8 local_38;
  undefined4 local_2c;
  long local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_28 == 0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    uVar1 = local_20;
    FUN_00509410(local_20,&cf_m_dataItem);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_20;
    local_38 = uVar1;
    FUN_00509fbc();
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = uVar2;
    FUN_0050a168();
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
               PTR_s_presentMomentsProfileCardForCont_026a4680,local_28,local_20,local_50[0],
               local_38);
    local_11 = 1;
    local_2c = 1;
    _objc_storeStrong(local_50);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

