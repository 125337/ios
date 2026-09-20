// FUN_007e1920 @ 007e1920

/* WARNING: Removing unreachable block (ram,0x007e1ccc) */

void FUN_007e1920(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_50;
  byte local_41;
  ulong local_40;
  ulong local_38 [3];
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((DAT_028cce6c & 1) == 0) {
    if ((DAT_028cce48 & 1) == 0) {
      local_1c = 1;
    }
    else {
      uVar2 = local_18;
      FUN_007cdf10();
      if ((uVar2 & 1) == 0) {
        FUN_007d3860();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_18;
        local_18 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      if (local_18 == 0) {
        local_1c = 1;
      }
      else {
        uVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        FUN_007d2e10();
        _objc_retainAutoreleasedReturnValue();
        local_38[0] = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_38[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_length_0269cca0);
        if (uVar2 == 0) {
          local_1c = 1;
        }
        else {
          uVar2 = DAT_028cccd0;
          FUN_007cca08(DAT_028cccd0,local_38[0]);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_40 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
          if (((uVar2 & 1) == 0) ||
             (uVar2 = local_40,
             (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0), uVar2 == 0)) {
            local_1c = 1;
          }
          else {
            DAT_028cce6c = 1;
            local_41 = 0;
            uVar2 = local_18;
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_50 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar2);
            if (local_50 != 0) {
              FUN_007e1ddc(local_50,local_40);
            }
            _objc_storeStrong(&local_50,0);
            local_1c = 0;
            DAT_028cce6c = 0;
            if ((local_41 & 1) != 0) {
              _objc_exception_rethrow();
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x7e1cbc);
              (*pcVar1)();
            }
            local_1c = 0;
          }
          _objc_storeStrong(&local_40,0);
        }
        _objc_storeStrong(local_38,0);
      }
    }
  }
  else {
    local_1c = 1;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

