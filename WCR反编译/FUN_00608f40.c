// FUN_00608f40 @ 00608f40

void FUN_00608f40(ulong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined *puVar6;
  byte local_1e4;
  undefined *local_178;
  undefined *local_170;
  undefined1 auStack_168 [48];
  undefined1 auStack_138 [48];
  undefined1 auStack_108 [48];
  undefined1 auStack_d8 [48];
  ulong local_a8;
  ulong local_a0;
  char *local_98;
  ulong local_90;
  byte local_81;
  ulong local_80;
  ulong local_78;
  int local_6c;
  undefined1 local_59;
  undefined *local_58 [3];
  byte local_39;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = param_4;
  (*DAT_028cb928)(local_28,local_30,local_38,param_4 & 1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_59 = 0;
  local_58[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_navigationShowAvatar_026a0ac0);
  local_59 = SUB81(puVar1,0);
  if (((ulong)puVar1 & 1) == 0) {
    local_6c = 1;
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_78 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_78 == 0) {
      local_6c = 1;
    }
    else {
      uVar2 = local_78;
      FUN_0060b868();
      _objc_retainAutoreleasedReturnValue();
      local_80 = uVar2;
      if ((uVar2 == 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0), uVar2 == 0)) {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_80;
        local_80 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      local_1e4 = 0;
      if (local_80 != 0) {
        uVar2 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_containsString__0269d0b0,&cf__eck_W);
        local_1e4 = (byte)uVar2;
      }
      local_81 = local_1e4 & 1;
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      _objc_getAssociatedObject();
      _objc_retainAutoreleasedReturnValue();
      local_90 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((local_80 == 0) || ((local_81 & 1) == 0)) {
        if (local_90 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_invalidate_026ca758);
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
        local_98 = pcVar5;
        if ((pcVar5 != (char *)0x0) &&
           (uVar2 = local_78,
           (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isKindOfClass__0269cd68,pcVar5),
           (uVar2 & 1) != 0)) {
          uVar2 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_viewWithTag__026cabe0,0x3e4);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_78;
          local_a0 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_viewWithTag__026cabe0,0x3e3);
          _objc_retainAutoreleasedReturnValue();
          local_a8 = uVar3;
          if ((local_a0 != 0) &&
             (uVar2 = local_a0,
             (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_isHidden_026ca768),
             (uVar2 & 1) == 0)) {
            _memcpy(auStack_d8,PTR__CGAffineTransformIdentity_025782d8,0x30);
            uVar2 = local_a0;
            _memcpy(auStack_108,auStack_d8,0x30);
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_108);
          }
          if ((local_a8 != 0) &&
             (uVar2 = local_a8,
             (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_isHidden_026ca768),
             (uVar2 & 1) == 0)) {
            _memcpy(auStack_138,PTR__CGAffineTransformIdentity_025782d8,0x30);
            uVar2 = local_a8;
            _memcpy(auStack_168,auStack_138,0x30);
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_168);
          }
          _objc_storeStrong(&local_a8);
          _objc_storeStrong(&local_a0,0);
        }
        local_6c = 1;
      }
      else {
        if (local_90 == 0) {
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
          local_170 = puVar1;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          puVar1 = PTR__OBJC_CLASS___CADisplayLink_026ce190;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___CADisplayLink_026ce190,
                     PTR_s_displayLinkWithTarget_selector__0269dd38,local_170,
                     PTR_s_updateAnimation_026a5f98);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
          local_178 = puVar1;
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
          _objc_storeStrong(&local_178);
          _objc_storeStrong(&local_170,0);
        }
        local_6c = 0;
      }
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(local_58,0);
  if (local_6c == 0) {
    local_6c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

