// FUN_0066f3fc @ 0066f3fc

void FUN_0066f3fc(double param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_270;
  uint local_21c;
  cfstringStruct *local_1e0;
  uint local_1b0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8 [2];
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  byte local_7c;
  byte local_7b;
  undefined1 local_7a;
  byte local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_40;
  byte local_29;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  pcVar3 = local_28;
  local_29 = param_3;
  if (local_28 != (cfstringStruct *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar3 & 1) != 0) {
      pcVar3 = local_28;
      FUN_00655d64(local_28,"m_messageLabel");
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_28;
      local_48 = pcVar3;
      FUN_00655d64(local_28,"m_greenLabel");
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_48;
      local_50 = pcVar4;
      if (local_48 == (cfstringStruct *)0x0) {
LAB_0066f56c:
        local_40 = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((ulong)pcVar3 & 1) == 0) goto LAB_0066f56c;
        pcVar3 = local_28;
        FUN_0066e298();
        _objc_retainAutoreleasedReturnValue();
        local_58 = pcVar3;
        FUN_0066ce54(&cf____MR,local_28,pcVar3);
        FUN_0066b2cc(local_58);
        pcVar3 = local_58;
        FUN_0066af54();
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_50;
        local_60 = pcVar3;
        FUN_0066cee4();
        _objc_retainAutoreleasedReturnValue();
        local_68 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
        if (((pcVar4 == (cfstringStruct *)0x0) ||
            (pcVar3 = local_68,
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,local_60)
            , ((ulong)pcVar3 & 1) == 0)) ||
           (pcVar4 = local_68, FUN_00666cb0(), pcVar3 = local_50, ((ulong)pcVar4 & 1) == 0)) {
LAB_0066f888:
          pcVar3 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
          if (pcVar3 == (cfstringStruct *)0x0) {
            pcVar3 = local_58;
            FUN_00664010();
            _objc_retainAutoreleasedReturnValue();
            local_78 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
            if ((pcVar3 != (cfstringStruct *)0x0) &&
               (pcVar4 = local_78, FUN_006620c0(pcVar3), ((ulong)pcVar4 & 1) == 0)) {
              FUN_00663f60(local_58);
            }
            _objc_storeStrong(&local_78,0);
          }
        }
        else {
          puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          pcVar4 = local_50;
          if (((ulong)pcVar3 & 1) == 0) goto LAB_0066f888;
          (*(code *)PTR__objc_retain_02578638)();
          local_70 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = false;
          if (pcVar4 == local_28) {
            pcVar3 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isHidden_026ca768);
            bVar1 = false;
            if (((ulong)pcVar3 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_alpha_026ca4d8);
              bVar1 = DAT_02323d38 < param_1;
            }
          }
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          if (bVar1) {
            FUN_0066426c(local_58,local_68,&cf_apply_native_red);
          }
          _objc_storeStrong(&local_70,0);
        }
        pcVar3 = local_58;
        FUN_00662c28();
        local_79 = (byte)pcVar3;
        pcVar3 = local_58;
        FUN_00662c98();
        local_7a = SUB81(pcVar3,0);
        local_1b0 = 1;
        if (((local_29 & 1) == 0) && (local_1b0 = 1, (local_79 & 1) == 0)) {
          local_1b0 = (uint)pcVar3 & 0xff;
        }
        local_7b = (byte)local_1b0 & 1;
        if ((local_1b0 & 1) != 0) {
          pcVar3 = local_58;
          FUN_00662d08();
          _objc_retainAutoreleasedReturnValue();
          FUN_00662ff8();
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
        local_7c = 0;
        FUN_0066d7d0(local_28,0);
        FUN_0066c488(local_28,1);
        pcVar3 = local_58;
        FUN_00662d08();
        _objc_retainAutoreleasedReturnValue();
        local_88 = pcVar3;
        FUN_00663124(pcVar3,local_58);
        _objc_retainAutoreleasedReturnValue();
        local_1e0 = pcVar3;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_1e0 = &cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = local_1e0;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar4 = local_90;
        FUN_00663740();
        pcVar3 = local_50;
        if (((ulong)pcVar4 & 1) == 0) {
          FUN_0066d970(local_28);
          FUN_0066ce54(&cf______g_,local_28,local_58);
        }
        else {
          puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          pcVar4 = local_50;
          if (((ulong)pcVar3 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_98 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_28;
            local_21c = 0;
            if (pcVar4 != local_28) {
              puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
              local_21c = (uint)pcVar3;
            }
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            if ((local_21c & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_98);
            }
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setHidden__026ca970,0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x3ff0000000000000,local_98,PTR_s_setAlpha__026ca860);
            pcVar3 = local_50;
            FUN_0066cee4();
            _objc_retainAutoreleasedReturnValue();
            local_a8[0] = pcVar3;
            FUN_00665300();
            if (((ulong)pcVar3 & 1) != 0) {
              pcVar3 = local_a8[0];
              FUN_006717b4(local_a8[0],0);
              _objc_retainAutoreleasedReturnValue();
              local_270 = pcVar3;
              if (pcVar3 == (cfstringStruct *)0x0) {
                local_270 = &cf___;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = local_270;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              pcVar3 = local_b0;
              FUN_00665300();
              if ((((ulong)pcVar3 & 1) != 0) ||
                 (pcVar3 = local_b0, FUN_006638c8(), ((ulong)pcVar3 & 1) != 0)) {
                _objc_storeStrong(&local_b0,&cf___);
              }
              FUN_0066e134(local_50,local_b0);
              _objc_storeStrong(local_a8,local_b0);
              _objc_storeStrong(&local_b0,0);
            }
            pcVar3 = local_90;
            FUN_00663614();
            if ((((ulong)pcVar3 & 1) == 0) ||
               (pcVar3 = local_a8[0], FUN_006638c8(), ((ulong)pcVar3 & 1) == 0)) {
              pcVar3 = local_90;
              FUN_00663614();
              if ((((ulong)pcVar3 & 1) != 0) &&
                 (pcVar3 = local_60, FUN_006638c8(), ((ulong)pcVar3 & 1) != 0)) {
                FUN_0066c02c(local_58);
              }
            }
            else {
              FUN_0066e134(local_50,&cf___);
              _objc_storeStrong(local_a8,&cf___);
              FUN_0066c02c(local_58);
              FUN_00663f60(local_58);
            }
            pcVar4 = local_50;
            FUN_0066cee4();
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_a8[0];
            local_a8[0] = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            pcVar3 = local_a8[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_a8[0],PTR_s_length_0269cca0);
            if (pcVar3 == (cfstringStruct *)0x0) {
              pcVar3 = local_58;
              FUN_00664010();
              _objc_retainAutoreleasedReturnValue();
              local_b8 = pcVar3;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
              if (pcVar3 != (cfstringStruct *)0x0) {
                FUN_00663f60(pcVar3,local_58);
              }
              _objc_storeStrong(&local_b8,0);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_bringSubviewToFront__026ca550,local_98);
            _objc_storeStrong(local_a8);
            _objc_storeStrong(&local_98,0);
          }
          if ((local_7c & 1) != 0) {
            FUN_006653a8(&cf______gg);
          }
          FUN_0066ce54(&cf______g,local_28,local_58);
        }
        local_40 = 1;
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(&local_68,0);
        _objc_storeStrong(&local_60,0);
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
      goto LAB_00670278;
    }
  }
  local_40 = 1;
LAB_00670278:
  _objc_storeStrong(&local_28,0);
  return;
}

