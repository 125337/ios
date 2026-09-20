// FUN_0068c11c @ 0068c11c

void FUN_0068c11c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_98;
  ulong local_58 [3];
  ulong local_40;
  long local_38;
  long local_30;
  ulong local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_98 = 0;
  }
  else {
    local_98 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_statusCode_026a1578);
  }
  local_40 = local_98;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf__net___response);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_20;
  FUN_0068bef8();
  _objc_retainAutoreleasedReturnValue();
  FUN_0068be8c(puVar1);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar2 = local_20;
  FUN_0068c480();
  _objc_retainAutoreleasedReturnValue();
  local_58[0] = uVar2;
  FUN_0068b928();
  if ((uVar2 & 1) == 0) {
    if (local_30 == 0) {
      FUN_0068cf24(local_58[0],2);
      uVar2 = local_58[0];
      FUN_0068e36c();
      _objc_retainAutoreleasedReturnValue();
      FUN_0068d2e0();
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
  }
  else {
    FUN_0068ce80();
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),local_58[0],local_40);
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

