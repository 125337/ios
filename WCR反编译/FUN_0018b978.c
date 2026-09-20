// FUN_0018b978 @ 0018b978

long FUN_0018b978(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 local_38;
  ulong local_30;
  long local_28;
  ulong uVar2;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar2 = local_30;
  FUN_0018ae70(local_30,param_3,param_4);
  uVar1 = (uint)uVar2;
  FUN_0018f95c();
  if (((uVar1 & 1) == 0) || (param_4 < 1)) {
    uVar2 = local_30;
    FUN_0018a708(local_30,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithLongLong__0269d808,param_3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_removeObjectForKey__0269d700);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  else {
    uVar2 = local_30;
    FUN_0018a708(local_30,1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithLongLong__0269d808,param_3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_removeObjectForKey__0269d700);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_30;
    FUN_0018f978(local_30,param_3,param_4,1);
    _objc_unsafeClaimAutoreleasedReturnValue(uVar2);
  }
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_28 = param_4;
  if (((ulong)puVar4 & 1) == 0 || param_4 < 1) {
    FUN_0018fe24(local_30,param_3,0);
  }
  else {
    uVar2 = local_30;
    FUN_00190028(local_30,param_3,param_4);
    FUN_0018fe24(local_30,param_3,(uint)uVar2 & 1);
    if (((uVar2 & 1) != 0) && (uVar2 = local_30, FUN_00190294(local_30,param_3), (uVar2 & 1) == 0))
    {
      local_28 = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_28;
}

