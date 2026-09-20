// compareEntry:with: @ 01f17aa0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

long_long WCRefineToDoStore::compareEntry_with_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  long_long lVar5;
  long lVar6;
  long_long lVar7;
  long local_190;
  long_long local_178;
  uint local_11c;
  long local_c8;
  long local_c0;
  byte local_b1;
  long_long local_b0;
  long_long local_a8;
  byte local_99;
  long local_98;
  byte local_89;
  long_long local_88;
  byte local_79;
  long local_78;
  undefined1 local_69;
  long local_68;
  undefined4 local_5c;
  ID local_58;
  ID local_50;
  long local_48;
  long_long local_40;
  SEL local_38;
  ID local_30;
  long_long local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  IVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_rankForEntry__026c82a0,local_40);
  IVar4 = local_30;
  local_50 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_rankForEntry__026c82a0,local_48);
  local_58 = IVar4;
  if (local_50 == IVar4) {
    lVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_startTime_026c74b8);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 0;
    bVar2 = false;
    uVar1 = lVar5 != 0;
    if ((bool)uVar1) {
      lVar6 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_startTime_026c74b8);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = lVar6 != 0;
      local_69 = uVar1;
      local_68 = lVar6;
      (*(code *)PTR__objc_release_02578630)(lVar6);
      uVar1 = local_69;
    }
    local_69 = uVar1;
    (*(code *)PTR__objc_release_02578630)(lVar5);
    if (bVar2) {
      lVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_startTime_026c74b8);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_startTime_026c74b8);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_compare__0269cd10);
      local_28 = lVar7;
      (*(code *)PTR__objc_release_02578630)(lVar6);
      (*(code *)PTR__objc_release_02578630)(lVar5);
      local_5c = 1;
    }
    else {
      lVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_dueDate_026c74b0);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 0;
      local_89 = 0;
      local_99 = 0;
      local_11c = 0;
      if (lVar5 != 0) {
        lVar6 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_dueDate_026c74b0);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_30;
        local_79 = 1;
        local_11c = 0;
        local_78 = lVar6;
        if (lVar6 != 0) {
          lVar7 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_dueDate_026c74b0);
          _objc_retainAutoreleasedReturnValue();
          local_89 = 1;
          lVar6 = local_48;
          local_88 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_dueDate_026c74b0);
          _objc_retainAutoreleasedReturnValue();
          local_99 = 1;
          local_98 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isDate_sameDayAs__026c82a8,lVar7);
          local_11c = (uint)IVar3 ^ 1;
        }
      }
      if ((local_99 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      if ((local_89 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      (*(code *)PTR__objc_release_02578630)(lVar5);
      if ((local_11c & 1) == 0) {
        lVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_completedAt_026c81b8);
        _objc_retainAutoreleasedReturnValue();
        local_b1 = 0;
        local_178 = lVar5;
        if (lVar5 == 0) {
          local_178 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_createdAt_026c81f8);
          _objc_retainAutoreleasedReturnValue();
          local_b0 = local_178;
        }
        local_b1 = lVar5 == 0;
        (*(code *)PTR__objc_retain_02578638)();
        local_a8 = local_178;
        if ((local_b1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_b0);
        }
        (*(code *)PTR__objc_release_02578630)(lVar5);
        lVar6 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_completedAt_026c81b8);
        _objc_retainAutoreleasedReturnValue();
        local_190 = lVar6;
        if (lVar6 == 0) {
          local_c8 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_createdAt_026c81f8);
          _objc_retainAutoreleasedReturnValue();
          local_190 = local_c8;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_c0 = local_190;
        if (lVar6 == 0) {
          (*(code *)PTR__objc_release_02578630)(local_c8);
        }
        (*(code *)PTR__objc_release_02578630)(lVar6);
        if ((local_a8 == 0) || (local_c0 == 0)) {
          if (local_a8 == 0) {
            if (local_c0 == 0) {
              local_28 = 0;
            }
            else {
              local_28 = 1;
            }
          }
          else {
            local_28 = 0xffffffffffffffff;
          }
        }
        else {
          lVar5 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_compare__0269cd10,local_c0);
          local_28 = lVar5;
        }
        local_5c = 1;
        _objc_storeStrong(&local_c0);
        _objc_storeStrong(&local_a8,0);
      }
      else {
        lVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_dueDate_026c74b0);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_dueDate_026c74b0);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_compare__0269cd10);
        local_28 = lVar7;
        (*(code *)PTR__objc_release_02578630)(lVar6);
        (*(code *)PTR__objc_release_02578630)(lVar5);
        local_5c = 1;
      }
    }
  }
  else {
    local_28 = 1;
    if ((long)local_50 < (long)IVar4) {
      local_28 = 0xffffffffffffffff;
    }
    local_5c = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_28;
}

