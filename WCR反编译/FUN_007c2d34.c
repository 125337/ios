// FUN_007c2d34 @ 007c2d34

/* WARNING: Removing unreachable block (ram,0x007c2d80) */

void FUN_007c2d34(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *local_c0;
  undefined *local_98;
  bool local_69;
  undefined *local_68;
  undefined *local_60 [3];
  undefined *local_48;
  undefined4 local_40;
  undefined1 local_39;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*DAT_028ccda0)(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  local_39 = 1;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_myPageNameCustomEnabled_026a5d18);
  local_69 = ((ulong)puVar1 & 1) == 0;
  if (local_69) {
    local_98 = *(undefined **)PTR____NSDictionary0___02578288;
  }
  else {
    local_98 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_customMenuNames_026a5d20);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_98;
  }
  local_69 = !local_69;
  (*(code *)PTR__objc_retain_02578638)();
  local_60[0] = local_98;
  if (local_69) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  puVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_cN);
  local_18 = local_38;
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
  }
  else {
    puVar1 = local_60[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_cN);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_c0 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_c0;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  local_40 = 1;
  _objc_storeStrong(local_60);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

