// FUN_01569fa0 @ 01569fa0

byte FUN_01569fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  byte local_1ec;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  code *local_1b8;
  undefined *local_1b0;
  long local_1a8;
  long local_1a0;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  long local_178;
  long local_170;
  long local_168;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  long local_140;
  long local_138;
  long local_130;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  long local_a0;
  long local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  byte local_45;
  undefined4 local_44;
  long local_40;
  ulong local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  if ((local_30 == 0) ||
     (uVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    local_21 = 0;
    local_44 = 1;
  }
  else {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf___wcr_moments_);
    local_1ec = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDVoiceCall);
      local_1ec = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDVideoCall);
        local_1ec = (byte)uVar1;
      }
    }
    local_45 = local_1ec & 1;
    lVar2 = local_40;
    FUN_01558ffc();
    if ((lVar2 == 1) && ((local_45 & 1) != 0)) {
      lVar2 = local_40;
      FUN_01570cf0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_40;
      local_50 = lVar2;
      FUN_01570f24();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_40;
      local_58 = lVar3;
      FUN_015710f8();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_38;
      local_60 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_isEqualToString__0269ccc8,&cf___wcr_moments_permissions__);
      lVar2 = local_58;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDVoiceCall);
        lVar2 = local_30;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_isEqualToString__0269ccc8,_WCRefineProfileCardActionIDVideoCall)
          ;
          lVar2 = local_30;
          if ((uVar1 & 1) == 0) {
            uVar1 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_isEqualToString__0269ccc8,&cf___wcr_moments_forward__);
            lVar2 = local_58;
            if ((uVar1 & 1) == 0) {
              uVar1 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_isEqualToString__0269ccc8,&cf___wcr_moments_delete__);
              lVar2 = local_58;
              if ((uVar1 & 1) == 0) {
                uVar1 = local_38;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_38,PTR_s_isEqualToString__0269ccc8,
                           &cf___wcr_moments_fake_engagement__);
                lVar2 = local_58;
                if ((uVar1 & 1) == 0) {
                  uVar1 = local_38;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_38,PTR_s_isEqualToString__0269ccc8,&cf___wcr_moments_complain__);
                  lVar2 = local_58;
                  if ((uVar1 & 1) == 0) {
                    local_21 = 0;
                    local_44 = 1;
                  }
                  else {
                    local_1c8 = PTR___NSConcreteStackBlock_02578660;
                    local_1c0 = 0xc2000000;
                    local_1bc = 0;
                    local_1b8 = FUN_01572724;
                    local_1b0 = &DAT_0257a7a0;
                    (*(code *)PTR__objc_retain_02578638)();
                    lVar3 = local_50;
                    local_1a8 = lVar2;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_1a0 = lVar3;
                    FUN_0156b06c(&local_1c8);
                    local_21 = 1;
                    local_44 = 1;
                    _objc_storeStrong(&local_1a0);
                    _objc_storeStrong(&local_1a8,0);
                  }
                }
                else {
                  local_198 = PTR___NSConcreteStackBlock_02578660;
                  local_190 = 0xc2000000;
                  local_18c = 0;
                  local_188 = FUN_01572250;
                  local_180 = &DAT_025839b0;
                  (*(code *)PTR__objc_retain_02578638)();
                  lVar3 = local_60;
                  local_178 = lVar2;
                  (*(code *)PTR__objc_retain_02578638)();
                  lVar2 = local_50;
                  local_170 = lVar3;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_168 = lVar2;
                  FUN_0156b06c(&local_198);
                  local_21 = 1;
                  local_44 = 1;
                  _objc_storeStrong(&local_168);
                  _objc_storeStrong(&local_170,0);
                  _objc_storeStrong(&local_178,0);
                }
              }
              else {
                local_160 = PTR___NSConcreteStackBlock_02578660;
                local_158 = 0xc2000000;
                local_154 = 0;
                local_150 = FUN_01571eac;
                local_148 = &DAT_025839b0;
                (*(code *)PTR__objc_retain_02578638)();
                lVar3 = local_60;
                local_140 = lVar2;
                (*(code *)PTR__objc_retain_02578638)();
                lVar2 = local_50;
                local_138 = lVar3;
                (*(code *)PTR__objc_retain_02578638)();
                local_130 = lVar2;
                FUN_0156b06c(&local_160);
                local_21 = 1;
                local_44 = 1;
                _objc_storeStrong(&local_130);
                _objc_storeStrong(&local_138,0);
                _objc_storeStrong(&local_140,0);
              }
            }
            else {
              local_128 = PTR___NSConcreteStackBlock_02578660;
              local_120 = 0xc2000000;
              local_11c = 0;
              local_118 = FUN_015718dc;
              local_110 = &DAT_025839b0;
              (*(code *)PTR__objc_retain_02578638)();
              lVar3 = local_60;
              local_108 = lVar2;
              (*(code *)PTR__objc_retain_02578638)();
              lVar2 = local_50;
              local_100 = lVar3;
              (*(code *)PTR__objc_retain_02578638)();
              local_f8 = lVar2;
              FUN_0156b06c(&local_128);
              local_21 = 1;
              local_44 = 1;
              _objc_storeStrong(&local_f8);
              _objc_storeStrong(&local_100,0);
              _objc_storeStrong(&local_108,0);
            }
          }
          else {
            local_f0 = PTR___NSConcreteStackBlock_02578660;
            local_e8 = 0xc2000000;
            local_e4 = 0;
            local_e0 = FUN_015717e4;
            local_d8 = &DAT_0257a7a0;
            (*(code *)PTR__objc_retain_02578638)();
            lVar3 = local_40;
            local_d0 = lVar2;
            (*(code *)PTR__objc_retain_02578638)();
            local_c8 = lVar3;
            FUN_0156b06c(&local_f0);
            local_21 = 1;
            local_44 = 1;
            _objc_storeStrong(&local_c8);
            _objc_storeStrong(&local_d0,0);
          }
        }
        else {
          local_c0 = PTR___NSConcreteStackBlock_02578660;
          local_b8 = 0xc2000000;
          local_b4 = 0;
          local_b0 = FUN_015716ec;
          local_a8 = &DAT_0257a7a0;
          (*(code *)PTR__objc_retain_02578638)();
          lVar3 = local_40;
          local_a0 = lVar2;
          (*(code *)PTR__objc_retain_02578638)();
          local_98 = lVar3;
          FUN_0156b06c(&local_c0);
          local_21 = 1;
          local_44 = 1;
          _objc_storeStrong(&local_98);
          _objc_storeStrong(&local_a0,0);
        }
      }
      else {
        local_90 = PTR___NSConcreteStackBlock_02578660;
        local_88 = 0xc2000000;
        local_84 = 0;
        local_80 = FUN_015712ac;
        local_78 = &DAT_0257a7a0;
        (*(code *)PTR__objc_retain_02578638)();
        lVar3 = local_50;
        local_70 = lVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = lVar3;
        FUN_0156b06c(&local_90);
        local_21 = 1;
        local_44 = 1;
        _objc_storeStrong(&local_68);
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
    }
    else {
      local_21 = 0;
      local_44 = 1;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

