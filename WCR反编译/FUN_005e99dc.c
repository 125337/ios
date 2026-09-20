// FUN_005e99dc @ 005e99dc

/* WARNING: Removing unreachable block (ram,0x005ea5b0) */
/* WARNING: Removing unreachable block (ram,0x005ea97c) */

void FUN_005e99dc(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  char *pcVar5;
  dispatch_time_t dVar6;
  double dVar7;
  double local_480;
  double local_418;
  double local_388;
  uint local_2ec;
  undefined *local_2b0;
  double local_2a8;
  double local_2a0;
  ulong local_298;
  undefined1 auStack_290 [48];
  undefined1 auStack_260 [48];
  double local_230;
  double local_228;
  double local_220;
  undefined *local_218;
  double local_210;
  double local_208;
  ulong local_200;
  undefined1 auStack_1f8 [48];
  undefined1 auStack_1c8 [48];
  double local_198;
  double local_190;
  ulong local_188;
  ulong local_180;
  char *local_178;
  long local_170 [2];
  undefined1 *local_160;
  undefined1 *local_158;
  double local_150;
  ulong local_148;
  undefined1 auStack_140 [48];
  undefined1 auStack_110 [48];
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [48];
  ulong local_80;
  ulong local_78;
  char *local_70;
  ulong local_68;
  byte local_59;
  ulong local_58;
  int local_4c;
  ulong local_48 [3];
  ulong local_30;
  ulong local_28;
  
  dVar7 = DAT_02324200;
  local_28 = 0;
  local_388 = DAT_02324200;
  _objc_storeStrong(&local_28,param_1);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleView_0269ea50);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  if (uVar2 == 0) {
    uVar2 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_02324208);
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = uVar2;
    if (uVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_invalidate_026ca758);
      _objc_setAssociatedObject(local_28,&DAT_02324208,0,1);
      _objc_setAssociatedObject(local_28,&DAT_02324209,0,1);
      _objc_setAssociatedObject(local_28,&DAT_0232420a,0,1);
      _objc_setAssociatedObject(local_28,&DAT_0232420b,0,1);
    }
    local_4c = 1;
    _objc_storeStrong(local_48,0);
  }
  else {
    FUN_0060b868();
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar2;
    if ((uVar2 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0), uVar2 == 0)) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_title_0269d250);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_58;
      local_58 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_2ec = 0;
    if (local_58 != 0) {
      uVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsString__0269d0b0,&cf__eck_W);
      local_2ec = (uint)uVar2;
    }
    local_59 = (byte)local_2ec & 1;
    if ((local_2ec & 1) == 0) {
      uVar2 = local_28;
      _objc_getAssociatedObject(local_28,&DAT_02324208);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar2;
      if (uVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_invalidate_026ca758);
        _objc_setAssociatedObject(local_28,&DAT_02324208,0,1);
        _objc_setAssociatedObject(local_28,&DAT_02324209,0,1);
        _objc_setAssociatedObject(local_28,&DAT_0232420a,0,1);
        _objc_setAssociatedObject(local_28,&DAT_0232420b,0,1);
      }
      pcVar5 = "MMTitleView";
      _objc_getClass();
      local_70 = pcVar5;
      if ((pcVar5 != (char *)0x0) &&
         (uVar2 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar5),
         (uVar2 & 1) != 0)) {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_viewWithTag__026cabe0,0x3e4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_30;
        local_78 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_viewWithTag__026cabe0,0x3e3);
        _objc_retainAutoreleasedReturnValue();
        local_80 = uVar3;
        if ((local_78 != 0) &&
           (uVar2 = local_78,
           (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isHidden_026ca768), (uVar2 & 1) == 0
           )) {
          _memcpy(auStack_b0,PTR__CGAffineTransformIdentity_025782d8,0x30);
          uVar2 = local_78;
          _memcpy(auStack_e0,auStack_b0,0x30);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_e0);
        }
        if ((local_80 != 0) &&
           (uVar2 = local_80,
           (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isHidden_026ca768), (uVar2 & 1) == 0
           )) {
          _memcpy(auStack_110,PTR__CGAffineTransformIdentity_025782d8,0x30);
          uVar2 = local_80;
          _memcpy(auStack_140,auStack_110,0x30);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_140);
        }
        _objc_storeStrong(&local_80);
        _objc_storeStrong(&local_78,0);
      }
      local_4c = 1;
      _objc_storeStrong(&local_68,0);
    }
    else {
      uVar2 = local_28;
      _objc_getAssociatedObject(local_28,&DAT_02324209);
      _objc_retainAutoreleasedReturnValue();
      local_148 = uVar2;
      if (uVar2 == 0) {
        local_388 = 0.0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_doubleValue_026ca608);
      }
      uVar2 = local_28;
      local_150 = local_388 + DAT_02323c88;
      if (dVar7 < local_150) {
        local_150 = local_150 - dVar7;
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_150,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,&DAT_02324209,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_160 = (undefined1 *)0x0;
      local_158 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_navigationTypingVibrationStyle_026a5e88);
      local_160 = puVar4;
      if (puVar4 == (undefined1 *)0x0) {
        local_4c = 1;
      }
      else {
        local_170[0] = 0;
        pcVar5 = "MMTitleView";
        _objc_getClass();
        local_178 = pcVar5;
        if ((pcVar5 != (char *)0x0) &&
           (uVar2 = local_30,
           (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar5),
           (uVar2 & 1) != 0)) {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_viewWithTag__026cabe0,0x3e3);
          _objc_retainAutoreleasedReturnValue();
          local_180 = uVar2;
          if ((uVar2 == 0) ||
             ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isHidden_026ca768), (uVar2 & 1) != 0
             )) {
            uVar2 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_viewWithTag__026cabe0,0x3e4);
            _objc_retainAutoreleasedReturnValue();
            local_188 = uVar2;
            if ((uVar2 != 0) &&
               ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isHidden_026ca768),
               (uVar2 & 1) == 0)) {
              _objc_storeStrong(local_170,local_188);
            }
            _objc_storeStrong(&local_188,0);
          }
          else {
            _objc_storeStrong(local_170,local_180);
          }
          _objc_storeStrong(&local_180,0);
        }
        if (local_160 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
          dVar7 = local_150;
          _sin(0);
          local_198 = dVar7 * 0.15 + 1.0;
          local_190 = dVar7;
          if (local_170[0] != 0) {
            _CGAffineTransformMakeScale(local_198,local_198);
            lVar1 = local_170[0];
            _memcpy(auStack_1f8,auStack_1c8,0x30);
            (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setTransform__026caad0,auStack_1f8);
          }
          if (0.95 < local_190) {
            uVar2 = local_28;
            local_418 = local_190;
            _objc_getAssociatedObject(local_28,&DAT_0232420a);
            _objc_retainAutoreleasedReturnValue();
            local_200 = uVar2;
            if (uVar2 == 0) {
              local_418 = 0.0;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_doubleValue_026ca608);
            }
            local_208 = local_418;
            _CACurrentMediaTime();
            local_210 = local_418;
            if (0.3 < local_418 - local_208) {
              puVar4 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
              _objc_alloc();
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithStyle__026ca710,0);
              local_218 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_prepare_026ca7d8);
              (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_impactOccurred_026ca6a0);
              _objc_storeStrong(&local_218,0);
              uVar2 = local_28;
              puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_210,PTR__OBJC_CLASS___NSNumber_026ce038,
                         PTR_s_numberWithDouble__0269d6d0);
              _objc_retainAutoreleasedReturnValue();
              _objc_setAssociatedObject(uVar2,&DAT_0232420a,puVar4,1);
              (*(code *)PTR__objc_release_02578630)(puVar4);
            }
            _objc_storeStrong(&local_200,0);
          }
        }
        else if (local_160 == (undefined1 *)((long)&MACH_HEADER.cputype + 2)) {
          dVar7 = local_150;
          _sin(0);
          local_220 = dVar7;
          if (dVar7 <= 0.7) {
            if (dVar7 <= 0.0) {
              local_228 = 0.95;
            }
            else {
              local_228 = DAT_02323c68 * dVar7 + 1.0;
            }
          }
          else {
            dVar7 = (dVar7 - 0.7) / 0.3;
            FUN_0060c424(2);
            local_228 = dVar7 * 0.3 + 1.0;
            local_230 = dVar7;
          }
          if (local_170[0] != 0) {
            _CGAffineTransformMakeScale(local_228,local_228);
            lVar1 = local_170[0];
            _memcpy(auStack_290,auStack_260,0x30);
            (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setTransform__026caad0,auStack_290);
          }
          if (0.95 < local_220) {
            uVar2 = local_28;
            local_480 = local_220;
            _objc_getAssociatedObject(local_28,&DAT_0232420a);
            _objc_retainAutoreleasedReturnValue();
            local_298 = uVar2;
            if (uVar2 == 0) {
              local_480 = 0.0;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_doubleValue_026ca608);
            }
            local_2a0 = local_480;
            _CACurrentMediaTime();
            local_2a8 = local_480;
            if (DAT_02323d00 < local_480 - local_2a0) {
              puVar4 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
              _objc_alloc();
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithStyle__026ca710,1);
              local_2b0 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_prepare_026ca7d8);
              (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_impactOccurred_026ca6a0);
              dVar6 = _dispatch_time(0,200000000);
              puVar4 = PTR___dispatch_main_q_02578680;
              _objc_retainAutoreleaseReturnValue();
              _objc_retainAutoreleasedReturnValue();
              _dispatch_after(dVar6,puVar4,&PTR___NSConcreteGlobalBlock_0257e4b8);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              _objc_storeStrong(&local_2b0,0);
              uVar2 = local_28;
              puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2a8,PTR__OBJC_CLASS___NSNumber_026ce038,
                         PTR_s_numberWithDouble__0269d6d0);
              _objc_retainAutoreleasedReturnValue();
              _objc_setAssociatedObject(uVar2,&DAT_0232420a,puVar4,1);
              (*(code *)PTR__objc_release_02578630)(puVar4);
            }
            _objc_storeStrong(&local_298,0);
          }
        }
        _objc_storeStrong(local_170,0);
        local_4c = 0;
      }
      _objc_storeStrong(&local_158);
      _objc_storeStrong(&local_148,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_30,0);
  if (local_4c == 0) {
    local_4c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

