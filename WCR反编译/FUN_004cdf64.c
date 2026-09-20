// FUN_004cdf64 @ 004cdf64

/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_004cdf64(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined *puVar5;
  ulong local_160;
  ulong local_128;
  bool local_b1;
  ulong local_b0;
  long local_a8;
  ulong local_a0;
  ulong local_98;
  char *local_90;
  char *local_88;
  byte local_79;
  ulong local_78;
  long local_70;
  ulong local_68;
  char *local_60;
  char *local_58;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_28 = 0;
    local_34 = 1;
  }
  else {
    uVar2 = local_30;
    _objc_getAssociatedObject(local_30,&DAT_028cac90);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    if (uVar2 == 0) {
      pcVar1 = "MainFrameTableView";
      FUN_004cf744();
      local_58 = pcVar1;
      if ((pcVar1 == (char *)0x0) ||
         (uVar2 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar1),
         (uVar2 & 1) == 0)) {
        pcVar1 = "ContactsViewController";
        FUN_004cf744();
        pcVar4 = "FindFriendEntryViewController";
        local_88 = pcVar1;
        FUN_004cf744();
        local_98 = 0;
        uVar2 = local_30;
        local_90 = pcVar4;
        (*(code *)PTR__objc_retain_02578638)();
        local_a0 = uVar2;
        for (local_a8 = 0; local_a8 < 0x18 && local_a0 != 0; local_a8 = local_a8 + 1) {
          if ((local_88 != (char *)0x0) &&
             (uVar2 = local_a0,
             (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_isKindOfClass__0269cd68,local_88),
             (uVar2 & 1) != 0)) {
            local_98 = 2;
            break;
          }
          if ((local_90 != (char *)0x0) &&
             (uVar2 = local_a0,
             (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_isKindOfClass__0269cd68,local_90),
             (uVar2 & 1) != 0)) {
            local_98 = 3;
            break;
          }
          uVar2 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_nextResponder_0269d0d8);
          local_b1 = (uVar2 & 1) == 0;
          if (local_b1) {
            local_160 = 0;
          }
          else {
            local_160 = local_a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_nextResponder_0269d0d8);
            _objc_retainAutoreleasedReturnValue();
            local_b0 = local_160;
          }
          local_b1 = !local_b1;
          _objc_storeStrong(&local_a0,local_160);
          if (local_b1) {
            (*(code *)PTR__objc_release_02578630)(local_b0);
          }
        }
        uVar2 = local_30;
        if (local_98 != 0) {
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_98)
          ;
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar2,&DAT_028cac90,puVar5,1);
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
        local_28 = local_98;
        local_34 = 1;
        _objc_storeStrong(&local_a0,0);
      }
      else {
        pcVar1 = "NewMainFrameViewController";
        FUN_004cf744();
        uVar2 = local_30;
        local_60 = pcVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = uVar2;
        for (local_70 = 0; local_70 < 0x18 && local_68 != 0; local_70 = local_70 + 1) {
          if ((local_60 != (char *)0x0) &&
             (uVar3 = local_68,
             (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isKindOfClass__0269cd68,local_60),
             uVar2 = local_30, (uVar3 & 1) != 0)) {
            puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,1);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar2,&DAT_028cac90,puVar5,1);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            local_28 = 1;
            goto LAB_004ce300;
          }
          local_79 = 0;
          uVar2 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_nextResponder_0269d0d8);
          if ((uVar2 & 1) == 0) {
            local_128 = 0;
          }
          else {
            local_128 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_nextResponder_0269d0d8);
            _objc_retainAutoreleasedReturnValue();
            local_79 = 1;
            local_78 = local_128;
          }
          _objc_storeStrong(&local_68,local_128);
          if ((local_79 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_78);
          }
        }
        local_28 = 0;
LAB_004ce300:
        local_34 = 1;
        _objc_storeStrong(&local_68,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_integerValue_026ca750);
      local_34 = 1;
      local_28 = uVar2;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_28;
}

