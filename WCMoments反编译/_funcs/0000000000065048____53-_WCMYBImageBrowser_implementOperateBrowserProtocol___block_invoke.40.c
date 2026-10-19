// ___53-[WCMYBImageBrowser_implementOperateBrowserProtocol:]_block_invoke.40 @0x65048

void ___53__WCMYBImageBrowser_implementOperateBrowserProtocol___block_invoke_40
               (long param_1,byte param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong local_148;
  ulong local_140;
  undefined8 local_138;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined4 local_cc;
  long local_c8;
  long local_c0;
  byte local_b1;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_c0 = param_1;
  local_b1 = param_2;
  local_b0 = param_1;
  local_c8 = _objc_loadWeakRetained(param_1 + 0x20);
  if (local_c8 == 0) {
    local_cc = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    _objc_msgSend_toolViewHandlers(local_c8,local_138);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    local_140 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar1,local_138,auStack_118,auStack_a8,0x10);
    if (local_140 != 0) {
      lVar2 = *local_108;
      local_148 = 0;
      do {
        do {
          if (*local_108 - lVar2 != 0) {
            _objc_enumerationMutation(*local_108 - lVar2,uVar1);
          }
          local_d8 = *(undefined8 *)(local_110 + local_148 * 8);
          _objc_msgSend_wcm_yb_hide_(local_d8,local_138,local_b1 & 1);
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar1,local_138,auStack_118,auStack_a8,0x10);
        local_148 = 0;
      } while (local_140 != 0);
    }
    (*(code *)PTR__objc_release_00110458)(uVar1);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

