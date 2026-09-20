// FUN_004ea4a8 @ 004ea4a8

byte FUN_004ea4a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long local_40;
  undefined4 local_38;
  undefined8 local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_11 = 0;
    local_38 = 1;
    goto LAB_004ea658;
  }
  lVar3 = local_20;
  FUN_004e2d9c();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar3;
  if (lVar3 == 0) {
LAB_004ea630:
    local_11 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_m_uiMessageType_0269d0a8);
    if ((int)lVar3 == 1) goto LAB_004ea630;
    local_11 = 0;
  }
  local_38 = 1;
  _objc_storeStrong(&local_40,0);
LAB_004ea658:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

