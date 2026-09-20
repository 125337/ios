// FUN_00405350 @ 00405350

void FUN_00405350(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_38;
  ulong local_30;
  uint local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar3 = local_18;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    uVar3 = local_18;
    FUN_004055cc(local_18,&cf_sessionUserName);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRefineConfig_026cdf58;
    local_30 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    FUN_004057b0(local_18);
    FUN_00405c08(local_18);
    FUN_00405f68(local_18);
    FUN_00407004(local_18);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  local_28 = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

