// FUN_0039b3c0 @ 0039b3c0

bool FUN_0039b3c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_003d7db8(local_18,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_storeStrong(&local_18,0);
  return lVar2 != 0;
}

