// FUN_006bd260 @ 006bd260

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_006bd260(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  bool bVar1;
  uint uVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  cfstringStruct *local_250;
  cfstringStruct *local_238;
  double local_1f8;
  double local_1e8;
  double local_1e0;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  double local_130;
  undefined8 local_128;
  cfstringStruct *local_100;
  double local_f8;
  undefined8 local_f0;
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  undefined4 local_48;
  ulong local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  if (((local_30 == (cfstringStruct *)0x0) ||
      (pcVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isHidden_026ca768),
      ((ulong)pcVar3 & 1) != 0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_alpha_026ca4d8), param_1 <= DAT_02323d38)
     ) {
    local_21 = 0;
    local_48 = 1;
  }
  else {
    pcVar3 = local_30;
    dVar6 = DAT_02323d38;
    FUN_006bca28(local_30,local_38);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
      uVar2 = (uint)pcVar3;
      local_70 = param_1;
      dStack_68 = dVar6;
      local_60 = param_3;
      dStack_58 = param_4;
      _CGRectIsEmpty();
      dVar7 = param_3;
      dVar8 = param_4;
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
        dVar7 = dVar6;
        dVar8 = param_1;
        local_70 = param_1;
        dStack_68 = dVar6;
        local_60 = param_3;
        dStack_58 = param_4;
      }
      local_b8 = local_60;
      local_c0 = dStack_58;
      if ((local_60 < 96.0) || (dStack_58 < 96.0)) {
        local_21 = 0;
        local_48 = 1;
      }
      else {
        if (local_60 <= dStack_58) {
          local_e8 = local_60;
          local_f0 = 0x3ff0000000000000;
          if (1.0 <= local_60) {
            local_1f8 = local_60;
          }
          else {
            local_1f8 = 1.0;
          }
          local_f8 = local_1f8;
          local_1e8 = dStack_58 / local_1f8;
        }
        else {
          local_d0 = dStack_58;
          local_d8 = 0x3ff0000000000000;
          if (1.0 <= dStack_58) {
            local_1e0 = dStack_58;
          }
          else {
            local_1e0 = 1.0;
          }
          local_e0 = local_1e0;
          local_1e8 = local_60 / local_1e0;
        }
        local_c8 = local_1e8;
        uVar5 = 0x3ff3333333333333;
        if (1.2 < local_1e8) {
          local_21 = 0;
          local_48 = 1;
        }
        else {
          pcVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_100 = pcVar3;
          if (((pcVar3 == (cfstringStruct *)0x0) ||
              ((*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_bounds_026ca548),
              local_130 = local_1e8, local_128 = uVar5, dVar7 <= 0.0)) ||
             ((dVar8 <= 0.0 || ((local_b8 < dVar7 * 0.95 || (local_c0 < dVar8 * 0.95)))))) {
            pcVar3 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_accessibilityLabel_0269e1c8);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = false;
            local_238 = pcVar3;
            if (pcVar3 == (cfstringStruct *)0x0) {
              local_140 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_accessibilityLabel_0269e1c8);
              _objc_retainAutoreleasedReturnValue();
              bVar1 = true;
              local_250 = local_140;
              if (local_140 == (cfstringStruct *)0x0) {
                local_250 = &cf___;
              }
              local_238 = local_250;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_138 = local_238;
            if (bVar1) {
              (*(code *)PTR__objc_release_02578630)(local_140);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            pcVar3 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_containsString__0269d0b0,&cf_N_x);
            bVar1 = true;
            if (((ulong)pcVar3 & 1) == 0) {
              pcVar3 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_rangeOfString_options__0269d118,&cf_qrcode,1);
              bVar1 = pcVar3 != (cfstringStruct *)0x7fffffffffffffff;
            }
            if (bVar1) {
              local_21 = 1;
            }
            else {
              uVar4 = local_38;
              FUN_006bf7f8();
              if ((uVar4 & 1) == 0) {
                local_21 = 0;
              }
              else {
                local_21 = 1;
              }
            }
            local_48 = 1;
            _objc_storeStrong(&local_138,0);
          }
          else {
            local_21 = 0;
            local_48 = 1;
          }
          _objc_storeStrong(&local_100,0);
        }
      }
    }
    else {
      local_21 = 0;
      local_48 = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

