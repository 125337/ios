// buildToolView @0x631d4

/* Function Stack Size: 0x10 bytes */

void WCMYBImageBrowser::buildToolView(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong local_170;
  ulong local_168;
  undefined8 local_150;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_b8 = param_2;
  local_b0 = param_1;
  _memset(auStack_100,0,0x40);
  uVar3 = _objc_msgSend_toolViewHandlers(local_b0,local_150);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  local_168 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar3,local_150,auStack_100,auStack_a8,0x10);
  if (local_168 != 0) {
    lVar4 = *local_f0;
    local_170 = 0;
    do {
      do {
        if (*local_f0 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f0 - lVar4,uVar3);
        }
        local_c0 = *(undefined8 *)(local_f8 + local_170 * 8);
        _objc_msgSend_implementGetBaseInfoProtocol_(local_b0,local_150,local_c0);
        _objc_msgSend_implementOperateBrowserProtocol_(local_b0,local_150,local_c0);
        _objc_initWeak(auStack_108,local_b0);
        uVar2 = _objc_opt_respondsToSelector(local_c0,"setWcm_yb_currentData:");
        uVar1 = local_c0;
        if ((uVar2 & 1) != 0) {
          local_140 = PTR___NSConcreteStackBlock_001104f0;
          local_138 = 0xc2000000;
          local_134 = 0;
          local_130 = ___34__WCMYBImageBrowser_buildToolView__block_invoke;
          local_128 = &___block_descriptor_40_e8_32w_e28___<WCMYBIBDataProtocol>_8__0l;
          _objc_copyWeak(auStack_120,auStack_108);
          _objc_msgSend_setWcm_yb_currentData_(uVar1,local_150,&local_140);
          _objc_destroyWeak(auStack_120);
        }
        _objc_msgSend_wcm_yb_containerViewIsReadied(local_c0,local_150);
        _objc_msgSend_wcm_yb_hide_(local_c0,local_150,0);
        _objc_destroyWeak(auStack_108);
        local_170 = local_170 + 1;
      } while (local_170 < local_168);
      local_168 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar3,local_150,auStack_100,auStack_a8,0x10);
      local_170 = 0;
    } while (local_168 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar3);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

