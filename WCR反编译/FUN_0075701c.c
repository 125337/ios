// FUN_0075701c @ 0075701c

void FUN_0075701c(double param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong local_b0;
  ulong local_a8;
  byte local_99;
  undefined *local_98;
  double local_90;
  ulong local_88;
  ulong local_80 [2];
  ulong local_70;
  ulong local_68;
  undefined1 local_59;
  ulong local_58;
  double local_50;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    uVar3 = local_28;
    _objc_getAssociatedObject(local_28,DAT_026f45e0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar3;
    FUN_00759118();
    local_59 = 0;
    bVar2 = false;
    uVar1 = 0.0 < param_1;
    local_50 = param_1;
    if ((bool)uVar1) {
      uVar3 = local_28;
      _objc_getAssociatedObject(local_28,DAT_026f45d8);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = uVar3 == 0;
      local_59 = uVar1;
      local_58 = uVar3;
      (*(code *)PTR__objc_release_02578630)();
      uVar1 = local_59;
    }
    local_59 = uVar1;
    if (bVar2) {
      FUN_00759300(local_50);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
      if (uVar3 != 0) {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_timeLabel);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        local_70 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar6);
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setText__026caa88,local_68);
        }
        _objc_storeStrong(&local_70,0);
      }
      local_2c = 1;
      _objc_storeStrong(&local_68,0);
    }
    else {
      uVar3 = local_28;
      _objc_getAssociatedObject(local_28,DAT_026f45d8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar3 == 0) {
        uVar3 = local_28;
        FUN_0074c70c(local_28,&cf_username);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        FUN_00743f78();
        _objc_retainAutoreleasedReturnValue();
        local_80[0] = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_80[0];
        FUN_00759550();
        _objc_retainAutoreleasedReturnValue();
        local_88 = uVar3;
        if (uVar3 == 0) {
          uVar4 = local_28;
          _objc_getAssociatedObject(local_28,DAT_026f45e8);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_88;
          local_88 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar3 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_objectForKeyedSubscript__0269d098,&cf_recordedAt);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar3);
          local_99 = 0;
          uVar3 = local_88;
          local_90 = param_1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_objectForKeyedSubscript__0269d098,&cf_username);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          FUN_00743f78();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar2 = true;
          if (((uVar5 & 1) != 0) && (bVar2 = true, param_1 = local_90, 0.0 < local_90)) {
            puVar6 = PTR__OBJC_CLASS___NSDate_026cdf88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
            _objc_retainAutoreleasedReturnValue();
            local_99 = 1;
            local_98 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            param_1 = param_1 - local_90;
            bVar2 = 60.0 < param_1;
          }
          if ((local_99 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_98);
          }
          (*(code *)PTR__objc_release_02578630)(uVar4);
          (*(code *)PTR__objc_release_02578630)(uVar3);
          if (bVar2) {
            _objc_storeStrong(&local_88);
            _objc_setAssociatedObject(local_28,DAT_026f45e8,0,1);
          }
        }
        else {
          _objc_setAssociatedObject(local_28,DAT_026f45e8,uVar3,1);
        }
        uVar3 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_objectForKeyedSubscript__0269d098,&cf_createTime);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        FUN_00759300(param_1);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
        if (uVar3 == 0) {
          local_2c = 1;
        }
        else {
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_timeLabel);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___UILabel_026cdfb8;
          local_b0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar6);
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setText__026caa88,local_a8);
          }
          _objc_storeStrong(&local_b0,0);
          local_2c = 0;
        }
        _objc_storeStrong(&local_a8);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(local_80,0);
      }
      else {
        local_2c = 1;
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

