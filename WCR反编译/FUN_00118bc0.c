// FUN_00118bc0 @ 00118bc0

void FUN_00118bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  undefined8 uVar5;
  cfstringStruct *local_270;
  cfstringStruct *local_250;
  cfstringStruct *local_230;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_160;
  cfstringStruct *local_150;
  undefined8 local_f0;
  byte local_e1;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined8 local_c8;
  cfstringStruct *local_c0;
  long local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined4 local_58;
  undefined8 local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_5);
  pcVar1 = local_28;
  local_48 = param_1;
  FUN_00119e5c();
  if (((ulong)pcVar1 & 1) == 0) {
    local_58 = 1;
  }
  else {
    FUN_0010ef9c();
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    if (((pcVar1 == (cfstringStruct *)0x0) ||
        (pcVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
        pcVar1 == (cfstringStruct *)0x0)) ||
       (pcVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_60),
       ((ulong)pcVar1 & 1) == 0)) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        if (local_38 == (cfstringStruct *)0x0) {
          local_160 = &cf___;
        }
        else {
          local_160 = local_38;
        }
        local_150 = local_160;
      }
      else {
        local_150 = local_30;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_150;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_leave______);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar2;
      FUN_00119f10(0x4020000000000000);
      if (((ulong)puVar2 & 1) == 0) {
        local_58 = 1;
      }
      else {
        FUN_0011a5e8(local_28,&cf_leave);
        pcVar1 = local_38;
        FUN_0010ee50();
        _objc_retainAutoreleasedReturnValue();
        local_78 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
        if ((pcVar1 == (cfstringStruct *)0x0) ||
           (pcVar1 = local_78,
           (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,local_30),
           ((ulong)pcVar1 & 1) != 0)) {
          pcVar3 = local_30;
          FUN_00116ae8(local_30,local_28);
          _objc_retainAutoreleasedReturnValue();
          pcVar1 = local_78;
          local_78 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
        pcVar1 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
        if ((pcVar1 == (cfstringStruct *)0x0) ||
           (pcVar1 = local_78,
           (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,local_30),
           ((ulong)pcVar1 & 1) != 0)) {
          pcVar1 = local_28;
          FUN_001181e8(local_28,local_30);
          _objc_retainAutoreleasedReturnValue();
          local_80 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
          if (pcVar1 != (cfstringStruct *)0x0) {
            _objc_storeStrong(pcVar1,&local_78,local_80);
          }
          _objc_storeStrong(&local_80,0);
        }
        pcVar1 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
        if (pcVar1 == (cfstringStruct *)0x0) {
          if (local_30 == (cfstringStruct *)0x0) {
            local_1d0 = &cf___;
          }
          else {
            local_1d0 = local_30;
          }
          _objc_storeStrong(&local_78,local_1d0);
        }
        FUN_001178a8(local_28,local_30,local_78);
        local_91 = 0;
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_1e8 = &cf___;
        }
        else {
          local_1e8 = local_40;
          FUN_00116ae8(pcVar1,local_40,local_28);
          _objc_retainAutoreleasedReturnValue();
          local_91 = 1;
          local_90 = local_1e8;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_88 = local_1e8;
        if ((local_91 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_90);
        }
        pcVar1 = local_28;
        FUN_0011a92c();
        _objc_retainAutoreleasedReturnValue();
        local_a0 = pcVar1;
        FUN_0011ab98(local_48);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_30;
        local_a8 = pcVar1;
        FUN_0011adc0(local_30,local_78,local_88,local_28,local_a0,pcVar1);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = pcVar3;
        FUN_0011ccb8(local_48,local_28,pcVar3);
        pcVar1 = local_28;
        FUN_0011cea8();
        if (((ulong)pcVar1 & 1) == 0) {
          local_58 = 1;
        }
        else {
          if ((DAT_028c85c9 & 1) != 0) {
            lVar4 = DAT_028c8520;
            FUN_0011cff8(DAT_028c8520,local_30,local_78,local_88,local_28,local_a0,local_a8,&cf___);
            _objc_retainAutoreleasedReturnValue();
            local_b8 = lVar4;
            (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
            if (lVar4 != 0) {
              FUN_0011e168(lVar4,local_b8,local_28);
            }
            _objc_storeStrong(&local_b8,0);
          }
          if ((DAT_028c85ca & 1) != 0) {
            pcVar1 = DAT_028c8528;
            (*(code *)PTR__objc_msgSend_02578628)(DAT_028c8528,PTR_s_length_0269cca0);
            if (pcVar1 == (cfstringStruct *)0x0) {
              local_230 = &cf_filehelper;
            }
            else {
              local_230 = DAT_028c8528;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_c0 = local_230;
            uVar5 = DAT_028c8530;
            FUN_0011e3a8(DAT_028c8530,local_30,local_78,local_88,local_28,local_a0,local_a8);
            _objc_retainAutoreleasedReturnValue();
            local_c8 = uVar5;
            if (DAT_028c85d0 + -1 == 0) {
              if (local_28 == (cfstringStruct *)0x0) {
                local_250 = &cf___;
              }
              else {
                local_250 = local_28;
              }
              FUN_0011eb28();
              _objc_retainAutoreleasedReturnValue();
              local_e1 = 0;
              local_d0 = local_250;
              (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_length_0269cca0);
              if (local_250 == (cfstringStruct *)0x0) {
                local_270 = &cf___;
              }
              else {
                local_270 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf_WCRefineRedEnvelopSession___session___);
                _objc_retainAutoreleasedReturnValue();
                local_e1 = 1;
                local_e0 = local_270;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_d8 = local_270;
              if ((local_e1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_e0);
              }
              uVar5 = local_c8;
              _WCRefineRenderSystemTipMessage(local_c8,&cf_pQlegn_J,&cf_800080,local_d8);
              _objc_retainAutoreleasedReturnValue();
              local_f0 = uVar5;
              _WCRefineInsertLocalSystemTip(local_c0,uVar5);
              _objc_storeStrong(&local_f0);
              _objc_storeStrong(&local_d8,0);
              _objc_storeStrong(&local_d0,0);
            }
            else {
              FUN_0011e168(DAT_028c85d0 + -1,uVar5,local_c0);
            }
            _objc_storeStrong(&local_c8);
            _objc_storeStrong(&local_c0,0);
          }
          local_58 = 0;
        }
        _objc_storeStrong(&local_b0);
        _objc_storeStrong(&local_a8,0);
        _objc_storeStrong(&local_a0,0);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(&local_78,0);
      }
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
    }
    else {
      local_58 = 1;
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

