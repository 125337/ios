// _WCRefineApplyPluginHubGlobalPageBackground @ 00810630

byte _WCRefineApplyPluginHubGlobalPageBackground(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar3 = local_20;
  FUN_00810910();
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isViewLoaded_0269cde0),
     (uVar3 & 1) == 0)) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    _objc_storeStrong(&DAT_026f4830,&cf_hub);
    _CFAbsoluteTimeGetCurrent();
    local_38 = param_1;
    FUN_00810a08(local_20,_WCRPageBackgroundSceneGlobal,1);
    uVar3 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_028cd0e0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    FUN_00814d40();
    if ((uVar3 & 1) != 0) {
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      FUN_00814ea4();
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    uVar4 = local_20;
    uVar2 = _WCRPageBackgroundSceneGlobal;
    pcVar1 = &cf_managed;
    if ((uVar3 & 1) == 0) {
      pcVar1 = &cf_legacy;
    }
    uVar5 = local_40;
    _objc_getAssociatedObject(local_40,&DAT_028cd0e1);
    _objc_retainAutoreleasedReturnValue();
    FUN_0081501c(local_38,uVar4,&cf_hub,uVar2,pcVar1,&cf_root_index0,&cf___);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    local_11 = (byte)uVar3 & 1;
    local_30 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

