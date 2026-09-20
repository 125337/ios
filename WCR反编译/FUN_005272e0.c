// FUN_005272e0 @ 005272e0

void FUN_005272e0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong local_b0;
  ulong local_58;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_40 = 0;
  local_38 = param_5;
  local_30 = param_4;
  _objc_storeStrong(&local_40,param_6);
  (*DAT_028cb1b8)(local_18,local_20,local_28,local_30,local_38,local_40);
  uVar2 = local_18;
  uVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_m_cache_026a4bd8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  uVar5 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  bVar1 = (uVar5 & 1) == 0;
  if (bVar1) {
    local_b0 = local_28;
  }
  else {
    local_b0 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_m_cache_026a4bd8);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_b0;
  }
  FUN_00532550(uVar2,local_b0,0,0);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

