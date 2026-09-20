// FUN_00529eb4 @ 00529eb4

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00529eb4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_78;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar2;
  (*(code *)PTR__objc_release_02578630)();
  FUN_0052a110();
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  puVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isEqualToArray__0269e9b0,DAT_028cb200);
  if (((ulong)puVar2 & 1) == 0) {
    puVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_copy_0269d150);
    puVar2 = DAT_028cb200;
    DAT_028cb200 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_78 = DAT_028cb200;
    if (DAT_028cb200 == (undefined *)0x0) {
      local_78 = *(undefined **)PTR____NSArray0___02578280;
    }
    puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,local_78);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = DAT_028cb208;
    DAT_028cb208 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = DAT_028cb208;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_exit(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

