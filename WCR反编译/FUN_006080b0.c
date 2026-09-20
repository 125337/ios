// FUN_006080b0 @ 006080b0

void FUN_006080b0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined *puVar6;
  byte local_1d4;
  undefined *local_170;
  undefined *local_168;
  undefined1 auStack_160 [48];
  undefined1 auStack_130 [48];
  undefined1 auStack_100 [48];
  undefined1 auStack_d0 [48];
  ulong local_a0;
  ulong local_98;
  char *local_90;
  ulong local_88;
  byte local_79;
  ulong local_78;
  ulong local_70;
  int local_64;
  undefined1 local_51;
  undefined *local_50 [3];
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*DAT_028cb920)(local_28,local_30,local_38);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_51 = 0;
  local_50[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_navigationShowAvatar_026a0ac0);
  local_51 = SUB81(puVar1,0);
  if (((ulong)puVar1 & 1) == 0) {
    local_64 = 1;
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_70 == 0) {
      local_64 = 1;
    }
    else {
      uVar2 = local_70;
      FUN_0060b868();
      _objc_retainAutoreleasedReturnValue();
      local_78 = uVar2;
      if ((uVar2 == 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0), uVar2 == 0)) {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_78;
        local_78 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      local_1d4 = 0;
      if (local_78 != 0) {
        uVar2 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_containsString__0269d0b0,&cf__eck_W);
        local_1d4 = (byte)uVar2;
      }
      local_79 = local_1d4 & 1;
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      _objc_getAssociatedObject();
      _objc_retainAutoreleasedReturnValue();
      local_88 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((local_78 == 0) || ((local_79 & 1) == 0)) {
        if (local_88 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_invalidate_026ca758);
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject();
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        if (DAT_028cb940 == (char *)0x0) {
          pcVar5 = "MMTitleView";
          _objc_getClass();
          DAT_028cb940 = pcVar5;
        }
        pcVar5 = DAT_028cb940;
        _objc_retainAutoreleaseReturnValue();
        local_90 = pcVar5;
        if ((pcVar5 != (char *)0x0) &&
           (uVar2 = local_70,
           (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isKindOfClass__0269cd68,pcVar5),
           (uVar2 & 1) != 0)) {
          uVar2 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_viewWithTag__026cabe0,0x3e4);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_70;
          local_98 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_viewWithTag__026cabe0,0x3e3);
          _objc_retainAutoreleasedReturnValue();
          local_a0 = uVar3;
          if ((local_98 != 0) &&
             (uVar2 = local_98,
             (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isHidden_026ca768),
             (uVar2 & 1) == 0)) {
            _memcpy(auStack_d0,PTR__CGAffineTransformIdentity_025782d8,0x30);
            uVar2 = local_98;
            _memcpy(auStack_100,auStack_d0,0x30);
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_100);
          }
          if ((local_a0 != 0) &&
             (uVar2 = local_a0,
             (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_isHidden_026ca768),
             (uVar2 & 1) == 0)) {
            _memcpy(auStack_130,PTR__CGAffineTransformIdentity_025782d8,0x30);
            uVar2 = local_a0;
            _memcpy(auStack_160,auStack_130,0x30);
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_160);
          }
          _objc_storeStrong(&local_a0);
          _objc_storeStrong(&local_98,0);
        }
        local_64 = 1;
      }
      else {
        if (local_88 == 0) {
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar2,&DAT_02324209,puVar1,1);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar2,&DAT_0232420a,puVar1,1);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          puVar1 = PTR_WCRefineTypingAnimationHelper_026ce7e0;
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_helperWithNavigationItem__026a5f90);
          _objc_retainAutoreleasedReturnValue();
          local_168 = puVar1;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          puVar1 = PTR__OBJC_CLASS___CADisplayLink_026ce190;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___CADisplayLink_026ce190,
                     PTR_s_displayLinkWithTarget_selector__0269dd38,local_168,
                     PTR_s_updateAnimation_026a5f98);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
          local_170 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_addToRunLoop_forMode__0269dd48,puVar6,
                     *(undefined8 *)PTR__NSRunLoopCommonModes_02578258);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          _objc_storeStrong(&local_170);
          _objc_storeStrong(&local_168,0);
        }
        local_64 = 0;
      }
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(local_50,0);
  if (local_64 == 0) {
    local_64 = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

