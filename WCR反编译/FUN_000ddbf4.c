// FUN_000ddbf4 @ 000ddbf4

void FUN_000ddbf4(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_a0;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_000d8d08(local_20,"m_nsChatName");
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = uVar1 & 0xffffffff;
  if ((uVar1 & 1) != 0) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    uVar1 = local_28;
    uVar4 = 0;
    if (uVar3 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      local_38 = 1;
      goto LAB_000dde34;
    }
  }
  uVar1 = local_20;
  FUN_000d8d08(uVar4,local_20,"m_logic");
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  FUN_000d8d08(uVar1,"m_nsChatName");
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_28;
  local_28 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar4 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar4 & 1) == 0) {
    local_a0 = 0;
  }
  else {
    local_a0 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_a0;
  local_38 = 1;
  _objc_storeStrong(&local_40,0);
LAB_000dde34:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

