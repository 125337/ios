// FUN_0089d838 @ 0089d838

void FUN_0089d838(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *local_108;
  byte local_c8;
  byte local_c4;
  uint local_a8;
  bool local_81;
  undefined *local_80;
  undefined8 local_78;
  byte local_69;
  undefined *local_68;
  byte local_5b;
  byte local_5a;
  byte local_59;
  undefined4 local_58;
  byte local_51;
  undefined *local_50;
  byte local_45;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar2 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar2,param_1);
  local_30 = param_2;
  FUN_0089d19c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  FUN_0089d2a0(puVar2,&cf_8_0_61);
  local_45 = ((byte)puVar2 ^ 1) & 1;
  FUN_0089e344(&cf_hotupdate_enter);
  local_51 = 0;
  local_a8 = 0;
  if ((local_45 & 1) != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a8 = (uint)puVar3;
  }
  bVar1 = (byte)local_a8;
  if ((local_51 & 1) != 0) {
    puVar3 = local_50;
    (*(code *)PTR__objc_release_02578630)();
    bVar1 = (byte)puVar3;
  }
  if ((local_a8 & 1) != 0) {
    FUN_0088f70c();
    DAT_028cdd48 = 1;
    local_58 = 1;
    goto LAB_0089de7c;
  }
  local_59 = bVar1;
  FUN_0089e384();
  FUN_0089b9b4();
  local_5a = local_59;
  FUN_0089bb90();
  local_c4 = 0;
  if ((local_45 & 1) != 0) {
    local_c8 = 1;
    if ((local_59 & 1) == 0) {
      local_c8 = local_5a;
    }
    local_c4 = local_c8;
  }
  local_5b = local_c4 & 1;
  local_69 = 0;
  local_108 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSProcessInfo_026ce4d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSProcessInfo_026ce4d0,PTR_s_processInfo_026a1a38);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = 0;
    if (((ulong)puVar3 & 1) != 0) goto LAB_0089db6c;
  }
  else {
LAB_0089db6c:
    bVar1 = 0;
    if (((local_5b & 1) == 0) && (bVar1 = 0, (DAT_028cdd49 & 1) == 0)) {
      bVar1 = DAT_028cdd48 ^ 1;
    }
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_release_02578630)();
  if ((bVar1 & 1) == 0) {
    if ((local_5b & 1) == 0) {
      FUN_0089e9a0(&cf_pre);
      (*DAT_028cdd38)(local_28,local_30);
      FUN_0089e9a0(&cf_post);
      FUN_0089ecc0(&cf_post);
      FUN_0089f704();
      local_58 = 1;
    }
    else {
      local_78 = 0;
      if ((local_45 & 1) != 0) {
        FUN_0088f70c();
      }
      local_81 = (local_5b & 1) == 0;
      if (local_81) {
        local_108 = (undefined *)0x0;
      }
      else {
        FUN_0089f82c();
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_108;
      }
      local_81 = !local_81;
      _objc_storeStrong(&local_78,local_108);
      if (local_81) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      FUN_0089e9a0(&cf_pre);
      (*DAT_028cdd38)(local_28,local_30);
      FUN_0089e344(&cf_hotupdate_afterOrig);
      FUN_0089e9a0(&cf_post);
      if ((local_5b & 1) != 0) {
        FUN_0089fa0c(local_78);
        FUN_0088f70c();
      }
      FUN_0089e344(&cf_hotupdate_afterRestore);
      FUN_0089e9a0(&cf_postRestore);
      FUN_0089ecc0(&cf_postRestore);
      FUN_0089f704();
      _objc_storeStrong(&local_78,0);
      local_58 = 0;
    }
  }
  else {
    FUN_0089e704(local_28);
    local_58 = 1;
  }
LAB_0089de7c:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

