// FUN_0031dd48 @ 0031dd48

void FUN_0031dd48(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  double local_178;
  double local_170;
  double local_130;
  double local_128;
  long local_f8;
  double local_f0;
  undefined4 local_e4;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined4 local_c4;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined4 local_a4;
  double local_a0;
  double local_98;
  double local_90;
  undefined4 local_84;
  double local_80;
  double local_78;
  undefined1 *local_60;
  undefined4 local_54;
  undefined8 local_50;
  double local_48;
  long local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  local_50 = param_2;
  local_48 = param_1;
  if (local_40 == 0) {
    local_54 = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_48 <= 0.0) {
      local_48 = 1.0;
    }
    local_60 = puVar2;
    if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      local_80 = local_48 * 3.0;
      local_84 = 0x40400000;
      local_128 = local_80;
      if (local_80 < 3.0) {
        local_128 = 3.0;
      }
      local_90 = local_128;
      local_78 = local_128;
      local_a0 = local_48 * 3.0;
      local_a4 = 0x40600000;
      local_130 = local_a0;
      if (local_a0 < 3.5) {
        local_130 = 3.5;
      }
      local_b0 = local_130;
      local_98 = local_130;
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_128,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_38 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setLineDashPattern__026ca998);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,local_40,PTR_s_setLineDashPhase__026ca9a0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setLineCap__026ca990,*(undefined8 *)PTR__kCALineCapButt_02578400);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setLineJoin__026ca9a8,*(undefined8 *)PTR__kCALineJoinMiter_02578410)
      ;
    }
    else if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setLineDashPattern__026ca998,0);
      (*(code *)PTR__objc_msgSend_02578628)(0,local_40,PTR_s_setLineDashPhase__026ca9a0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setLineCap__026ca990,*(undefined8 *)PTR__kCALineCapRound_02578408);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setLineJoin__026ca9a8,*(undefined8 *)PTR__kCALineJoinRound_02578418)
      ;
      lVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_path_0269d4d8);
      if (lVar5 != 0) {
        local_c0 = local_48 * DAT_02324000;
        local_c4 = 0x3f99999a;
        local_170 = local_c0;
        if (local_c0 < 1.2000000476837158) {
          local_170 = 1.2000000476837158;
        }
        local_d0 = local_170;
        local_b8 = local_170;
        local_e0 = local_48 * 8.0;
        local_e4 = 0x41200000;
        local_178 = local_e0;
        if (local_e0 < 10.0) {
          local_178 = 10.0;
        }
        local_f0 = local_178;
        local_d8 = local_178;
        lVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_path_0269d4d8);
        FUN_0031e49c(local_b8,local_d8);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = lVar5;
        if (lVar5 != 0) {
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_CGPath_026ca478);
          lVar6 = local_f8;
          if (lVar5 != 0) {
            _objc_retainAutorelease();
            (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_CGPath_026ca478);
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setPath__026caa08,lVar6);
          }
        }
        _objc_storeStrong(&local_f8,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setLineDashPattern__026ca998,0);
      (*(code *)PTR__objc_msgSend_02578628)(0,local_40,PTR_s_setLineDashPhase__026ca9a0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setLineCap__026ca990,*(undefined8 *)PTR__kCALineCapButt_02578400);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setLineJoin__026ca9a8,*(undefined8 *)PTR__kCALineJoinMiter_02578410)
      ;
    }
    local_54 = 0;
  }
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

