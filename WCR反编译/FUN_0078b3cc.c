// FUN_0078b3cc @ 0078b3cc

byte FUN_0078b3cc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58 [3];
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    local_21 = 0;
    local_34 = 1;
  }
  else {
    uVar1 = local_30;
    FUN_00788488();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    if (uVar1 == 0) {
      local_21 = 0;
      local_34 = 1;
    }
    else {
      uVar1 = local_30;
      FUN_0078d968();
      _objc_retainAutoreleasedReturnValue();
      local_58[0] = uVar1;
      if (uVar1 == 0) {
        local_21 = 0;
        local_34 = 1;
      }
      else {
        local_60 = 0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_m_delegate_0269d0e0);
        if ((uVar1 & 1) != 0) {
          uVar2 = local_58[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_m_delegate_0269d0e0);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_60;
          local_60 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        if (local_60 == 0) {
          uVar1 = local_58[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58[0],PTR_s_respondsToSelector__026ca818,PTR_s_delegate_0269e808);
          if ((uVar1 & 1) != 0) {
            uVar2 = local_58[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_delegate_0269e808);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = local_60;
            local_60 = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar1);
          }
        }
        uVar1 = local_58[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58[0],PTR_s_respondsToSelector__026ca818,PTR_s_onEditMessage__026a4370);
        puVar3 = PTR___dispatch_main_q_02578680;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_onEditMessage__026a4370);
          puVar3 = PTR___dispatch_main_q_02578680;
          if ((uVar1 & 1) == 0) {
            local_21 = 0;
            local_34 = 1;
          }
          else {
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            uVar1 = local_60;
            local_c8 = PTR___NSConcreteStackBlock_02578660;
            local_c0 = 0xc2000000;
            local_bc = 0;
            local_b8 = FUN_0078dba8;
            local_b0 = &DAT_02578f80;
            (*(code *)PTR__objc_retain_02578638)();
            uVar2 = local_40;
            local_a8 = uVar1;
            (*(code *)PTR__objc_retain_02578638)();
            uVar1 = local_58[0];
            local_a0 = uVar2;
            (*(code *)PTR__objc_retain_02578638)();
            local_98 = uVar1;
            _dispatch_async(puVar3,&local_c8);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            local_21 = 1;
            local_34 = 1;
            _objc_storeStrong(&local_98);
            _objc_storeStrong(&local_a0,0);
            _objc_storeStrong(&local_a8,0);
          }
        }
        else {
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_58[0];
          local_90 = PTR___NSConcreteStackBlock_02578660;
          local_88 = 0xc2000000;
          local_84 = 0;
          local_80 = FUN_0078db10;
          local_78 = &DAT_02578e60;
          (*(code *)PTR__objc_retain_02578638)();
          uVar2 = local_40;
          local_70 = uVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_68 = uVar2;
          _dispatch_async(puVar3,&local_90);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_21 = 1;
          local_34 = 1;
          _objc_storeStrong(&local_68);
          _objc_storeStrong(&local_70,0);
        }
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(local_58,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

