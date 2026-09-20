// FUN_000f49cc @ 000f49cc

byte FUN_000f49cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_11 = 0;
    local_30 = 1;
    goto LAB_000f4d08;
  }
  uVar3 = local_20;
  FUN_000f64fc();
  if ((uVar3 & 1) == 0) {
    local_11 = 0;
    local_30 = 1;
    goto LAB_000f4d08;
  }
  uVar3 = local_20;
  FUN_000ebff0();
  _objc_retainAutoreleasedReturnValue();
  local_40 = 0;
  local_38 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
  if ((uVar3 & 1) != 0) {
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_40;
    local_40 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  uVar3 = local_40;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar3 & 1) == 0) {
LAB_000f4cb0:
    local_11 = 1;
  }
  else {
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_isEqualToString__0269ccc8,&cf_notification_messages);
    if ((uVar3 & 1) == 0) goto LAB_000f4cb0;
    local_11 = 0;
  }
  local_30 = 1;
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
LAB_000f4d08:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

