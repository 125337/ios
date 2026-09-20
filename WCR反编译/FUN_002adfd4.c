// FUN_002adfd4 @ 002adfd4

long FUN_002adfd4(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  FUN_002ae1e8();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)();
  uVar1 = (uint)lVar2;
  FUN_002ae49c();
  _objc_storeStrong(&local_18,0);
  return lVar3 + (int)(uint)((uVar1 & 1) != 0);
}

