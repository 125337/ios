// FUN_002d3e38 @ 002d3e38

undefined8 FUN_002d3e38(long param_1)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined *local_28;
  long local_20;
  undefined8 local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_floatingTabBarEnabled_0269e4b8);
  if ((((ulong)puVar1 & 1) == 0) ||
     (puVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingTabBarExtraButtonEnabled_0269e4c0)
     , ((ulong)puVar1 & 1) == 0)) {
    local_18 = 0;
  }
  else {
    local_40 = 0;
    if (local_20 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_floatingTabBarExtraButtonIconSiz_026a1be0);
    }
    else if (local_20 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_floatingTabBarExtraButtonIconSiz_026a1be8);
    }
    else if (local_20 == 2) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_floatingTabBarExtraButtonIconSiz_026a1bf0);
    }
    else if (local_20 == 3) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_floatingTabBarExtraButtonIconSiz_026a1bf8);
    }
    else {
      local_40 = 0;
    }
    FUN_002adba4(local_40,0xc034000000000000,0x4034000000000000);
    local_18 = local_40;
  }
  _objc_storeStrong(&local_28,0);
  return local_18;
}

