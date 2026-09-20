// FUN_01bdb728 @ 01bdb728

void FUN_01bdb728(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  FUN_01bc7c2c();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_excludeUsernameFromAntiDelete_di_026c08c0,uVar3)
  ;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_storeStrong(&local_20,0);
  return;
}

