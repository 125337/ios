// FUN_00045e0c @ 00045e0c

void FUN_00045e0c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  dispatch_time_t dVar5;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  double local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_38;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = local_28 == (undefined *)0x0;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0 || bVar1) {
    local_38 = 1;
  }
  else {
    puVar2 = local_28;
    _objc_getAssociatedObject(local_28,DAT_026df710);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    if ((puVar2 == (undefined *)0x0) &&
       (puVar2 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_data_0269d850),
       ((ulong)puVar2 & 1) != 0)) {
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_data_0269d850);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_40;
      local_40 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_40 != (undefined *)0x0) {
        _objc_setAssociatedObject(local_28,DAT_026df710,local_40,1);
      }
    }
    puVar2 = local_40;
    FUN_00046514(local_40,PTR_s_m_isSender_0269d858);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_40;
      FUN_00046684();
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      FUN_0003102c();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      FUN_000366f8();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar4 & 1) == 0) {
        local_38 = 1;
      }
      else {
        if (local_48 != (undefined *)0x0) {
          _objc_setAssociatedObject(local_28,DAT_026df718,local_48,1);
        }
        puVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        FUN_0003102c();
        _objc_retainAutoreleasedReturnValue();
        local_50 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
        if (puVar2 == (undefined *)0x0) {
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__p);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_50;
          local_50 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        puVar2 = local_28;
        _objc_getAssociatedObject(local_28,DAT_026df720);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (puVar2 == (undefined *)0x0) {
          FUN_00035724();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          FUN_0003b818(0x40ac200000000000);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if (((ulong)puVar3 & 1) == 0) {
            local_38 = 1;
          }
          else {
            local_58 = DAT_02323c88;
            if (DAT_02323c88 < 0.0) {
              local_58 = 0.0;
            }
            dVar5 = _dispatch_time(0,(long)(local_58 * 1000000000.0));
            puVar2 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_48;
            local_88 = PTR___NSConcreteStackBlock_02578660;
            local_80 = 0xc2000000;
            local_7c = 0;
            local_78 = FUN_00047140;
            local_70 = &DAT_02578e60;
            (*(code *)PTR__objc_retain_02578638)();
            puVar4 = local_28;
            local_68 = puVar3;
            (*(code *)PTR__objc_retain_02578638)();
            local_60 = puVar4;
            _dispatch_after(dVar5,puVar2,&local_88);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            _objc_storeStrong(&local_60);
            _objc_storeStrong(&local_68,0);
            local_38 = 0;
          }
        }
        else {
          local_38 = 1;
        }
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48,0);
    }
    else {
      local_38 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

