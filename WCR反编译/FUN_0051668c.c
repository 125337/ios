// FUN_0051668c @ 0051668c

byte FUN_0051668c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_00513140();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    uVar2 = local_20;
    FUN_0050e284(local_20,&cf_contentDesc);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineConfig_026cdf58;
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    uVar2 = local_40;
    uVar4 = local_20;
    FUN_0051338c();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_addHiddenOwnMomentTid_desc_time__026a47a0,uVar1,uVar2,uVar4 & 0xffffffff
              );
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_11 = 1;
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

