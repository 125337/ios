// FUN_005881fc @ 005881fc

void FUN_005881fc(double param_1,ulong param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  ulong local_60;
  undefined *local_58;
  undefined4 local_50;
  byte local_49;
  ulong local_48 [3];
  undefined8 local_30;
  ulong local_28;
  
  local_30 = param_3;
  local_28 = param_2;
  _objc_getAssociatedObject(param_2,&DAT_028cb62c);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_2);
  if ((uVar3 & 1) == 0) {
    uVar3 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028cb62b);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_28;
    local_48[0] = uVar3;
    _objc_getAssociatedObject(local_28,&DAT_028cb62d);
    uVar2 = (uint)uVar4;
    _objc_retainAutoreleasedReturnValue();
    bVar1 = (byte)uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    local_49 = bVar1;
    FUN_00588bf0();
    if ((((uVar2 & 1) == 0) || (local_48[0] == 0)) || ((local_49 & 1) != 0)) {
      (*DAT_028cb5e0)(local_28,local_30);
      local_50 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_timeIntervalSinceNow_0269cd28);
      if (30.0 <= param_1) {
        _WCRefineCrashReporterBreadcrumb(&cf_moments_sched_create);
        uVar4 = local_28;
        FUN_005955a4(local_28,local_48[0]);
        uVar3 = local_28;
        if ((uVar4 & 1) == 0) {
          local_50 = 1;
        }
        else {
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar3,&DAT_028cb62c,puVar5,1);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          _objc_setAssociatedObject(local_28,&DAT_028cb62b,0,1);
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          uVar3 = local_48[0];
          FUN_0057c648();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_stringWithFormat__0269cca8,&cf__R__eNR_);
          _objc_retainAutoreleasedReturnValue();
          local_58 = puVar5;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_58);
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_respondsToSelector__026ca818,
                     PTR_s_setM_hasConfirmReturn__026a4db0);
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setM_hasConfirmReturn__026a4db0,1);
          }
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setHasClickDone__026a5558);
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHasClickDone__026a5558,1);
          }
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationItem_0269cf08);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_60 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar3 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_setEnabled__026ca938);
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setEnabled__026ca938,0);
          }
          _objc_initWeak(auStack_68,local_28);
          puVar5 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          local_90 = PTR___NSConcreteStackBlock_02578660;
          local_88 = 0xc2000000;
          local_84 = 0;
          local_80 = FUN_005958a0;
          local_78 = &DAT_02578da0;
          _objc_copyWeak(auStack_70,auStack_68);
          _dispatch_async(puVar5,&local_90);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_50 = 1;
          _objc_destroyWeak(auStack_70);
          _objc_destroyWeak(auStack_68);
          _objc_storeStrong(&local_60);
          _objc_storeStrong(&local_58,0);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Se_ZfNS_MR);
        local_50 = 1;
      }
    }
    _objc_storeStrong(local_48,0);
  }
  return;
}

