// FUN_0010d0cc @ 0010d0cc

void FUN_0010d0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  uint local_130;
  ulong local_60;
  ulong local_58;
  int local_50;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_34 = 1;
  }
  else if ((DAT_028c85a8 & 1) == 0) {
    local_34 = 1;
  }
  else {
    uVar1 = local_30;
    FUN_0010d7dc(local_30,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    FUN_0010dc1c();
    if ((uVar1 & 1) == 0) {
      local_34 = 1;
    }
    else {
      local_50 = 0;
      local_58 = 0;
      local_60 = 0;
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_valueForKey__0269d128,&cf_m_uiMessageType);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_50 = (int)uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar2 = local_30;
      FUN_0010dca0(local_30,&cf_m_nsContent);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_58;
      local_58 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar2 = local_30;
      FUN_0010dca0(local_30,&cf_m_nsPushContent);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_60;
      local_60 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if (uVar1 == 0) {
        uVar2 = local_30;
        FUN_0010dca0(local_30,&cf_m_nsLastDisplayContent);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_60;
        local_60 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_uiCreateTime)
      ;
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (((local_50 == 10000) || (local_50 == 0x2712)) || (local_50 == 10000)) {
        if ((int)uVar2 == 0) {
          puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        else {
          param_1 = NEON_ucvtf(uVar2 & 0xffffffff);
        }
        uVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        if (uVar1 != 0) {
          FUN_0010e018(uVar1,param_1,local_40,local_58,local_60);
        }
        uVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_containsString__0269d0b0,&cf_sysmsgtemplate);
        local_130 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsString__0269d0b0,&cf_<link);
          local_130 = 1;
          if ((uVar1 & 1) == 0) {
            uVar1 = local_58;
            FUN_0010ec58();
            local_130 = 1;
            if ((uVar1 & 1) == 0) {
              uVar1 = local_58;
              FUN_0010eda8();
              local_130 = (uint)uVar1;
            }
          }
        }
        if ((((local_130 & 1) == 0) &&
            (uVar1 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0)
            , uVar1 != 0)) &&
           (uVar1 = local_60,
           (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,local_58),
           (uVar1 & 1) == 0)) {
          FUN_0010e018(param_1,local_40,local_60,local_60);
        }
        local_34 = 0;
      }
      else {
        local_34 = 1;
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

