// FUN_01f5eb54 @ 01f5eb54

undefined8 FUN_01f5eb54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar4 = *(ulong *)(param_1 + 0x20);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_indexOfObject__0269e870);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar5 = *(ulong *)(param_1 + 0x20);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_indexOfObject__0269e870);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar4 != 0x7fffffffffffffff) || (uVar5 != 0x7fffffffffffffff)) {
    if (uVar4 == 0x7fffffffffffffff) {
      local_18 = 1;
      goto LAB_01f5edc0;
    }
    if (uVar5 == 0x7fffffffffffffff) {
      local_18 = 0xffffffffffffffff;
      goto LAB_01f5edc0;
    }
    if (uVar4 != uVar5) {
      local_18 = 1;
      if (uVar4 < uVar5) {
        local_18 = 0xffffffffffffffff;
      }
      goto LAB_01f5edc0;
    }
  }
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_localizedStandardCompare__0269e098);
  local_18 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
LAB_01f5edc0:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

