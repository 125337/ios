// FUN_0079b4e8 @ 0079b4e8

void FUN_0079b4e8(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  double dVar10;
  ulong local_380;
  ulong local_378;
  ulong local_2e8;
  double local_2e0;
  double local_2d0;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  undefined8 uStack_2a8;
  double local_2a0;
  double dStack_298;
  double local_290;
  undefined8 uStack_288;
  ulong local_238 [14];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  ulong local_168;
  ulong local_160;
  long local_158;
  undefined8 local_150;
  ulong local_148;
  undefined4 local_13c;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0 [3];
  undefined8 local_c8;
  double local_c0;
  double local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_5);
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_6);
  FUN_0079e548(local_b0);
  uVar2 = local_b0;
  FUN_0079f278();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = local_b0;
  local_e0[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_numberOfSections_026a2068);
  local_e8 = uVar9;
  _memset(auStack_130,0,0x40);
  uVar2 = local_e0[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar9);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_378 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
  if (local_378 != 0) {
    lVar8 = *local_120;
    local_380 = 0;
    do {
      do {
        if (*local_120 - lVar8 != 0) {
          _objc_enumerationMutation(*local_120 - lVar8,uVar3);
        }
        uVar9 = *(ulong *)(local_128 + local_380 * 8);
        local_f0 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_name_0269d828);
        _objc_retainAutoreleasedReturnValue();
        local_138 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar9,PTR_s_hasPrefix__0269d320,&cf_WCRefine_MainFrameSectionFill_);
        uVar2 = local_138;
        if ((uVar9 & 1) == 0) {
          local_13c = 5;
        }
        else {
          pcVar4 = &cf_WCRefine_MainFrameSectionFill_;
          (*(code *)PTR__objc_msgSend_02578628)
                    (&cf_WCRefine_MainFrameSectionFill_,PTR_s_length_0269cca0);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_substringFromIndex__0269d120,pcVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          local_148 = uVar9;
          if ((long)local_e8 <= (long)uVar9) {
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_removeFromSuperlayer_026ca7f8);
          }
          local_13c = 0;
        }
        _objc_storeStrong(&local_138,0);
        local_380 = local_380 + 1;
      } while (local_380 < local_378);
      local_378 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      local_380 = 0;
    } while (local_378 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar5 = local_c8;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_CGColor_026ca470);
  local_158 = 0;
  local_150 = uVar5;
  do {
    if ((long)local_e8 <= local_158) {
      _objc_storeStrong(local_158 - local_e8,local_e0);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_b0,0);
      if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
      }
      return;
    }
    uVar9 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_numberOfRowsInSection__026a2008,local_158);
    local_160 = uVar9;
    FUN_0079a994();
    uVar2 = local_b0;
    if ((uVar9 & 1) == 0) {
      uVar2 = local_e0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = &cf_WCRefine_MainFrameSectionFill_;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_WCRefine_MainFrameSectionFill_,PTR_s_stringByAppendingFormat__026a2088,&cf__ld)
      ;
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar2;
      FUN_0079d944();
      _objc_retainAutoreleasedReturnValue();
      local_168 = uVar9;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((local_168 != 0) &&
         (uVar2 = local_168,
         (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_isHidden_026ca768), (uVar2 & 1) == 0)
         ) {
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setHidden__026ca970,1);
      }
      local_13c = 8;
      _objc_storeStrong(&local_168,0);
    }
    else {
      puVar6 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_indexPathForRow_inSection__0269e9a0,0,
                 local_158);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_rectForRowAtIndexPath__0269ec48);
      local_188 = param_1;
      dStack_180 = param_2;
      local_178 = param_3;
      uStack_170 = param_4;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      uVar2 = local_b0;
      puVar6 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_indexPathForRow_inSection__0269e9a0,
                 local_160 - 1,local_158);
      uVar1 = (uint)puVar6;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_rectForRowAtIndexPath__0269ec48);
      local_1a8 = param_4;
      dStack_1a0 = param_3;
      local_198 = param_2;
      dStack_190 = param_1;
      (*(code *)PTR__objc_release_02578630)();
      param_1 = local_188;
      param_2 = dStack_180;
      param_3 = local_178;
      param_4 = uStack_170;
      _CGRectUnion();
      param_1 = param_1 + local_c0;
      param_3 = param_3 - local_c0 * 2.0;
      local_1c8 = param_1;
      dStack_1c0 = param_2;
      local_1b8 = param_3;
      uStack_1b0 = param_4;
      _CGRectIsEmpty();
      if ((uVar1 & 1) == 0) {
        uVar2 = local_b0;
        FUN_0079f750(local_b0,local_158);
        _objc_retainAutoreleasedReturnValue();
        local_238[0] = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isHidden_026ca768);
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_238[0],PTR_s_setHidden__026ca970,0);
        }
        uVar2 = local_238[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_238[0],PTR_s_frame_026ca640);
        FUN_0079b440();
        if ((uVar2 & 1) == 0) {
          dStack_298 = dStack_1c0;
          local_2a0 = local_1c8;
          uStack_288 = uStack_1b0;
          local_290 = local_1b8;
          dStack_2b8 = dStack_1c0;
          local_2c0 = local_1c8;
          uStack_2a8 = uStack_1b0;
          local_2b0 = local_1b8;
          dVar10 = local_1c8;
          param_3 = local_1b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_238[0],PTR_s_setFrame__026ca960);
          puVar6 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
          (*(code *)PTR__objc_msgSend_02578628)(local_238[0],PTR_s_bounds_026ca548);
          local_2e0 = dVar10;
          local_2d0 = param_3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar10,puVar6,PTR_s_bezierPathWithRoundedRect_corner_026ca530);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          puVar7 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGPath_026ca478);
          (*(code *)PTR__objc_msgSend_02578628)(local_238[0],PTR_s_setPath__026caa08,puVar7);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          uVar2 = local_238[0];
          puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
          param_1 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar2,&DAT_028ccb1d,puVar6,1);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          param_2 = dStack_1c0;
          param_4 = uStack_1b0;
        }
        else {
          uVar2 = local_238[0];
          _objc_getAssociatedObject(local_238[0],&DAT_028ccb1d);
          _objc_retainAutoreleasedReturnValue();
          local_2e8 = uVar2;
          if (uVar2 == 0) {
LAB_0079c1dc:
            puVar6 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
            (*(code *)PTR__objc_msgSend_02578628)(local_238[0],PTR_s_bounds_026ca548);
            (*(code *)PTR__objc_msgSend_02578628)
                      (param_1,puVar6,PTR_s_bezierPathWithRoundedRect_corner_026ca530);
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            puVar7 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGPath_026ca478);
            (*(code *)PTR__objc_msgSend_02578628)(local_238[0],PTR_s_setPath__026caa08,puVar7);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            uVar2 = local_238[0];
            puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
            param_1 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar2,&DAT_028ccb1d,puVar6,1);
            (*(code *)PTR__objc_release_02578630)(puVar6);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_doubleValue_026ca608);
            param_2 = local_b8;
            FUN_00798f28();
            if ((uVar2 & 1) == 0) goto LAB_0079c1dc;
          }
          _objc_storeStrong(&local_2e8,0);
        }
        uVar2 = local_238[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_238[0],PTR_s_fillColor_026a80e8);
        FUN_0079ddcc(uVar2,local_150);
        if ((uVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_238[0],PTR_s_setFillColor__026ca948,local_150)
          ;
        }
        _objc_storeStrong(local_238,0);
      }
    }
    local_158 = local_158 + 1;
  } while( true );
}

