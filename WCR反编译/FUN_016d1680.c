// FUN_016d1680 @ 016d1680

byte FUN_016d1680(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_c0;
  uint local_88;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined *local_60;
  ulong local_58;
  undefined4 local_50;
  byte local_49;
  ulong local_48;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_49 = 0;
  puVar1 = PTR_WCRefineMessageRepositoryStore_026ce120;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_isCompositeCapturePending_026b2e00);
  local_88 = 1;
  if (((ulong)puVar1 & 1) != 0) {
    uVar2 = local_30;
    FUN_016d1218();
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_88 = (uint)uVar2 ^ 1;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if ((local_88 & 1) == 0) {
    uVar2 = local_30;
    _objc_getAssociatedObject(local_30,&DAT_028e3f10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar2 == 0) {
      uVar2 = local_30;
      FUN_016d2148();
      _objc_retainAutoreleasedReturnValue();
      local_60 = PTR_s_onEditMessage__026a4370;
      uVar3 = local_30;
      local_58 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_onEditMessage__026a4370);
      if ((uVar3 & 1) == 0) {
        local_c0 = 0;
      }
      else {
        local_c0 = local_30;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_c0;
      if ((local_c0 == 0) &&
         (uVar2 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_m_delegate_0269d0e0),
         (uVar2 & 1) != 0)) {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_delegate_0269d0e0);
        _objc_retainAutoreleasedReturnValue();
        local_70 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,local_60);
        if ((uVar2 & 1) != 0) {
          _objc_storeStrong(&local_68,local_70);
        }
        _objc_storeStrong(&local_70,0);
      }
      if ((local_58 == 0) || (local_68 == 0)) {
        local_21 = 0;
        local_50 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,local_60,local_58);
        uVar2 = local_30;
        FUN_016d2674();
        _objc_retainAutoreleasedReturnValue();
        local_78 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_removeAllObjects_0269d508);
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_removeAllObjects_0269d508);
        }
        uVar2 = local_30;
        FUN_016d2cf0();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_30;
        puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar2,&DAT_028e3f10,puVar1,1);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        FUN_016d1ccc(local_30);
        local_21 = 1;
        local_50 = 1;
        _objc_storeStrong(&local_78,0);
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_58,0);
    }
    else {
      FUN_016d1ccc(local_30);
      local_21 = 1;
      local_50 = 1;
    }
  }
  else {
    local_21 = 0;
    local_50 = 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

