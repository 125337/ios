// FUN_001a83e4 @ 001a83e4

void FUN_001a83e4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long local_60;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_2;
  local_20 = param_2;
  local_18 = param_2;
  _objc_autoreleasePoolPush();
  lVar3 = lVar2;
  FUN_001a8580();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar3;
  _os_unfair_lock_lock(&DAT_028c8a48);
  if (*(long *)(param_2 + 0x28) == DAT_028c8a58) {
    uVar4 = DAT_028c89c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028c89c8,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_2 + 0x20));
    if ((uVar4 & 1) != 0) {
      if (local_28 == 0) {
        local_60 = *(long *)PTR____NSDictionary0___02578288;
      }
      else {
        local_60 = local_28;
      }
      _objc_storeStrong(&DAT_028c89b8,local_60);
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = DAT_028c89c0;
      DAT_028c89c0 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _CFAbsoluteTimeGetCurrent();
      DAT_028c8a50 = param_1;
      _objc_storeStrong(&DAT_028c89d0,0);
    }
  }
  _os_unfair_lock_unlock(&DAT_028c8a48);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleasePoolPop(lVar2);
  return;
}

