// FUN_016bc728 @ 016bc728

bool FUN_016bc728(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_016bec28();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_storeStrong(&local_18,0);
  return lVar2 != 0;
}

