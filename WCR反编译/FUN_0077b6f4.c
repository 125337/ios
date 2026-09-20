// FUN_0077b6f4 @ 0077b6f4

undefined1 * FUN_0077b6f4(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  uint local_88;
  undefined *local_68;
  undefined *local_58;
  ulong local_30;
  double local_28;
  undefined8 local_20;
  undefined1 *local_18;
  
  local_30 = 0;
  local_28 = param_1;
  local_20 = param_2;
  _objc_storeStrong(&local_30,param_3);
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcrefine_isMyMessage_026a42e0);
  uVar2 = (uint)uVar3 & 1;
  FUN_00784100();
  if ((uVar2 & 1) != 0) {
    bVar1 = (uVar3 & 1) == 0;
    if (bVar1) {
      local_68 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    else {
      local_58 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar4 = (undefined *)((ulong)puVar4 & 1);
    }
    local_88 = (uint)(puVar4 == (undefined *)0x0);
    puVar6 = (undefined1 *)(long)(int)local_88;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    local_18 = puVar6;
    if (((puVar6 == (undefined1 *)0x0) && (local_28 < 0.0)) ||
       ((puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 1) && (0.0 < local_28))))
    goto LAB_0077baf8;
  }
  if ((uVar3 & 1) == 0) {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_18 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  else {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_18 = (undefined1 *)(long)(int)(uint)(((ulong)puVar5 & 1) != 0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
LAB_0077baf8:
  _objc_storeStrong(&local_30,0);
  return local_18;
}

