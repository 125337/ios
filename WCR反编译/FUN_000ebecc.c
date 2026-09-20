// FUN_000ebecc @ 000ebecc

byte FUN_000ebecc(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_000ebff0();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 == 0) {
    local_11 = 0;
  }
  else {
    puVar2 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
               PTR_s_performStandaloneActionWithID_co_0269ea58,
               _WCRefineProfileCardActionIDChatRecord,lVar1);
    local_11 = (byte)puVar2 & 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

