// respondsToLongPress: @0x66ac8

/* Function Stack Size: 0x18 bytes */

void WCMYBImageBrowser::respondsToLongPress_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong local_160;
  ulong local_158;
  undefined8 local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  lVar3 = _objc_msgSend_state(local_c0,local_110);
  if (lVar3 == 1) {
    _objc_msgSend_delegate(0,local_b0,local_110);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar2 = _objc_opt_respondsToSelector(uVar4,"wcm_yb_imageBrowser:respondsToLongPressWithData:");
    (*(code *)PTR__objc_release_00110458)(uVar4);
    if ((uVar2 & 1) == 0) {
      _memset(auStack_108,0,0x40);
      _objc_msgSend_toolViewHandlers(local_b0,local_110);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      local_158 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar4,local_110,auStack_108,auStack_a8,0x10);
      if (local_158 != 0) {
        lVar3 = *local_f8;
        local_160 = 0;
        do {
          do {
            if (*local_f8 - lVar3 != 0) {
              _objc_enumerationMutation(*local_f8 - lVar3,uVar4);
            }
            local_c8 = *(undefined8 *)(local_100 + local_160 * 8);
            uVar6 = _objc_opt_respondsToSelector(local_c8,"wcm_yb_respondsToLongPress");
            if ((uVar6 & 1) != 0) {
              _objc_msgSend_wcm_yb_respondsToLongPress(local_c8,local_110);
            }
            local_160 = local_160 + 1;
          } while (local_160 < local_158);
          local_158 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                                (uVar4,local_110,auStack_108,auStack_a8,0x10);
          local_160 = 0;
        } while (local_158 != 0);
      }
      (*(code *)PTR__objc_release_00110458)(uVar4);
    }
    else {
      _objc_msgSend_delegate(local_b0,local_110);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      IVar1 = local_b0;
      _objc_msgSend_currentData(local_b0,local_110);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_wcm_yb_imageBrowser_respondsToLongPressWithData_(uVar4,local_110,IVar1);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar4);
    }
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

