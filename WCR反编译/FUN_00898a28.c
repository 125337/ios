// FUN_00898a28 @ 00898a28

void FUN_00898a28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 local_50 [3];
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     ((uVar2 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_isEqualToString__0269ccc8,&cf_clicfg_file_local_preview_support_exts
                ), (uVar2 & 1) == 0 &&
      (uVar2 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_isEqualToString__0269ccc8,&cf_clicfg_file_trans_support_exts),
      (uVar2 & 1) == 0)))) {
    uVar4 = local_20;
    (*DAT_028cdc08)(local_20,local_28,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar4;
  }
  else {
    uVar4 = local_20;
    (*DAT_028cdc08)(local_20,local_28,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_WCRefineConfig_026cdf58;
    local_50[0] = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = puVar3;
    FUN_0088fb40();
    uVar4 = local_50[0];
    if (puVar1 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar4;
    }
    else {
      FUN_008a2c58(local_50[0],puVar3);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar4;
    }
    _objc_storeStrong(local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

