// FUN_000653f8 @ 000653f8

void FUN_000653f8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 local_58;
  
  puVar2 = PTR__OBJC_CLASS___NSObject_026ce188;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_new_0269d288);
  uVar1 = DAT_028c7c38;
  DAT_028c7c38 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    local_58 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setWithArray__0269d9a0,local_58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028c7c40;
  DAT_028c7c40 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028c7c48;
  DAT_028c7c48 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

