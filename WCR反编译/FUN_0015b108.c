// FUN_0015b108 @ 0015b108

void FUN_0015b108(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint local_1cc;
  byte local_1b8;
  ulong local_168;
  ulong local_130;
  ulong local_f8;
  ulong local_f0;
  undefined *local_e8;
  ulong local_e0;
  byte local_d5;
  byte local_d4;
  byte local_d3;
  undefined1 local_d2;
  byte local_d1;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  byte local_b1;
  ulong local_b0;
  undefined8 local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  undefined8 local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  undefined4 local_68;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_48 = 0;
  _objc_storeStrong(&local_48,param_1);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_2);
  local_58 = 0;
  uVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getMsgContentViewController_0269f638)
  ;
  if ((uVar1 & 1) != 0) {
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getMsgContentViewController_0269f638);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_58;
    local_58 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if (local_58 == 0) {
    local_68 = 1;
  }
  else {
    FUN_0015bc3c(local_58);
    uVar1 = local_50;
    FUN_0015bdc0();
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
    local_88 = 10;
    local_130 = uVar1;
    if (9 < uVar1) {
      local_130 = 10;
    }
    local_90 = local_130;
    local_78 = local_130;
    local_b1 = 0;
    uVar2 = local_70;
    local_80 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
    if (local_130 < uVar2) {
      local_38 = 0;
      local_40 = local_78;
      local_30 = 0;
      local_28 = local_78;
      local_a8 = 0;
      local_a0 = local_78;
      local_168 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_subarrayWithRange__0269d848,0,local_78);
      _objc_retainAutoreleasedReturnValue();
      local_b1 = 1;
      local_b0 = local_168;
    }
    else {
      local_168 = local_70;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = local_168;
    if ((local_b1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    uVar1 = local_98;
    FUN_0015c624();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_58;
    local_c0 = uVar1;
    FUN_0015cbfc();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_58;
    local_c8 = uVar2;
    FUN_0015cca8();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_58;
    local_d0 = uVar1;
    FUN_0015d640();
    local_d1 = (byte)uVar2;
    uVar1 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_count_0269cfe0);
    if (uVar1 == 0) {
      local_d2 = true;
      if ((local_d1 & 1) == 0) {
        uVar1 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
        local_d2 = true;
        if (uVar1 == 0) {
          uVar1 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
          local_d2 = uVar1 != 0;
        }
      }
      if ((bool)local_d2 == false) {
        FUN_0015d8d0(local_58,&cf___);
        local_68 = 1;
      }
      else {
        uVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,
                   PTR_s_hideBizTipsBar_animated__0269f640);
        if ((uVar1 & 1) != 0) {
          local_d3 = local_d1 & 1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_hideBizTipsBar_animated__0269f640,1,local_d3);
        }
        FUN_0015d8d0(local_58,&cf___);
        local_68 = 1;
      }
    }
    else {
      local_1b8 = 0;
      if (local_c8 != 0) {
        uVar1 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isEqualToString__0269ccc8,local_c0);
        local_1b8 = (byte)uVar1;
      }
      local_d4 = local_1b8 & 1;
      uVar1 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
      local_1cc = 0;
      if (uVar1 != 0) {
        uVar1 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isEqualToString__0269ccc8,local_c0);
        local_1cc = (uint)uVar1;
      }
      local_d5 = (byte)local_1cc & 1;
      if (((local_1cc & 1) == 0) && (((local_d1 & 1) == 0 || ((local_d4 & 1) == 0)))) {
        local_e0 = 0;
        uVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getGroupContact_0269f648);
        if ((uVar1 & 1) != 0) {
          uVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getGroupContact_0269f648);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_e0;
          local_e0 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        if ((local_e0 == 0) &&
           (uVar1 = local_48,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0),
           (uVar1 & 1) != 0)) {
          uVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_GetContact_0269d2c0);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_e0;
          local_e0 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_e8 = puVar3;
        for (local_f0 = 0; uVar1 = local_f0, uVar2 = local_98,
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_count_0269cfe0), uVar1 < uVar2;
            local_f0 = local_f0 + 1) {
          uVar1 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR_s_objectAtIndexedSubscript__0269cc78,local_f0);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR_s_objectAtIndexedSubscript__0269cc78,local_f0);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar2;
          FUN_0015e304();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar1;
          FUN_0015d9dc();
          _objc_retainAutoreleasedReturnValue();
          local_f8 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar4);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_release_02578630)(uVar1);
          if (local_f8 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_f8);
          }
          _objc_storeStrong(&local_f8,0);
        }
        puVar3 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
        if (puVar3 == (undefined *)0x0) {
          local_68 = 1;
        }
        else {
          uVar1 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_respondsToSelector__026ca818,
                     PTR_s_showMultipleTipsBarWithItems__0269f650);
          if ((uVar1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_showMultipleTipsBarWithItems__0269f650,local_e8);
            FUN_0015d8d0(local_58,local_c0);
          }
          local_68 = 0;
        }
        _objc_storeStrong(&local_e8);
        _objc_storeStrong(&local_e0,0);
      }
      else {
        FUN_0015d8d0(local_58,local_c0);
        local_68 = 1;
      }
    }
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  return;
}

