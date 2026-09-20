// FUN_0069c4b4 @ 0069c4b4

byte FUN_0069c4b4(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  byte local_38;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_0069c020(local_20,&cf_userInfo);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_38 = 0;
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    local_30 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_WCRefineBuiltInPluginHub);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = (byte)uVar2;
  }
  local_11 = local_38 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

