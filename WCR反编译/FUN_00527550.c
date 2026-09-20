// FUN_00527550 @ 00527550

void FUN_00527550(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong local_a0;
  long local_68;
  ulong local_50;
  long local_30;
  long local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  (*DAT_028cb1c0)(local_18,local_20,local_28,local_30);
  if (local_28 == 5) {
    local_68 = local_30;
    FUN_00536ec0(0);
  }
  else {
    local_68 = 0;
  }
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
    local_a0 = 0;
  }
  else {
    local_a0 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_m_cache_026a4bd8);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_a0;
  }
  FUN_00532550(uVar2,local_a0,local_28 == 1 || 0 < local_68,local_68);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  _objc_storeStrong(&local_30,0);
  return;
}

