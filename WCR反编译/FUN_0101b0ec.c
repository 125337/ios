// FUN_0101b0ec @ 0101b0ec

void FUN_0101b0ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_130;
  undefined *local_118;
  undefined *local_e0;
  undefined *local_a8;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  int local_4c;
  long local_48;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = param_1;
  if ((local_40 == 0) || (local_38 != (undefined *)0x0)) {
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_statusCode_026a1578);
    local_58 = puVar1;
    if ((299 < (long)puVar1) && ((long)puVar1 < 400)) {
      puVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_allHeaderFields_026aaec0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_69 = 0;
      local_79 = 0;
      local_e0 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_e0 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_allHeaderFields_026aaec0);
        _objc_retainAutoreleasedReturnValue();
        local_69 = 1;
        local_68 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_78 = local_e0;
      }
      local_79 = puVar2 == (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_e0;
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_60;
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((((ulong)puVar1 & 1) == 0) ||
         (puVar1 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
         puVar1 == (undefined *)0x0)) {
        local_4c = 0;
      }
      else {
        puVar1 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasPrefix__0269d320,&cf_http);
        if (((ulong)puVar1 & 1) == 0) {
          puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,
                     *(undefined8 *)(param_1 + 0x20));
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
          local_88 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString_relativeToURL__026abc50,
                     local_60,puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_118 = puVar1;
          if (puVar1 == (undefined *)0x0) {
            local_118 = local_60;
          }
          _objc_storeStrong(&local_60,local_118);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          _objc_storeStrong(&local_88,0);
        }
        puVar1 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_containsString__0269d0b0,&cf_open_weixin_qq_com);
        if (((ulong)puVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x38),PTR_s_resolveRedirectHop_hop_completio_026adca8
                     ,local_60,*(long *)(param_1 + 0x30) + 1,*(undefined8 *)(param_1 + 0x28));
          local_4c = 1;
        }
        else {
          if (*(long *)(param_1 + 0x28) != 0) {
            (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
                      (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
          }
          local_4c = 1;
        }
      }
      _objc_storeStrong(&local_60,0);
      if (local_4c != 0) goto LAB_0101b790;
    }
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_URL_026a1c90);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (puVar3 == (undefined *)0x0) {
      local_130 = *(undefined **)(param_1 + 0x20);
    }
    else {
      local_98 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_URL_026a1c90);
      _objc_retainAutoreleasedReturnValue();
      local_130 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_a8 = local_130;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = local_130;
    if (puVar3 != (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),local_90,local_30,0)
      ;
    }
    _objc_storeStrong(&local_90,0);
    local_4c = 0;
  }
  else {
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0,local_40);
    }
    local_4c = 1;
  }
LAB_0101b790:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

