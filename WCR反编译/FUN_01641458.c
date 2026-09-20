// FUN_01641458 @ 01641458

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01641458(long param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 local_168;
  undefined *local_160;
  undefined *local_138;
  undefined *local_128;
  bool local_d1;
  undefined8 local_d0;
  undefined *local_c0;
  undefined *local_b0;
  ulong local_a8;
  byte local_99;
  undefined *local_98;
  byte local_89;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  byte local_59;
  undefined *local_58;
  int local_4c;
  ulong local_48;
  long local_40;
  byte local_31;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_31 = param_3;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_toolbarButtonWithTitle__026b1d70,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar2;
  if (uVar2 == 0) {
    local_4c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x4024000000000000);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar4 = 0x3ff0000000000000;
    if ((local_31 & 1) == 0) {
      uVar4 = 0;
    }
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_59 = 0;
    local_69 = 0;
    local_79 = 0;
    local_128 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if ((local_31 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = local_128;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemYellowColor_0269f758);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(0x3fd6666666666666);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_128;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setBackgroundColor__026ca888,local_128);
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    local_89 = 0;
    local_99 = 0;
    local_138 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if ((local_31 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      local_99 = 1;
      local_98 = local_138;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemYellowColor_0269f758);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = local_138;
    }
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_CGColor_026ca470);
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_viewWithTag__026cabe0,0x322);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    local_a8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar2 & 1) != 0) {
      bVar1 = (local_31 & 1) == 0;
      local_160 = PTR__OBJC_CLASS___UIColor_026cdf78;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = local_160;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemYellowColor_0269f758);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = local_160;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setTextColor__026caa98,local_160);
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_c0);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_b0);
      }
      local_d1 = (local_31 & 1) == 0;
      if (local_d1) {
        local_168 = local_30;
      }
      else {
        local_168 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_stringByAppendingString__0269d398,&cf___);
        _objc_retainAutoreleasedReturnValue();
        local_d0 = local_168;
      }
      local_d1 = !local_d1;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setText__026caa88,local_168);
      if (local_d1) {
        (*(code *)PTR__objc_release_02578630)(local_d0);
      }
    }
    _objc_storeStrong(&local_a8,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48,0);
  if (local_4c == 0) {
    local_4c = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

