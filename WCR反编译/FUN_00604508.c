// FUN_00604508 @ 00604508

void FUN_00604508(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined *puVar6;
  byte local_184;
  undefined *local_160;
  undefined *local_158;
  undefined1 auStack_150 [48];
  undefined1 auStack_120 [48];
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [48];
  ulong local_90;
  ulong local_88;
  char *local_80;
  ulong local_78;
  ulong local_70;
  byte local_65;
  int local_64;
  undefined1 local_51;
  undefined *local_50 [3];
  long local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*DAT_028cb8d8)(local_28,local_30,local_38);
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
    local_184 = 0;
    if (local_38 != 0) {
      lVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf__eck_W);
      local_184 = (byte)lVar2;
    }
    local_65 = local_184 & 1;
    uVar3 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_02324208);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_28;
    local_70 = uVar3;
    if ((local_38 == 0) || ((local_65 & 1) == 0)) {
      if (uVar3 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_invalidate_026ca758);
        _objc_setAssociatedObject(local_28,&DAT_02324208,0,1);
        _objc_setAssociatedObject(local_28,&DAT_02324209,0,1);
        _objc_setAssociatedObject(local_28,&DAT_0232420a,0,1);
        _objc_setAssociatedObject(local_28,&DAT_0232420b,0,1);
      }
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleView_0269ea50);
      _objc_retainAutoreleasedReturnValue();
      local_78 = uVar4;
      if (uVar4 != 0) {
        if (DAT_028cb940 == (char *)0x0) {
          pcVar5 = "MMTitleView";
          _objc_getClass();
          DAT_028cb940 = pcVar5;
        }
        pcVar5 = DAT_028cb940;
        _objc_retainAutoreleaseReturnValue();
        local_80 = pcVar5;
        if ((pcVar5 != (char *)0x0) &&
           (uVar4 = local_78,
           (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isKindOfClass__0269cd68,pcVar5),
           (uVar4 & 1) != 0)) {
          uVar4 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_viewWithTag__026cabe0,0x3e4);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_78;
          local_88 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_viewWithTag__026cabe0,0x3e3);
          _objc_retainAutoreleasedReturnValue();
          local_90 = uVar3;
          if ((local_88 != 0) &&
             (uVar4 = local_88,
             (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isHidden_026ca768),
             (uVar4 & 1) == 0)) {
            _memcpy(auStack_c0,PTR__CGAffineTransformIdentity_025782d8,0x30);
            uVar4 = local_88;
            _memcpy(auStack_f0,auStack_c0,0x30);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_setTransform__026caad0,auStack_f0);
          }
          if ((local_90 != 0) &&
             (uVar4 = local_90,
             (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_isHidden_026ca768),
             (uVar4 & 1) == 0)) {
            _memcpy(auStack_120,PTR__CGAffineTransformIdentity_025782d8,0x30);
            uVar4 = local_90;
            _memcpy(auStack_150,auStack_120,0x30);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_setTransform__026caad0,auStack_150);
          }
          _objc_storeStrong(&local_90);
          _objc_storeStrong(&local_88,0);
        }
      }
      local_64 = 1;
      _objc_storeStrong(&local_78,0);
    }
    else {
      if (uVar3 == 0) {
        puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar4,&DAT_02324209,puVar1,1);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        uVar4 = local_28;
        puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar4,&DAT_0232420a,puVar1,1);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = PTR_WCRefineTypingAnimationHelper_026ce7e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineTypingAnimationHelper_026ce7e0,
                   PTR_s_helperWithNavigationItem__026a5f90,local_28);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___CADisplayLink_026ce190;
        local_158 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CADisplayLink_026ce190,
                   PTR_s_displayLinkWithTarget_selector__0269dd38,puVar1,
                   PTR_s_updateAnimation_026a5f98);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
        local_160 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_addToRunLoop_forMode__0269dd48,puVar1,
                   *(undefined8 *)PTR__NSRunLoopCommonModes_02578258);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _objc_setAssociatedObject(local_28,&DAT_02324208,local_160,1);
        _objc_setAssociatedObject(local_28,&DAT_0232420b,local_158,1);
        _objc_storeStrong(&local_160);
        _objc_storeStrong(&local_158,0);
      }
      local_64 = 0;
    }
    _objc_storeStrong(&local_70,0);
    if (local_64 == 0) {
      local_64 = 0;
    }
  }
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_38,0);
  return;
}

