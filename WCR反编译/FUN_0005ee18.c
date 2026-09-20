// FUN_0005ee18 @ 0005ee18

byte FUN_0005ee18(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_000614c8();
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_20;
    local_38 = puVar2;
    FUN_0006171c();
    if ((uVar1 & 1) == 0) {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_autoParseLinkContactOutgoingAuto_0269dbd8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      FUN_0006181c();
      local_11 = (byte)puVar3 & 1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_autoParseLinkGroupOutgoingAutoID_0269dbd0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      FUN_0006181c();
      local_11 = (byte)puVar3 & 1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

