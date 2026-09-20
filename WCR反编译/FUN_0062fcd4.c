// FUN_0062fcd4 @ 0062fcd4

void FUN_0062fcd4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  byte local_ac;
  undefined *local_88;
  undefined *local_80;
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
  (*DAT_028cb9d0)(local_28,local_30,local_38);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_51 = 0;
  local_50[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_navigationShowAvatarTQQ_026a0ac8);
  local_51 = SUB81(puVar1,0);
  if (((ulong)puVar1 & 1) == 0) {
    local_64 = 1;
  }
  else {
    local_ac = 0;
    if (local_38 != 0) {
      lVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf__eck_W);
      local_ac = (byte)lVar2;
    }
    local_65 = local_ac & 1;
    uVar3 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_0232420f);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_28;
    local_70 = uVar3;
    if ((local_38 == 0) || ((local_65 & 1) == 0)) {
      if (uVar3 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_invalidate_026ca758);
        _objc_setAssociatedObject(local_28,&DAT_0232420f,0,1);
        _objc_setAssociatedObject(local_28,&DAT_02324210,0,1);
        _objc_setAssociatedObject(local_28,&DAT_02324211,0,1);
        _objc_setAssociatedObject(local_28,&DAT_02324212,0,1);
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleView_0269ea50);
        _objc_retainAutoreleasedReturnValue();
        local_78 = uVar4;
        if ((uVar4 != 0) &&
           ((*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_setNeedsLayout_0269deb8),
           (uVar4 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setNeedsLayout_0269deb8);
        }
        _objc_storeStrong(&local_78,0);
      }
      local_64 = 1;
    }
    else {
      if (uVar3 == 0) {
        puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar4,&DAT_02324210,puVar1,1);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        uVar4 = local_28;
        puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar4,&DAT_02324211,puVar1,1);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = PTR_WCRefineTQQTypingAnimationHelper_026ce7f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineTQQTypingAnimationHelper_026ce7f0,
                   PTR_s_helperWithNavigationItem__026a5f90,local_28);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___CADisplayLink_026ce190;
        local_80 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CADisplayLink_026ce190,
                   PTR_s_displayLinkWithTarget_selector__0269dd38,puVar1,
                   PTR_s_updateAnimation_026a5f98);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
        local_88 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_addToRunLoop_forMode__0269dd48,puVar1,
                   *(undefined8 *)PTR__NSRunLoopCommonModes_02578258);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _objc_setAssociatedObject(local_28,&DAT_0232420f,local_88,1);
        _objc_setAssociatedObject(local_28,&DAT_02324212,local_80,1);
        _objc_storeStrong(&local_88);
        _objc_storeStrong(&local_80,0);
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

