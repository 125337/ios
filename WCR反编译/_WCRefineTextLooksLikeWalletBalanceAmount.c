// _WCRefineTextLooksLikeWalletBalanceAmount @ 00f14338

byte _WCRefineTextLooksLikeWalletBalanceAmount(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_a8;
  ulong local_a0 [3];
  ulong local_88;
  ulong local_80;
  undefined4 local_74;
  ulong local_70;
  bool local_61;
  ulong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_70 = 0;
  _objc_storeStrong(&local_70,param_1);
  uVar2 = local_70;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_61 = false;
    local_74 = 1;
  }
  else {
    uVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_containsString__0269d0b0,&cf_6evs);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_containsString__0269d0b0,&cf__);
      if (((uVar2 & 1) == 0) &&
         (uVar2 = local_70,
         (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_containsString__0269d0b0,&cf__),
         (uVar2 & 1) == 0)) {
        FUN_00f14718();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_70;
        uVar3 = local_70;
        local_80 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
        local_38 = 0;
        local_30 = 0;
        local_a0[1] = 0;
        local_a0[2] = uVar3;
        local_40 = uVar3;
        local_28 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_firstMatchInString_options_range_0269ef48,uVar4,0,0,uVar3);
        _objc_retainAutoreleasedReturnValue();
        local_88 = uVar2;
        if (uVar2 == 0) {
          local_61 = false;
          local_74 = 1;
        }
        else {
          FUN_00f1478c();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_70;
          uVar3 = local_70;
          local_a0[0] = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
          local_58 = 0;
          local_50 = 0;
          local_60 = uVar3;
          local_48 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_firstMatchInString_options_range_0269ef48,uVar4,0,0,uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_70;
          local_a8 = uVar2;
          if (uVar2 == 0) {
            local_61 = false;
          }
          else {
            puVar1 = PTR_s_range_0269ef50;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_substringWithRange__0269d138,uVar2,puVar1);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar4);
            local_61 = 9 < (long)uVar2;
          }
          local_74 = 1;
          _objc_storeStrong(&local_a8);
          _objc_storeStrong(local_a0,0);
        }
        _objc_storeStrong(&local_88);
        _objc_storeStrong(&local_80,0);
      }
      else {
        local_61 = true;
        local_74 = 1;
      }
    }
    else {
      local_61 = false;
      local_74 = 1;
    }
  }
  _objc_storeStrong(&local_70,0);
  return local_61 & 1;
}

