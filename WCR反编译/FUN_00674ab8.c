// FUN_00674ab8 @ 00674ab8

void FUN_00674ab8(undefined8 param_1,byte param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint local_120;
  ulong local_88;
  ulong local_78;
  ulong local_68;
  ulong local_58;
  ulong local_38;
  undefined4 local_30;
  byte local_29;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_29 = param_2;
  if (local_28 == 0) {
    FUN_00657450(&cf__W_L);
    local_30 = 1;
  }
  else {
    uVar5 = local_28;
    FUN_0066cee4();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar5;
    FUN_00667bb8();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_28;
    FUN_0066e498();
    _objc_retainAutoreleasedReturnValue();
    FUN_00657450(&cf__W_L);
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_release_02578630)();
    uVar6 = local_28;
    if ((local_29 & 1) == 0) {
      bVar4 = false;
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
      uVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_eeN);
      local_120 = 1;
      if ((uVar6 & 1) == 0) {
        uVar6 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_eN);
        local_120 = 1;
        if ((uVar6 & 1) == 0) {
          uVar6 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf__);
          local_120 = 1;
          if ((uVar6 & 1) == 0) {
            uVar5 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf__);
            uVar6 = local_38;
            local_120 = 1;
            if ((uVar5 & 1) == 0) {
              FUN_006730c4();
              _objc_retainAutoreleasedReturnValue();
              bVar4 = true;
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isEqualToString__0269ccc8);
              local_120 = 1;
              local_58 = uVar5;
              if ((uVar6 & 1) == 0) {
                uVar6 = local_38;
                FUN_00667e44();
                local_120 = 1;
                if ((uVar6 & 1) == 0) {
                  uVar5 = local_38;
                  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf__);
                  uVar6 = local_38;
                  local_120 = 1;
                  if ((uVar5 & 1) == 0) {
                    FUN_00673008();
                    _objc_retainAutoreleasedReturnValue();
                    bVar3 = true;
                    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_hasPrefix__0269d320);
                    local_120 = 1;
                    local_68 = uVar5;
                    if ((uVar6 & 1) == 0) {
                      uVar5 = local_38;
                      FUN_00668388();
                      uVar6 = local_38;
                      local_120 = 1;
                      if ((uVar5 & 1) == 0) {
                        FUN_00672f4c();
                        _objc_retainAutoreleasedReturnValue();
                        bVar2 = true;
                        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isEqualToString__0269ccc8)
                        ;
                        uVar7 = local_38;
                        local_120 = 1;
                        local_78 = uVar5;
                        if ((uVar6 & 1) == 0) {
                          FUN_00672b5c();
                          _objc_retainAutoreleasedReturnValue();
                          bVar1 = true;
                          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_hasPrefix__0269d320);
                          local_120 = 1;
                          local_88 = uVar6;
                          if ((uVar7 & 1) == 0) {
                            uVar6 = local_38;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (local_38,PTR_s_isEqualToString__0269ccc8,&cf__);
                            local_120 = 1;
                            if ((uVar6 & 1) == 0) {
                              uVar6 = local_38;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (local_38,PTR_s_hasPrefix__0269d320,&cf__);
                              local_120 = (uint)uVar6;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      if (bVar3) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      if (bVar4) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      if ((local_120 & 1) == 0) {
        uVar6 = local_38;
        FUN_00667bb8();
        _objc_retainAutoreleasedReturnValue();
        FUN_00657450(&cf__W_L);
        (*(code *)PTR__objc_release_02578630)(uVar6);
      }
      else {
        FUN_0066e134(local_28,&cf___);
        FUN_006755c0(local_28,1);
        uVar6 = local_28;
        FUN_0066e498();
        _objc_retainAutoreleasedReturnValue();
        FUN_00657450(&cf__W_L);
        (*(code *)PTR__objc_release_02578630)(uVar6);
      }
      local_30 = 0;
    }
    else {
      FUN_00672d18();
      _objc_retainAutoreleasedReturnValue();
      FUN_00675450(uVar6);
      (*(code *)PTR__objc_release_02578630)();
      uVar6 = local_28;
      FUN_006730c4();
      _objc_retainAutoreleasedReturnValue();
      FUN_0066e134(uVar6);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      FUN_006755c0(local_28,0);
      uVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_sizeToFit_0269ec08);
      if ((uVar6 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sizeToFit_0269ec08);
      }
      uVar6 = local_28;
      FUN_0066e498();
      _objc_retainAutoreleasedReturnValue();
      FUN_00657450(&cf__W_L);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      local_30 = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

