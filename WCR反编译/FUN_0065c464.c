// FUN_0065c464 @ 0065c464

byte FUN_0065c464(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  undefined *local_68;
  ulong local_60;
  ulong local_58 [3];
  undefined4 local_3c;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  if (local_30 == 0) {
    local_21 = 0;
    local_3c = 1;
  }
  else {
    uVar1 = local_30;
    FUN_0065c1d8(local_30,local_38);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_30;
      FUN_00655fa0(local_30,PTR_s_referingMessageWrap_0269d110);
      _objc_retainAutoreleasedReturnValue();
      local_58[0] = uVar1;
      if (uVar1 == 0) {
        uVar2 = local_30;
        FUN_00655d64(local_30,"_referingMessageWrap");
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_58[0];
        local_58[0] = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      if ((local_58[0] == 0) || (uVar1 = local_58[0], FUN_0065c1d8(local_58[0],0), (uVar1 & 1) == 0)
         ) {
        uVar1 = local_30;
        FUN_0065ce3c();
        _objc_retainAutoreleasedReturnValue();
        local_60 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
        if (uVar1 == 0) {
          local_21 = 0;
          local_3c = 1;
        }
        else {
          uVar1 = local_60;
          puVar3 = PTR_s_rangeOfString_options__0269d118;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_rangeOfString_options__0269d118,&cf_<refermsg,1);
          local_70 = uVar1;
          local_68 = puVar3;
          if (uVar1 + 0x8000000000000001 == 0) {
            local_21 = 0;
            local_3c = 1;
          }
          else {
            uVar2 = local_60;
            FUN_0065d014(uVar1 + 0x8000000000000001);
            _objc_retainAutoreleasedReturnValue();
            local_78 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
            if (uVar2 == 0) {
              local_21 = 0;
              local_3c = 1;
            }
            else {
              uVar1 = local_78;
              FUN_0065d2cc(local_78,&cf_fromusr);
              _objc_retainAutoreleasedReturnValue();
              local_80 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
              if (uVar1 == 0) {
                uVar2 = local_78;
                FUN_0065d2cc(local_78,&cf_fromUsr);
                _objc_retainAutoreleasedReturnValue();
                uVar1 = local_80;
                local_80 = uVar2;
                (*(code *)PTR__objc_release_02578630)();
              }
              FUN_0065d978();
              _objc_retainAutoreleasedReturnValue();
              local_88 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
              if ((uVar1 == 0) ||
                 (uVar1 = local_80,
                 (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0), uVar1 == 0))
              {
                local_21 = 0;
              }
              else {
                uVar1 = local_80;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_80,PTR_s_isEqualToString__0269ccc8,local_88);
                local_21 = (byte)uVar1 & 1;
              }
              local_3c = 1;
              _objc_storeStrong(&local_88);
              _objc_storeStrong(&local_80,0);
            }
            _objc_storeStrong(&local_78,0);
          }
        }
        _objc_storeStrong(&local_60,0);
      }
      else {
        local_21 = 1;
        local_3c = 1;
      }
      _objc_storeStrong(local_58,0);
    }
    else {
      local_21 = 0;
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

