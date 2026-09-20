// FUN_0063120c @ 0063120c

void FUN_0063120c(ulong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  byte local_11c;
  ulong local_b0;
  undefined *local_a8;
  undefined *local_a0;
  ulong local_98;
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
  (*DAT_028cb9e0)(local_28,local_30,local_38,param_4 & 1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_59 = 0;
  local_58[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_navigationShowAvatarTQQ_026a0ac8);
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
      FUN_0063572c();
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
      local_11c = 0;
      if (local_80 != 0) {
        uVar2 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_containsString__0269d0b0,&cf__eck_W);
        local_11c = (byte)uVar2;
      }
      local_81 = local_11c & 1;
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
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_98 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if ((local_98 != 0) &&
             (uVar2 = local_98,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_98,PTR_s_respondsToSelector__026ca818,PTR_s_setNeedsLayout_0269deb8),
             (uVar2 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setNeedsLayout_0269deb8);
          }
          _objc_storeStrong(&local_98,0);
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
          _objc_setAssociatedObject(uVar2,&DAT_02324210,puVar1,1);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar2,&DAT_02324211,puVar1,1);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          puVar1 = PTR_WCRefineTQQTypingAnimationHelper_026ce7f0;
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_helperWithNavigationItem__026a5f90);
          _objc_retainAutoreleasedReturnValue();
          local_a0 = puVar1;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          puVar1 = PTR__OBJC_CLASS___CADisplayLink_026ce190;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___CADisplayLink_026ce190,
                     PTR_s_displayLinkWithTarget_selector__0269dd38,local_a0,
                     PTR_s_updateAnimation_026a5f98);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
          local_a8 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_addToRunLoop_forMode__0269dd48,puVar5,
                     *(undefined8 *)PTR__NSRunLoopCommonModes_02578258);
          (*(code *)PTR__objc_release_02578630)(puVar5);
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
          uVar3 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_b0 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if ((local_b0 != 0) &&
             (uVar2 = local_b0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_setNeedsLayout_0269deb8),
             (uVar2 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setNeedsLayout_0269deb8);
          }
          _objc_storeStrong(&local_b0);
          _objc_storeStrong(&local_a8,0);
          _objc_storeStrong(&local_a0,0);
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

