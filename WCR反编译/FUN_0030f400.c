// FUN_0030f400 @ 0030f400

void FUN_0030f400(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_48;
  uint local_3c;
  ulong local_38 [3];
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c9b48)(param_1,param_2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) != 0) {
    uVar4 = local_18;
    FUN_0030f84c();
    _objc_retainAutoreleasedReturnValue();
    local_38[0] = uVar4;
    if (uVar4 == 0) {
      local_3c = 1;
    }
    else {
      uVar5 = uVar4;
      FUN_00311540();
      FUN_0030fef4(uVar4,uVar5);
      if ((uVar4 & 1) != 0) {
        puVar2 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (((ulong)puVar3 & 1) == 0) {
          FUN_0032b528(local_18);
        }
        else {
          FUN_00318438(local_18);
        }
      }
      uVar4 = local_38[0];
      FUN_0030fc08();
      if ((uVar4 & 1) == 0) {
        uVar4 = local_38[0];
        FUN_0032b5cc();
        if ((uVar4 & 1) != 0) {
          FUN_0032b648(local_18);
        }
        uVar4 = local_38[0];
        FUN_0032baec();
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar4;
        FUN_0032bc08();
        bVar1 = (uVar4 & 1) != 0;
        if (bVar1) {
          FUN_0032bd0c(local_18,local_38[0]);
        }
        local_3c = (uint)!bVar1;
        _objc_storeStrong(&local_48,0);
      }
      else {
        FUN_0031bb84(local_18);
        FUN_00313afc(local_18);
        local_3c = 1;
      }
    }
    _objc_storeStrong(local_38,0);
  }
  return;
}

