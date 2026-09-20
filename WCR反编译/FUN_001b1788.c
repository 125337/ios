// FUN_001b1788 @ 001b1788

void FUN_001b1788(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_001a81d4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _os_unfair_lock_lock(&DAT_028c8a48);
  lVar3 = DAT_028c89b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028c89b8,PTR_s_objectForKeyedSubscript__0269d098,local_20);
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = lVar3;
  _os_unfair_lock_unlock(&DAT_028c8a48);
  if (local_38[0] == 0) {
    FUN_001a7b9c();
  }
  lVar3 = local_38[0];
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(lVar3);
  return;
}

