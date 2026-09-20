// FUN_00265440 @ 00265440

/* WARNING: Type propagation algorithm not settling */

void FUN_00265440(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_1b0;
  undefined *local_180;
  undefined *local_130;
  ulong local_100;
  bool local_b9;
  undefined *local_b8;
  bool local_a9;
  undefined *local_a8;
  bool local_99;
  undefined *local_98;
  undefined *local_90;
  ulong local_88 [3];
  byte local_69;
  ulong local_68;
  ulong local_60 [3];
  uint local_44;
  long local_40;
  undefined8 local_38;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = param_2;
  if (*(long *)(param_2 + 0x28) == DAT_028c94e0) {
    _CFAbsoluteTimeGetCurrent(0);
    uVar2 = local_30;
    if (DAT_02323d00 <= param_1 - DAT_028c94d8) {
      local_69 = 0;
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar2 & 1) == 0) {
        local_100 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_description_026ca5f8);
        _objc_retainAutoreleasedReturnValue();
        local_69 = 1;
        local_68 = local_100;
      }
      else {
        local_100 = local_30;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60[0] = local_100;
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      uVar2 = local_60[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_length_0269cca0);
      if (uVar2 == 0) {
        local_44 = 1;
      }
      else {
        local_88[2] = 0;
        local_88[1] = 0;
        uVar2 = local_60[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_dataUsingEncoding__026a12e8,4);
        _objc_retainAutoreleasedReturnValue();
        local_88[0] = uVar2;
        if (uVar2 == 0) {
          local_130 = (undefined *)0x0;
        }
        else {
          local_130 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                     PTR_s_JSONObjectWithData_options_error_026ca480,uVar2,0,0);
          _objc_retainAutoreleasedReturnValue();
          local_98 = local_130;
        }
        local_99 = uVar2 != 0;
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = local_130;
        if (local_99) {
          (*(code *)PTR__objc_release_02578630)(local_98);
        }
        puVar1 = local_90;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)puVar1 & 1) == 0) {
          _objc_storeStrong(local_88 + 2,local_60[0]);
        }
        else {
          puVar1 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          puVar4 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_a9 = ((ulong)puVar4 & 1) == 0;
          if (local_a9) {
            local_180 = (undefined *)0x0;
          }
          else {
            local_180 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
            _objc_retainAutoreleasedReturnValue();
            local_a8 = local_180;
          }
          local_a9 = !local_a9;
          _objc_storeStrong(local_88 + 2,local_180);
          if (local_a9) {
            (*(code *)PTR__objc_release_02578630)(local_a8);
          }
          (*(code *)PTR__objc_release_02578630)(puVar1);
          puVar1 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_objectForKeyedSubscript__0269d098,&cf_method);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          puVar4 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_b9 = ((ulong)puVar4 & 1) == 0;
          if (local_b9) {
            local_1b0 = (undefined *)0x0;
          }
          else {
            local_1b0 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90,PTR_s_objectForKeyedSubscript__0269d098,&cf_method);
            _objc_retainAutoreleasedReturnValue();
            local_b8 = local_1b0;
          }
          local_b9 = !local_b9;
          _objc_storeStrong(local_88 + 1,local_1b0);
          if (local_b9) {
            (*(code *)PTR__objc_release_02578630)(local_b8);
          }
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
        _objc_storeStrong(&local_90);
        _objc_storeStrong(local_88,0);
        uVar2 = local_88[2];
        (*(code *)PTR__objc_msgSend_02578628)(local_88[2],PTR_s_length_0269cca0);
        if (uVar2 != 0) {
          FUN_00265c80(*(undefined8 *)(param_2 + 0x20),local_88[2]);
        }
        local_44 = (uint)(uVar2 == 0);
        _objc_storeStrong(local_88 + 1);
        _objc_storeStrong(local_88 + 2,0);
      }
      _objc_storeStrong(local_60,0);
      if (local_44 == 0) {
        local_44 = 0;
      }
    }
    else {
      local_44 = 1;
    }
  }
  else {
    local_44 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

