// refresh: @ 00f72a70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRFriendRelationProgressPresenter::refresh_
          (WCRFriendRelationProgressPresenter *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  float in_s0;
  cfstringStruct *local_140;
  undefined1 *local_138;
  undefined1 *local_128;
  ID local_d0;
  byte local_c1;
  cfstringStruct *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  cfstringStruct *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined4 local_64;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ID local_40 [2];
  SEL local_30;
  ID local_28;
  
  local_40[1] = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(local_40 + 1,param_3);
  puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar3 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_28;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_00f73124;
    local_48 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_40[0] = IVar4;
    _dispatch_async(puVar3,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_64 = 1;
    _objc_storeStrong(local_40,0);
  }
  else {
    puVar3 = PTR_WCRefineFriendRelationChecker_026ceb00;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFriendRelationChecker_026ceb00,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isRunning_026aca10);
    if (((ulong)puVar3 & 1) == 0) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_presented_026aca30);
      if ((IVar4 & 1) == 0) {
        local_64 = 1;
      }
      else {
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toast_026aca18);
        _objc_retainAutoreleasedReturnValue();
        local_d0 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setToast__026aca28,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPresented__026aca40,0);
        puVar5 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_status_026a1830);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = false;
        if (((ulong)puVar6 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_progress_026a6d78);
          bVar1 = 0.999 <= in_s0;
        }
        (*(code *)PTR__objc_release_02578630)(puVar5);
        if (bVar1) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_finishWithText_success_completio_026a1728,0,1);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_dismiss_026a5668);
        }
        _objc_storeStrong(&local_d0,0);
        local_64 = 0;
      }
    }
    else {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toast_026aca18);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (IVar4 == 0) {
        puVar3 = PTR_WCRefineProgressToast_026ce468;
        _objc_alloc();
        in_s0 = 0.0;
        (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setToast__026aca28);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_presented_026aca30);
      if ((IVar4 & 1) == 0) {
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toast_026aca18);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_progressTotalCount_026aca38);
        local_7c = 1;
        local_128 = puVar5;
        if ((long)puVar5 < 1) {
          local_128 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
        }
        local_88 = local_128;
        local_78 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_showWithTotalCount__026a1630,local_128);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPresented__026aca40,1);
      }
      puVar5 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_progressCompletedCount_026aca48);
      puVar6 = local_70;
      local_90 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_progressTotalCount_026aca38);
      local_c1 = 0;
      local_98 = puVar6;
      if (puVar6 == (undefined1 *)0x0) {
        local_140 = &cf_0_0;
      }
      else {
        local_a8 = local_90;
        local_138 = puVar6;
        if (local_90 < puVar6) {
          local_138 = local_90;
        }
        local_b8 = local_138;
        local_140 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        local_b0 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lu__lu)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_c1 = 1;
        local_c0 = local_140;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = local_140;
      if ((local_c1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_c0);
      }
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_toast_026aca18);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_progress_026a6d78);
      (*(code *)PTR__objc_msgSend_02578628)
                ((double)in_s0,IVar4,PTR_s_updateProgress_displayText__026aca50,local_a0);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      local_64 = 1;
      _objc_storeStrong(&local_a0,0);
    }
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(local_40 + 1,0);
  return;
}

