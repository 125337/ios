// FUN_00064654 @ 00064654

byte FUN_00064654(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_11 = 0;
    goto LAB_000648ac;
  }
  FUN_0006538c();
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar1 = DAT_028c7c38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(uVar1);
  uVar5 = DAT_028c7c48;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028c7c48,PTR_s_containsObject__0269cbb8,local_20);
  if ((uVar5 & 1) == 0) {
    if (((ulong)puVar4 & 1) == 0) {
      uVar5 = DAT_028c7c40;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028c7c40,PTR_s_containsObject__0269cbb8,local_20);
      if ((uVar5 & 1) != 0) {
        local_11 = 0;
        goto LAB_00064890;
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c7c48,PTR_s_addObject__0269d180,local_20);
    local_11 = 1;
  }
  else {
    local_11 = 0;
  }
LAB_00064890:
  _objc_sync_exit(uVar1);
  (*(code *)PTR__objc_release_02578630)(uVar1);
LAB_000648ac:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

