// FUN_00350208 @ 00350208

byte FUN_00350208(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_28;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_homeAvatarStripSectionOffset_026a23d0);
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toDoCardCustomSectionOffset_026a2578);
  if ((-1 < (long)puVar1) && (-1 < (long)puVar2)) {
    uVar3 = local_20;
    FUN_00355458();
    if ((uVar3 & 1) != 0) {
      local_11 = (long)puVar1 <= (long)puVar2;
      goto LAB_003502f0;
    }
  }
  local_11 = (long)puVar1 < 1;
LAB_003502f0:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

