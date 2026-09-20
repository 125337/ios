// FUN_0079de60 @ 0079de60

void FUN_0079de60(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  double local_168;
  double local_160;
  double local_120;
  double local_118;
  long local_f0;
  double local_e8;
  undefined4 local_dc;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined4 local_bc;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined4 local_9c;
  double local_98;
  double local_90;
  double local_88;
  undefined4 local_7c;
  double local_78;
  double local_70;
  undefined1 *local_58;
  undefined4 local_4c;
  double local_48;
  long local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_2);
  local_48 = param_1;
  if (local_40 == 0) {
    local_4c = 1;
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
    local_58 = puVar2;
    if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      local_78 = local_48 * 3.0;
      local_7c = 0x40400000;
      local_118 = local_78;
      if (local_78 < 3.0) {
        local_118 = 3.0;
      }
      local_88 = local_118;
      local_70 = local_118;
      local_98 = local_48 * 3.0;
      local_9c = 0x40600000;
      local_120 = local_98;
      if (local_98 < 3.5) {
        local_120 = 3.5;
      }
      local_a8 = local_120;
      local_90 = local_120;
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_38 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
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
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setLineCap__026ca990,*(undefined8 *)PTR__kCALineCapButt_02578400);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setLineJoin__026ca9a8,*(undefined8 *)PTR__kCALineJoinMiter_02578410)
      ;
    }
    else if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setLineDashPattern__026ca998,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setLineCap__026ca990,*(undefined8 *)PTR__kCALineCapRound_02578408);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setLineJoin__026ca9a8,*(undefined8 *)PTR__kCALineJoinRound_02578418)
      ;
      lVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_path_0269d4d8);
      if (lVar5 != 0) {
        local_b8 = local_48 * DAT_02324000;
        local_bc = 0x3f99999a;
        local_160 = local_b8;
        if (local_b8 < 1.2000000476837158) {
          local_160 = 1.2000000476837158;
        }
        local_c8 = local_160;
        local_b0 = local_160;
        local_d8 = local_48 * 8.0;
        local_dc = 0x41200000;
        local_168 = local_d8;
        if (local_d8 < 10.0) {
          local_168 = 10.0;
        }
        local_e8 = local_168;
        local_d0 = local_168;
        lVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_path_0269d4d8);
        FUN_007a13f4(local_b0,local_d0);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = lVar5;
        if (lVar5 != 0) {
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_CGPath_026ca478);
          lVar6 = local_f0;
          if (lVar5 != 0) {
            _objc_retainAutorelease();
            (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_CGPath_026ca478);
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setPath__026caa08,lVar6);
          }
        }
        _objc_storeStrong(&local_f0,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setLineDashPattern__026ca998,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setLineCap__026ca990,*(undefined8 *)PTR__kCALineCapButt_02578400);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setLineJoin__026ca9a8,*(undefined8 *)PTR__kCALineJoinMiter_02578410)
      ;
    }
    local_4c = 0;
  }
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

