// FUN_0060698c @ 0060698c

void FUN_0060698c(double param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  ulong local_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *local_68;
  double local_60;
  undefined4 local_54;
  ulong local_50;
  ulong local_48 [3];
  undefined8 local_30;
  ulong local_28;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_3;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_chatRoomContact_0269e730);
    _objc_retainAutoreleasedReturnValue();
    local_50 = 0;
    local_48[0] = uVar3;
    if ((uVar3 != 0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638),
       (uVar3 & 1) != 0)) {
      uVar4 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_valueForKey__0269d128,&cf_m_nsUsrName)
      ;
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_50;
      local_50 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    uVar3 = local_50;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
       uVar3 == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elS_De);
      local_54 = 1;
    }
    else {
      _CFAbsoluteTimeGetCurrent();
      uVar3 = DAT_028cb9a0;
      local_60 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb9a0,PTR_s_isEqualToString__0269ccc8,local_50);
      if (((uVar3 & 1) == 0) || (3.0 <= local_60 - DAT_028cb9a8)) {
        uVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
        uVar3 = DAT_028cb9a0;
        DAT_028cb9a0 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        DAT_028cb9a8 = local_60;
        puVar1 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_membersInRoom__0269ed78,local_50);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = PTR_WCRefineHelper_026ce000;
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_68 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_ck_W7Re)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        _objc_initWeak(auStack_70,local_28);
        puVar1 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_50;
        local_a0 = PTR___NSConcreteStackBlock_02578660;
        local_98 = 0xc2000000;
        local_94 = 0;
        local_90 = FUN_0061dd04;
        local_88 = &DAT_025797f0;
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = uVar3;
        _objc_copyWeak(auStack_78,auStack_70);
        _dispatch_async(puVar1,&local_a0);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _objc_destroyWeak(auStack_78);
        _objc_storeStrong(&local_80,0);
        _objc_destroyWeak(auStack_70);
        local_54 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_7ReL_NzTQ);
        local_54 = 1;
      }
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(local_48,0);
  }
  return;
}

