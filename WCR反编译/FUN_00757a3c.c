// FUN_00757a3c @ 00757a3c

byte FUN_00757a3c(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double local_4b0;
  cfstringStruct *local_380;
  cfstringStruct *local_2a0;
  undefined *local_1f8;
  double local_1f0;
  undefined8 uStack_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178 [5];
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  cfstringStruct *local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60 [4];
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_5);
  if (local_30 == (cfstringStruct *)0x0) {
    local_21 = 0;
    local_34 = 1;
  }
  else {
    local_40 = (cfstringStruct *)0x0;
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_username_026a2238);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      FUN_00743f78();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      local_40 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    pcVar2 = local_40;
    FUN_00758c60();
    _objc_retainAutoreleasedReturnValue();
    local_60[0] = pcVar2;
    if (pcVar2 != (cfstringStruct *)0x0) {
      _objc_setAssociatedObject(local_30,DAT_026f45d8,pcVar2,1);
    }
    local_71 = 0;
    bVar1 = local_60[0] == (cfstringStruct *)0x0;
    if (bVar1) {
      local_2a0 = local_30;
      _objc_getAssociatedObject(local_30,DAT_026f45d8);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_2a0;
    }
    else {
      local_2a0 = local_60[0];
    }
    local_71 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_2a0;
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if (local_68 == (cfstringStruct *)0x0) {
      local_21 = 0;
      local_34 = 1;
    }
    else {
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_senderName);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_00743f78();
      _objc_retainAutoreleasedReturnValue();
      local_80 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_groupName);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_00743f78();
      _objc_retainAutoreleasedReturnValue();
      local_88 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_00743f78();
      _objc_retainAutoreleasedReturnValue();
      local_90 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_88;
      FUN_007560d4(local_88,local_90);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar3 = local_90;
        FUN_00753b40();
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_88;
        local_88 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_00743f78();
      _objc_retainAutoreleasedReturnValue();
      local_98 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_nameLabel);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      local_a0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((((ulong)pcVar2 & 1) != 0) &&
         (pcVar2 = local_80, (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0),
         pcVar2 != (cfstringStruct *)0x0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setText__026caa88,local_80);
      }
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_valueForKey__0269d128,&cf_descriptionLabel);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      local_a8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)pcVar2 & 1) != 0) {
        local_b9 = 0;
        pcVar2 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_380 = &cf_Seg;
          dVar7 = param_2;
        }
        else {
          local_380 = local_98;
          FUN_00752b9c(pcVar2,local_98,10);
          _objc_retainAutoreleasedReturnValue();
          local_b9 = 1;
          dVar7 = param_2;
          local_b8 = local_380;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = local_380;
        if ((local_b9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_b8);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setText__026caa88,local_b0);
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setTextAlignment__026caa90,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setLineBreakMode__026ca988,4);
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_sizeToFit_0269ec08);
        pcVar2 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = false;
        dVar9 = param_1;
        param_2 = dVar7;
        dVar8 = param_3;
        dVar6 = param_4;
        local_c8 = pcVar2;
        if (pcVar2 != (cfstringStruct *)0x0) {
          dVar9 = param_3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_bounds_026ca548);
          bVar1 = 0.0 < dVar9;
          param_2 = dVar9;
          dVar8 = dVar7;
          dVar6 = param_1;
          local_e8 = param_1;
          local_e0 = dVar7;
          local_d8 = dVar9;
          local_d0 = param_4;
        }
        param_3 = dVar8;
        param_4 = dVar6;
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_frame_026ca640);
          dVar7 = param_2;
          local_108 = dVar9;
          dStack_100 = param_2;
          local_f8 = dVar8;
          dStack_f0 = dVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bounds_026ca548);
          local_108 = (dVar7 - local_f8) / 2.0;
          dStack_148 = dStack_100;
          dStack_138 = dStack_f0;
          local_140 = local_f8;
          param_2 = dStack_100;
          param_3 = local_f8;
          param_4 = dStack_f0;
          local_128 = dVar6;
          local_120 = dVar8;
          local_118 = dVar7;
          local_110 = dVar9;
          local_150 = local_108;
          (*(code *)PTR__objc_msgSend_02578628)(local_108,local_a8,PTR_s_setFrame__026ca960);
        }
        _objc_storeStrong(&local_c8);
        _objc_storeStrong(&local_b0,0);
      }
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_timeLabel);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      local_178[0] = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((((ulong)pcVar2 & 1) != 0) &&
         (pcVar2 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0),
         pcVar2 != (cfstringStruct *)0x0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_178[0],PTR_s_setText__026caa88,local_88);
        (*(code *)PTR__objc_msgSend_02578628)(local_178[0],PTR_s_setTextAlignment__026caa90,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_178[0],PTR_s_setLineBreakMode__026ca988,4);
        (*(code *)PTR__objc_msgSend_02578628)(local_178[0],PTR_s_setNumberOfLines__026ca9d8,2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_178[0],PTR_s_setAdjustsFontSizeToFitWidth__026ca850,1);
        dVar7 = DAT_02323c98;
        (*(code *)PTR__objc_msgSend_02578628)(local_178[0],PTR_s_setMinimumScaleFactor__026ca9d0);
        pcVar2 = local_178[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_178[0],PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = false;
        dVar9 = param_2;
        dVar8 = param_3;
        dVar6 = param_4;
        local_180 = pcVar2;
        if (pcVar2 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_bounds_026ca548);
          dVar9 = 40.0;
          bVar1 = 40.0 < param_3;
          dVar8 = param_2;
          dVar6 = dVar7;
          local_1a0 = dVar7;
          local_198 = param_2;
          local_190 = param_3;
          local_188 = param_4;
        }
        if (bVar1) {
          dVar7 = 16.0;
          local_1a8 = 16.0;
          (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_bounds_026ca548);
          uVar10 = 0x4000000000000000;
          local_1b0 = dVar8 - local_1a8 * 2.0;
          local_1d0 = dVar7;
          local_1c8 = dVar9;
          local_1c0 = dVar8;
          local_1b8 = dVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_178[0],PTR_s_frame_026ca640);
          local_1f0 = local_1a8;
          local_1e0 = local_1b0;
          puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
          uStack_1e8 = uVar10;
          dStack_1d8 = dVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                     PTR_s_systemFontOfSize__0269cc50);
          _objc_retainAutoreleasedReturnValue();
          local_1f8 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_178[0],PTR_s_setFont__026ca958,puVar5);
          dVar7 = dStack_1d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_lineHeight_0269e7d8);
          local_4b0 = dStack_1d8 * 2.0 + 2.0;
          if (local_4b0 <= dVar7) {
            local_4b0 = dVar7;
          }
          dStack_1d8 = local_4b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f0,uStack_1e8,local_1e0,local_4b0,local_178[0],PTR_s_setFrame__026ca960)
          ;
          _objc_storeStrong(&local_1f8,0);
        }
        _objc_storeStrong(&local_180,0);
      }
      _objc_storeStrong(local_178);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_a0,0);
      local_21 = 1;
      local_34 = 1;
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(local_60,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

