// installSTDERRCaptureIfNeeded @ 0091ca84

/* Function Stack Size: 0x10 bytes */

void WCNavigationMonitor::installSTDERRCaptureIfNeeded(ID param_1,SEL param_2)

{
  bool bVar1;
  dispatch_object_t dVar2;
  int iVar3;
  ID IVar4;
  undefined *puVar5;
  dispatch_queue_t queue;
  uintptr_t handle;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  int local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined1 auStack_88 [8];
  int local_80;
  dispatch_object_t local_78;
  undefined1 auStack_70 [8];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = param_2;
  local_38 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  IVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isSTDERRRedirectInstalled_026aa470);
  if ((IVar4 & 1) == 0) {
    local_30 = DAT_02324398;
    iVar3 = _pipe((int)&stack0xfffffffffffffff0 + -0x20);
    if (iVar3 == 0) {
      local_54 = (int)local_30;
      local_58 = local_30._4_4_;
      local_5c = _dup(2);
      if (local_5c < 0) {
        _close(local_54);
        _close(local_58);
        local_50 = 1;
      }
      else {
        local_60 = _fcntl(local_54,3);
        if (-1 < local_60) {
          _fcntl(local_54,4);
        }
        local_64 = _fcntl(local_5c,3);
        if (-1 < local_64) {
          _fcntl(local_5c,4);
        }
        local_68 = _fcntl(local_58,3);
        if (-1 < local_68) {
          _fcntl(local_58,4);
        }
        iVar3 = _dup2(local_58,2);
        if (iVar3 < 0) {
          _close(local_54);
          _close(local_58);
          _close(local_5c);
          local_50 = 1;
        }
        else {
          _close(local_58);
          _setvbuf(*(FILE **)PTR____stderrp_02578678,(char *)0x0,2,0);
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setStderrBackupFD__026aa478,local_5c)
          ;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_setStderrPipeReadFD__026aa480,local_54);
          puVar5 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setStderrLineBuffer__026aa488);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_setIsSTDERRRedirectInstalled__026aa490,1);
          _objc_initWeak(auStack_70,local_38);
          handle = (uintptr_t)local_54;
          queue = _dispatch_get_global_queue(0,0);
          _objc_retainAutoreleasedReturnValue();
          local_78._os_obj =
               (_os_object_s *)
               _dispatch_source_create
                         ((dispatch_source_type_t)PTR___dispatch_source_type_read_02578690,handle,0,
                          queue);
          (*(code *)PTR__objc_release_02578630)(queue);
          bVar1 = local_78._os_obj != (_os_object_s *)0x0;
          if (bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_setStderrReadSource__026aa4a0,local_78._os_obj);
            dVar2 = local_78;
            puVar5 = PTR___NSConcreteStackBlock_02578660;
            local_a8 = PTR___NSConcreteStackBlock_02578660;
            local_a0 = 0xc2000000;
            local_9c = 0;
            local_98 = FUN_0091d0b4;
            local_90 = &DAT_02581010;
            _objc_copyWeak(auStack_88,auStack_70);
            local_80 = local_54;
            _dispatch_source_set_event_handler(dVar2._os_obj,&local_a8);
            local_d0 = puVar5;
            local_c8 = 0xc0000000;
            local_c4 = 0;
            local_c0 = FUN_0091d290;
            local_b8 = &DAT_02581040;
            local_b0 = local_54;
            _dispatch_source_set_cancel_handler(local_78._os_obj,&local_d0);
            _dispatch_resume(local_78);
            _objc_destroyWeak(auStack_88);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_setIsSTDERRRedirectInstalled__026aa490,0);
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setStderrLineBuffer__026aa488,0);
            IVar4 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stderrBackupFD_026aa498);
            _dup2((int)IVar4,2);
            IVar4 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stderrBackupFD_026aa498);
            _close(IVar4 & 0xffffffff);
            _close(local_54);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_setStderrBackupFD__026aa478,0xffffffff);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_setStderrPipeReadFD__026aa480,0xffffffff);
          }
          local_50 = (uint)!bVar1;
          _objc_storeStrong(&local_78,0);
          _objc_destroyWeak(auStack_70);
          if (local_50 == 0) {
            local_50 = 0;
          }
        }
      }
    }
    else {
      local_50 = 1;
    }
  }
  else {
    local_50 = 1;
  }
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

