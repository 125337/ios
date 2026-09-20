// FUN_003a4d08 @ 003a4d08

void FUN_003a4d08(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_18;
  if ((local_18 != 0) && (local_20 != 0)) {
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    FUN_00369a04(lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    FUN_00368c14(local_18,&cf_hideGroupSessions);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

