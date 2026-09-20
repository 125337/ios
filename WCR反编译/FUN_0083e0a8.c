// FUN_0083e0a8 @ 0083e0a8

void FUN_0083e0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 local_a0;
  undefined8 local_60;
  bool local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30,param_3);
  ppuVar2 = &PTR___tlv_bootstrap_028c7950;
  (*(code *)PTR___tlv_bootstrap_028c7950)();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (*(int *)ppuVar2 < 4) {
    ppuVar2 = &PTR___tlv_bootstrap_028c7950;
    (*(code *)PTR___tlv_bootstrap_028c7950)();
    *(int *)ppuVar2 = *(int *)ppuVar2 + 1;
    local_51 = false;
    bVar1 = DAT_028cd278 == (code *)0x0;
    if (bVar1) {
      local_a0 = 0;
    }
    else {
      local_a0 = local_20;
      (*DAT_028cd278)(local_20,local_28,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_a0;
    }
    local_51 = !bVar1;
    _objc_retain();
    local_48 = local_a0;
    if (local_51 == true) {
      _objc_release(0,local_50);
    }
    ppuVar2 = &PTR___tlv_bootstrap_028c7950;
    (*(code *)PTR___tlv_bootstrap_028c7950)();
    *(int *)ppuVar2 = *(int *)ppuVar2 + -1;
    uVar3 = local_48;
    FUN_0080c9e4(local_48,local_30);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineBubbleCut_026ce9c8;
    local_60 = uVar3;
    _objc_msgSend(PTR_WCRefineBubbleCut_026ce9c8,PTR_s_applyCutIfNeededToImage_assetNam_026a8c88,
                  uVar3,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_40 = 1;
    local_18 = puVar4;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR___tlv_bootstrap_028c7950)();
    _objc_msgSend(puVar4,PTR_s_stringWithFormat__0269cca8,
                  &cf_theme_imageNamedRECURSIONbreakdepth__dname___);
    _objc_retainAutoreleasedReturnValue();
    _WCRefineSwitchDiagNote();
    _objc_release(puVar4);
    local_18 = (undefined *)0x0;
    local_40 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

