// FUN_002d50e0 @ 002d50e0

byte FUN_002d50e0(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *local_20;
  byte local_11;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_floatingTabBarEnabled_0269e4b8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_floatingTabBarShowInMomentsEnabl_026a1c00);
    uVar1 = (uint)puVar2;
    if (((ulong)puVar2 & 1) != 0) {
      if ((DAT_028c9839 & 1) == 0) {
        local_11 = 0;
      }
      else {
        FUN_002d5790();
        if ((uVar1 & 1) == 0) {
          DAT_028c9839 = 0;
          local_11 = 0;
        }
        else {
          local_11 = 1;
        }
      }
      goto LAB_002d5224;
    }
  }
  local_11 = 0;
LAB_002d5224:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

