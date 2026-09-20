// FUN_0073b2b0 @ 0073b2b0

void FUN_0073b2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined4 local_58;
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *puVar2;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_40 = 0;
  local_38 = param_2;
  _objc_storeStrong(&local_40,param_3);
  puVar2 = &local_48;
  local_48 = 0;
  _objc_storeStrong(puVar2,param_4);
  uVar1 = (uint)puVar2;
  FUN_0073a058();
  uVar4 = local_40;
  if ((uVar1 & 1) == 0) {
    uVar7 = local_30;
    (*DAT_028cc570)(local_30,local_38,local_40,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_58 = 1;
    local_28 = uVar7;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((uVar4 & 1) == 0) ||
       (uVar4 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf_group),
       (uVar4 & 1) == 0)) {
      uVar7 = local_30;
      (*DAT_028cc570)(local_30,local_38,local_40,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_58 = 1;
      local_28 = uVar7;
    }
    else {
      uVar4 = local_40;
      FUN_0073a18c();
      if ((uVar4 & 1) == 0) {
        uVar7 = local_30;
        (*DAT_028cc570)(local_30,local_38,local_40,local_48);
        _objc_retainAutoreleasedReturnValue();
        local_58 = 1;
        local_28 = uVar7;
      }
      else {
        FUN_0073a30c();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_40;
        local_60 = uVar4;
        if (uVar4 == 0) {
          uVar7 = local_30;
          (*DAT_028cc570)(local_30,local_38,local_40,local_48);
          _objc_retainAutoreleasedReturnValue();
          local_58 = 1;
          local_28 = uVar7;
        }
        else {
          uVar4 = local_40;
          (*(code *)PTR__objc_retain_02578638)();
          local_68 = uVar5;
          FUN_0073a9a0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)();
          if ((uVar5 & 1) == 0) {
            FUN_0073a94c();
            _objc_retainAutoreleasedReturnValue();
            local_70 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
            if (uVar4 != 0) {
              _objc_storeStrong(uVar4,&local_68,local_70);
            }
            _objc_storeStrong(&local_70,0);
          }
          uVar4 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_URLByAppendingPathComponent__026a7b98,local_68);
          _objc_retainAutoreleasedReturnValue();
          local_78 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_path_0269d4d8);
          _objc_retainAutoreleasedReturnValue();
          FUN_0073bfb0();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          uVar5 = local_40;
          uVar4 = local_68;
          uVar6 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_path_0269d4d8);
          _objc_retainAutoreleasedReturnValue();
          FUN_0073a874(&cf_suite,uVar5,uVar4);
          (*(code *)PTR__objc_release_02578630)(uVar6);
          uVar7 = local_30;
          (*DAT_028cc570)(local_30,local_38,local_68,local_78);
          _objc_retainAutoreleasedReturnValue();
          local_58 = 1;
          local_28 = uVar7;
          _objc_storeStrong(&local_78);
          _objc_storeStrong(&local_68,0);
        }
        _objc_storeStrong(&local_60,0);
      }
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

