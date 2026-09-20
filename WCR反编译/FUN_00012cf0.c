// FUN_00012cf0 @ 00012cf0

byte FUN_00012cf0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_130;
  ulong local_108;
  ulong local_e8;
  ulong local_90;
  ulong local_88;
  byte local_79;
  ulong local_78;
  ulong local_70;
  ulong local_68 [3];
  undefined4 local_4c;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar2 = local_30;
  local_40 = 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar2;
  do {
    uVar2 = local_48;
    if (local_48 == 0) {
LAB_00012e34:
      local_4c = 2;
      _objc_storeStrong(&local_48,0);
      uVar2 = local_40;
      FUN_0001a198(local_40,PTR_s_m_delegate_0269d0e0);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = uVar2;
      if (uVar2 == 0) {
        local_e8 = local_40;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68[0] = local_e8;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_68[0];
      FUN_0001a198(local_68[0],PTR_s_inputToolView_0269d0e8);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 0;
      local_108 = uVar2;
      if (uVar2 == 0) {
        local_108 = local_68[0];
        FUN_0001a198(local_68[0],PTR_s_m_inputToolView_0269d0f0);
        _objc_retainAutoreleasedReturnValue();
        local_78 = local_108;
      }
      local_79 = uVar2 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_108;
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_70;
      FUN_0001a198(local_70,PTR_s_textView_0269d0f8);
      _objc_retainAutoreleasedReturnValue();
      local_130 = uVar2;
      if (uVar2 == 0) {
        local_90 = local_70;
        FUN_0001a198(local_70,PTR_s_m_textView_0269d100);
        _objc_retainAutoreleasedReturnValue();
        local_130 = local_90;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_130;
      if (uVar2 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88);
      if ((uVar2 & 1) == 0) {
        local_21 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setText__026caa88,local_38);
        uVar2 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_respondsToSelector__026ca818,PTR_s_becomeFirstResponder_0269d108);
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_becomeFirstResponder_0269d108);
        }
        local_21 = 1;
      }
      local_4c = 1;
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(local_68,0);
      _objc_storeStrong(&local_40,0);
      _objc_storeStrong(&local_38,0);
      _objc_storeStrong(&local_30,0);
      return local_21 & 1;
    }
    pcVar1 = "BaseMsgContentViewController";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
    if ((uVar2 & 1) != 0) {
      _objc_storeStrong(&local_40,local_48);
      goto LAB_00012e34;
    }
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_48;
    local_48 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  } while( true );
}

