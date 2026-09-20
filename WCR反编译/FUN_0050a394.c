// FUN_0050a394 @ 0050a394

byte FUN_0050a394(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_48;
  long local_40 [3];
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  FUN_0050a5f4();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  FUN_00508f94();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = lVar2;
  if (lVar2 == 0) {
    lVar2 = local_20;
    FUN_00509410(local_20,&cf_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_00509274();
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar3 = local_48;
    FUN_00509594();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_40[0];
    local_40[0] = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    _objc_storeStrong(&local_48,0);
  }
  bVar1 = local_40[0] != 0;
  if (bVar1) {
    FUN_0050a168();
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
               PTR_s_presentMomentsProfileCardForCont_026a4680,local_40[0],0,local_20,local_28);
  }
  local_11 = bVar1;
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

