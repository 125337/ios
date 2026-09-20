// FUN_01599aa8 @ 01599aa8

void FUN_01599aa8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *local_138;
  undefined *local_128;
  cfstringStruct *local_108;
  ulong local_f0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  byte local_91;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  uint local_54;
  ulong local_50;
  long local_48;
  cfstringStruct *local_40;
  ulong local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  uVar3 = local_38;
  puVar2 = PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_statusCode_026a1578);
  }
  local_50 = local_f0;
  if ((local_40 == (cfstringStruct *)0x0) &&
     (lVar8 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar8 != 0)) {
    if ((long)local_50 < 400) {
      puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_JSONObjectWithData_options_error_026ca480,local_30,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_items);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      puVar6 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
      local_71 = 0;
      local_81 = 0;
      local_91 = 0;
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_voices);
        _objc_retainAutoreleasedReturnValue();
        local_81 = 1;
        puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_80 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
        if (((ulong)puVar5 & 1) == 0) {
          local_138 = (undefined *)0x0;
        }
        else {
          local_138 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_voices);
          _objc_retainAutoreleasedReturnValue();
          local_91 = 1;
          local_90 = local_138;
        }
        local_128 = local_138;
      }
      else {
        local_128 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_items);
        _objc_retainAutoreleasedReturnValue();
        local_71 = 1;
        local_70 = local_128;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_128;
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      if ((local_81 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      if ((local_71 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSPredicate_026ce8f0;
      bVar1 = local_68 != (undefined *)0x0;
      if (bVar1) {
        local_c8 = PTR___NSConcreteStackBlock_02578660;
        local_c0 = 0xc2000000;
        local_bc = 0;
        local_b8 = FUN_0159a0e4;
        local_b0 = &DAT_02586d78;
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        (*(code *)PTR__objc_retain_02578638)();
        local_a8 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_predicateWithBlock__026ab6e0,&local_c8);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = *(long *)(param_1 + 0x28);
        puVar5 = local_68;
        local_a0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_filteredArrayUsingPredicate__026b0178,puVar2);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar8 + 0x10))();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        _objc_storeStrong(&local_a0,0);
        _objc_storeStrong(&local_a8,0);
      }
      else {
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,&cf_vU_V<h_);
      }
      local_54 = (uint)!bVar1;
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
      if (local_54 == 0) {
        local_54 = 0;
      }
    }
    else {
      lVar8 = *(long *)(param_1 + 0x28);
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_vU_bS1Y_);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar8 + 0x10))(lVar8,0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_54 = 1;
    }
  }
  else {
    lVar8 = *(long *)(param_1 + 0x28);
    pcVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_108 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_108 = &cf_Q__;
    }
    (**(code **)(lVar8 + 0x10))(lVar8,0,local_108);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    local_54 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

