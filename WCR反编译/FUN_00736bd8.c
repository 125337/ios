// FUN_00736bd8 @ 00736bd8

void FUN_00736bd8(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  double local_1b0;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  ulong local_130;
  ulong local_128;
  double local_120;
  undefined8 local_118;
  undefined8 local_110;
  double local_108;
  double local_100;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  ulong local_d8;
  ulong local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  ulong local_a8;
  ulong local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  undefined1 local_61;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  uVar1 = local_28;
  FUN_00730e70();
  if ((uVar1 & 1) == 0) {
    local_38 = 1;
  }
  else {
    uVar1 = local_28;
    FUN_007381d4();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    if (uVar1 == 0) {
      local_38 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_tableHeaderView_0269ea08);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_28;
      local_48 = uVar1;
      _objc_getAssociatedObject(local_28,&DAT_028cc515);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_28;
      local_50 = uVar2;
      _objc_getAssociatedObject(local_28,&DAT_028cc516);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_28;
      local_58 = uVar1;
      _objc_getAssociatedObject(local_28,&DAT_028cc517);
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_boolValue_026ca540);
      uVar1 = local_50;
      local_61 = (undefined1)uVar2;
      if ((DAT_028cc508 & 1) == 0) {
        if ((uVar2 & 1) != 0) {
          puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar1 & 1) != 0) {
            if (local_58 == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_frame_026ca640);
              local_1b0 = param_4;
              local_90 = param_1;
              local_88 = param_2;
              local_80 = param_3;
              local_78 = param_4;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_doubleValue_026ca608);
              local_1b0 = param_1;
            }
            uVar1 = local_50;
            puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
            local_70 = local_1b0;
            local_c8 = PTR___NSConcreteGlobalBlock_02578658;
            local_c0 = 0xd0800000;
            local_bc = 0;
            local_b8 = FUN_007383f4;
            local_b0 = &DAT_0257abc0;
            (*(code *)PTR__objc_retain_02578638)();
            uVar2 = local_40;
            local_a8 = uVar1;
            local_98 = local_70;
            (*(code *)PTR__objc_retain_02578638)();
            local_a0 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_performWithoutAnimation__0269e7e0,&local_c8);
            uVar1 = local_28;
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar1,&DAT_028cc517,puVar3,1);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            _objc_storeStrong(&local_a0);
            _objc_storeStrong(&local_a8,0);
          }
        }
        local_38 = 1;
      }
      else {
        if (local_48 == 0) {
          puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
          uVar2 = local_50;
          puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
          if ((uVar1 & 1) != 0) {
            local_f8 = PTR___NSConcreteGlobalBlock_02578658;
            local_f0 = 0xd0800000;
            local_ec = 0;
            local_e8 = FUN_00738668;
            local_e0 = &DAT_0257ab20;
            (*(code *)PTR__objc_retain_02578638)();
            uVar1 = local_40;
            local_d8 = uVar2;
            (*(code *)PTR__objc_retain_02578638)();
            local_d0 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_performWithoutAnimation__0269e7e0,&local_f8);
            uVar2 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_tableHeaderView_0269ea08);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = local_48;
            local_48 = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar1);
            _objc_storeStrong(&local_d0);
            _objc_storeStrong(&local_d8,0);
          }
        }
        if (local_48 == 0) {
          local_38 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
          uVar1 = local_50;
          local_120 = param_1;
          local_118 = param_2;
          local_110 = param_3;
          local_108 = param_4;
          local_100 = param_4;
          if ((local_50 == 0) || (uVar1 = local_50 - local_48, uVar1 != 0)) {
            _objc_setAssociatedObject(uVar1,local_28,&DAT_028cc515,local_48,1);
            uVar2 = local_28;
            uVar1 = local_58;
            if (local_100 <= 0.5) {
              puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
              uVar2 = local_28;
              if ((uVar1 & 1) == 0) {
                puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (0x404b800000000000,PTR__OBJC_CLASS___NSNumber_026ce038,
                           PTR_s_numberWithDouble__0269d6d0);
                _objc_retainAutoreleasedReturnValue();
                _objc_setAssociatedObject(uVar2,&DAT_028cc516,puVar3,1);
                (*(code *)PTR__objc_release_02578630)(puVar3);
              }
            }
            else {
              puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR__OBJC_CLASS___NSNumber_026ce038,
                         PTR_s_numberWithDouble__0269d6d0);
              _objc_retainAutoreleasedReturnValue();
              _objc_setAssociatedObject(uVar2,&DAT_028cc516,puVar3,1);
              (*(code *)PTR__objc_release_02578630)(puVar3);
            }
          }
          uVar1 = local_48;
          puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
          local_150 = PTR___NSConcreteGlobalBlock_02578658;
          local_148 = 0xd0800000;
          local_144 = 0;
          local_140 = FUN_00738890;
          local_138 = &DAT_0257ab20;
          (*(code *)PTR__objc_retain_02578638)();
          uVar2 = local_40;
          local_130 = uVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_128 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_performWithoutAnimation__0269e7e0,&local_150);
          uVar1 = local_28;
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar1,&DAT_028cc517,puVar3,1);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_storeStrong(&local_128);
          _objc_storeStrong(&local_130,0);
          local_38 = 0;
        }
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

