// _WCRSideloadReadExecutableEntitlements @ 01503150

void _WCRSideloadReadExecutableEntitlements(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_48;
  undefined *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_026ce418;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_015032a8();
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_18;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_bytes_026a9630);
  puVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  FUN_01503a8c(puVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_48 = *(undefined **)PTR____NSDictionary0___02578288;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

