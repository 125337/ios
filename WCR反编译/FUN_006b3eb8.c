// FUN_006b3eb8 @ 006b3eb8

byte FUN_006b3eb8(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a0;
  cfstringStruct *local_190;
  cfstringStruct *local_180;
  cfstringStruct *local_168;
  cfstringStruct *local_150;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  byte local_e1;
  cfstringStruct *local_e0;
  byte local_d1;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,
             PTR_s_shouldPresentForegroundDisguiseN_026a6868);
  if (((ulong)puVar1 & 1) == 0) {
    local_21 = 0;
    local_34 = 1;
  }
  else {
    pcVar2 = &cf_QuickReplyNotifyItem;
    _NSClassFromString();
    pcVar3 = &cf_showQuickReplyItem_timeout_;
    local_40 = pcVar2;
    _NSSelectorFromString();
    local_48 = pcVar3;
    if (((local_40 == (cfstringStruct *)0x0) || (local_30 == 0)) ||
       (uVar4 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar3),
       (uVar4 & 1) == 0)) {
      local_21 = 0;
      local_34 = 1;
    }
    else {
      pcVar2 = (cfstringStruct *)PTR_WCRefinePrivateFriendManager_026ce160;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_notificationDisguiseResolvedTitl_026a6808);
      _objc_retainAutoreleasedReturnValue();
      local_150 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_150 = &cf__OR;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = local_150;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_notificationDisguiseBody_026a6810);
      _objc_retainAutoreleasedReturnValue();
      local_168 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_168 = &cf__Og;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_168;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_notificationDisguiseIdentityUser_026a6818);
      _objc_retainAutoreleasedReturnValue();
      local_180 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_180 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_180;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      local_70 = (cfstringStruct *)0x0;
      pcVar2 = &cf_MMServiceCenter;
      _NSClassFromString();
      pcVar3 = &cf_CContactMgr;
      local_78 = pcVar2;
      _NSClassFromString();
      local_91 = 0;
      local_80 = pcVar3;
      if ((local_78 == (cfstringStruct *)0x0) ||
         (pcVar2 = local_78,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
         ((ulong)pcVar2 & 1) == 0)) {
        local_190 = (cfstringStruct *)0x0;
      }
      else {
        local_190 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        local_91 = 1;
        local_90 = local_190;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_190;
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      local_a9 = 0;
      if (((local_88 == (cfstringStruct *)0x0) || (local_80 == (cfstringStruct *)0x0)) ||
         (pcVar2 = local_88,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_88,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
         ((ulong)pcVar2 & 1) == 0)) {
        local_1a0 = (cfstringStruct *)0x0;
      }
      else {
        local_1a0 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_getService__0269d170,local_80);
        _objc_retainAutoreleasedReturnValue();
        local_a9 = 1;
        local_a8 = local_1a0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = local_1a0;
      if ((local_a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      if ((pcVar2 != (cfstringStruct *)0x0) &&
         (pcVar2 = local_a0,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
         ((ulong)pcVar2 & 1) != 0)) {
        pcVar3 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_getContactByName__0269d178,local_68);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_70;
        local_70 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      pcVar3 = local_40;
      _objc_alloc();
      pcVar2 = &cf_initWithUsername_message_;
      local_b8 = pcVar3;
      _NSSelectorFromString();
      pcVar3 = local_b8;
      local_c0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_respondsToSelector__026ca818,pcVar2);
      local_1b0 = local_b8;
      local_d1 = 0;
      local_e1 = 0;
      if (((ulong)pcVar3 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_init_026ca6a8);
        local_e1 = 1;
        local_e0 = local_1b0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,local_c0,local_68,0);
        _objc_retainAutoreleasedReturnValue();
        local_d1 = 1;
        local_d0 = local_1b0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = local_1b0;
      if ((local_e1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_e0);
      }
      if ((local_d1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_d0);
      }
      if (local_c8 == (cfstringStruct *)0x0) {
        local_21 = 0;
        local_34 = 1;
      }
      else {
        pcVar2 = &cf_setContact_;
        _NSSelectorFromString();
        pcVar3 = &cf_setUsername_;
        local_f0 = pcVar2;
        _NSSelectorFromString();
        pcVar2 = &cf_setTitle_;
        local_f8 = pcVar3;
        _NSSelectorFromString();
        pcVar3 = &cf_setDesc_;
        local_100 = pcVar2;
        _NSSelectorFromString();
        pcVar2 = &cf_setMsgContent_;
        local_108 = pcVar3;
        _NSSelectorFromString();
        pcVar3 = &cf_setCustomIconImage_;
        local_110 = pcVar2;
        _NSSelectorFromString();
        pcVar2 = &cf_setMessage_;
        local_118 = pcVar3;
        _NSSelectorFromString();
        pcVar3 = &cf_setScene_;
        local_120 = pcVar2;
        _NSSelectorFromString();
        pcVar2 = &cf_setHideDetailContent_;
        local_128 = pcVar3;
        _NSSelectorFromString();
        pcVar3 = &cf_setHideIcon_;
        local_130 = pcVar2;
        _NSSelectorFromString();
        pcVar2 = local_c8;
        local_138 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,local_f0);
        if (((ulong)pcVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_f0,local_70);
        }
        pcVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,local_f8);
        if (((ulong)pcVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_f8,local_68);
        }
        pcVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,local_100)
        ;
        if (((ulong)pcVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_100,local_58);
        }
        pcVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,local_108)
        ;
        if (((ulong)pcVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_108,local_60);
        }
        pcVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,local_110)
        ;
        if (((ulong)pcVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_110,local_60);
        }
        pcVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_notificationDisguiseAvatarImage_026a6870);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        local_140 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((((ulong)pcVar2 & 1) != 0) &&
           (pcVar2 = local_c8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_c8,PTR_s_respondsToSelector__026ca818,local_118),
           ((ulong)pcVar2 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_118,local_140);
        }
        pcVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,local_120)
        ;
        if (((ulong)pcVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_120,0);
        }
        pcVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,local_128)
        ;
        if (((ulong)pcVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_128,1);
        }
        pcVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,local_130)
        ;
        if (((ulong)pcVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_130,0);
        }
        pcVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,local_138)
        ;
        if (((ulong)pcVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_138,0);
        }
        (*(code *)PTR__objc_msgSend_02578628)(0x4018000000000000,local_30,local_48,local_c8);
        local_21 = 1;
        local_34 = 1;
        _objc_storeStrong(&local_140,0);
      }
      _objc_storeStrong(&local_c8);
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

