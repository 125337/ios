// FUN_008869f4 @ 008869f4

/* WARNING: Removing unreachable block (ram,0x00886bac) */
/* WARNING: Removing unreachable block (ram,0x00886b8c) */

void FUN_008869f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 != 0) {
    lVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028cd8c3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    lVar3 = local_18;
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(lVar3,&DAT_028cd8c3,puVar2,1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      lVar3 = local_18;
      FUN_00886c94(local_18,0,0);
      FUN_00887184(local_18,(uint)lVar3 & 1);
      _objc_setAssociatedObject(local_18,&DAT_028cd8c3,0,1);
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

