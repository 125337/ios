// FUN_015483b8 @ 015483b8

void FUN_015483b8(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_a8;
  undefined *local_28;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar3 = local_18;
  uVar2 = DAT_028c5fb8;
  if (local_18 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,DAT_028e3988);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar3,uVar2,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    lVar3 = local_18;
    uVar2 = DAT_028c5f78;
    if (DAT_028e3988 == 1) {
      puVar4 = &DAT_028e3910;
      _objc_loadWeakRetained();
      _objc_setAssociatedObject(lVar3,uVar2);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      lVar3 = local_18;
      uVar2 = DAT_028c5f88;
      puVar4 = &DAT_028e3908;
      _objc_loadWeakRetained();
      _objc_setAssociatedObject(lVar3,uVar2,puVar4,0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      lVar3 = local_18;
      uVar2 = DAT_028c5f80;
      bVar1 = DAT_028e3918 == (undefined *)0x0;
      if (bVar1) {
        local_a8 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_28 = local_a8;
      }
      else {
        local_a8 = DAT_028e3918;
      }
      _objc_setAssociatedObject(lVar3,uVar2,local_a8,1);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_28);
      }
    }
    else {
      _objc_setAssociatedObject(local_18,DAT_028c5f78);
      _objc_setAssociatedObject(local_18,DAT_028c5f88,0,0);
      _objc_setAssociatedObject(local_18,DAT_028c5f80,0,1);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

