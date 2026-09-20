// FUN_007f84dc @ 007f84dc

byte FUN_007f84dc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *local_28;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_toDoCardCustomSectionOffset_026a2578);
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_homeAvatarStripSectionOffset_026a23d0);
  if ((long)puVar1 < 0) {
    local_11 = false;
  }
  else {
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_homeAvatarStripEnabled_026a2568);
    if ((((ulong)puVar3 & 1) != 0) && (-1 < (long)puVar2)) {
      uVar4 = local_20;
      FUN_0080231c();
      if ((uVar4 & 1) != 0) {
        local_11 = (long)puVar2 <= (long)puVar1;
        goto LAB_007f8624;
      }
    }
    if ((long)puVar1 < 1) {
      local_11 = false;
    }
    else {
      local_11 = true;
    }
  }
LAB_007f8624:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

