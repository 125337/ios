// FUN_0059cce0 @ 0059cce0

byte FUN_0059cce0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong local_e8;
  undefined *local_e0;
  long local_d8;
  ulong local_d0;
  undefined *local_c8;
  undefined *local_c0;
  ulong local_b8;
  undefined *local_b0;
  ulong local_a8;
  ulong local_a0;
  cfstringStruct *local_80;
  undefined4 local_74;
  ulong local_70;
  byte local_61;
  long local_60;
  undefined *local_58;
  undefined *local_50;
  long local_48;
  long local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_70 = 0;
  _objc_storeStrong(&local_70,param_1);
  if (local_70 == 0) {
    local_61 = 0;
    local_74 = 1;
  }
  else {
    pcVar1 = &cf_IsRecordMsg;
    _NSSelectorFromString();
    uVar2 = local_70;
    local_80 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_respondsToSelector__026ca818,pcVar1);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,local_80), (uVar2 & 1) == 0
       )) {
      uVar2 = local_70;
      FUN_0059d260(local_70,&cf_m_uiMessageType);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_a0 = uVar3;
      if (uVar3 == 0x31) {
        uVar2 = local_70;
        FUN_0059d260(0,local_70,&cf_m_nsContent);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        FUN_005a0828();
        _objc_retainAutoreleasedReturnValue();
        local_a8 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
        if (uVar2 == 0) {
          local_61 = 0;
          local_74 = 1;
        }
        else {
          uVar3 = local_a8;
          puVar4 = PTR_s_rangeOfString__0269d838;
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_rangeOfString__0269d838,&cf_<type>);
          uVar2 = local_a8;
          local_b8 = uVar3;
          local_b0 = puVar4;
          if (uVar3 == 0x7fffffffffffffff) {
            local_61 = 0;
            local_74 = 1;
          }
          else {
            puVar4 = puVar4 + uVar3;
            uVar3 = local_a8;
            local_c0 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
            local_d8 = uVar3 - (long)local_c0;
            puVar5 = PTR_s_rangeOfString_options_range__0269d130;
            local_e0 = puVar4;
            local_40 = local_d8;
            local_38 = puVar4;
            local_30 = puVar4;
            local_28 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_rangeOfString_options_range__0269d130,&cf_<_type>,0,puVar4,
                       local_d8);
            local_d0 = uVar2;
            local_c8 = puVar5;
            if (uVar2 == 0x7fffffffffffffff) {
              local_61 = 0;
              local_74 = 1;
            }
            else {
              local_60 = uVar2 - (long)local_c0;
              local_58 = local_c0;
              local_50 = local_c0;
              uVar2 = local_a8;
              local_48 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_a8,PTR_s_substringWithRange__0269d138,local_c0,local_60);
              _objc_retainAutoreleasedReturnValue();
              local_e8 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_integerValue_026ca750);
              local_61 = uVar2 == 0x13;
              local_74 = 1;
              _objc_storeStrong(&local_e8,0);
            }
          }
        }
        _objc_storeStrong(&local_a8,0);
      }
      else {
        local_61 = 0;
        local_74 = 1;
      }
    }
    else {
      local_61 = 1;
      local_74 = 1;
    }
  }
  _objc_storeStrong(&local_70,0);
  return local_61 & 1;
}

