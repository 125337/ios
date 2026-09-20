// FUN_00738fb4 @ 00738fb4

void FUN_00738fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_58;
  undefined4 local_50;
  ulong local_40;
  undefined8 local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  puVar3 = &local_40;
  local_40 = 0;
  local_38 = param_2;
  _objc_storeStrong(puVar3,param_3);
  uVar2 = (uint)puVar3;
  _WCRSideloadShareFixIsGroupRemapExtensionProcess();
  uVar5 = local_40;
  if ((uVar2 & 1) != 0) {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar2 = (uint)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar5 = local_40;
      FUN_007393fc();
      uVar2 = (uint)uVar5;
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
  }
  FUN_0073a058();
  uVar5 = local_40;
  if ((uVar2 & 1) == 0) {
    uVar5 = local_30;
    (*DAT_028cc550)(local_30,local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_50 = 1;
    local_28 = uVar5;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((uVar5 & 1) == 0) ||
       (uVar5 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
       uVar5 == 0)) {
      uVar5 = local_30;
      (*DAT_028cc550)(local_30,local_38,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_50 = 1;
      local_28 = uVar5;
    }
    else {
      uVar5 = local_40;
      FUN_0073a18c();
      if ((uVar5 & 1) == 0) {
        uVar5 = local_30;
        (*DAT_028cc550)(local_30,local_38,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_50 = 1;
        local_28 = uVar5;
      }
      else {
        FUN_0073a30c();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_40;
        local_58 = uVar5;
        if (uVar5 == 0) {
          uVar5 = local_30;
          (*DAT_028cc550)(local_30,local_38,local_40);
          _objc_retainAutoreleasedReturnValue();
          local_28 = uVar5;
        }
        else {
          FUN_0073a94c();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_path_0269d4d8);
          _objc_retainAutoreleasedReturnValue();
          FUN_0073a874(&cf_container,uVar1,uVar5);
          (*(code *)PTR__objc_release_02578630)(uVar6);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          uVar5 = local_58;
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = uVar5;
        }
        local_50 = 1;
        _objc_storeStrong(&local_58,0);
      }
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

