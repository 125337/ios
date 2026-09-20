// FUN_010b8c68 @ 010b8c68

void FUN_010b8c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_130;
  ulong local_b0;
  bool local_a1;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  undefined *local_88;
  ulong local_80;
  ulong local_78;
  byte local_69;
  undefined *local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((((uVar3 & 1) == 0) ||
       (uVar3 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0),
       uVar3 == 0)) ||
      (uVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
      uVar3 == 0)) ||
     ((lVar4 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
      lVar4 == 0 ||
      (lVar4 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
      lVar4 == 0)))) {
    local_44 = 1;
  }
  else {
    uVar3 = local_30;
    FUN_010bcd08(local_30,local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar3;
    FUN_010caf40();
    if ((uVar3 & 1) == 0) {
      local_44 = 1;
    }
    else {
      uVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_stringByAppendingPathComponent__026cab30,&cf_manifest_json);
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar3;
      FUN_010bced8();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_60 = uVar3;
      _objc_alloc_init();
      local_69 = 0;
      local_68 = puVar2;
      for (local_78 = 0; uVar3 = local_78, uVar5 = local_28,
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0), uVar3 < uVar5;
          local_78 = local_78 + 1) {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_objectAtIndexedSubscript__0269cc78,local_78);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_80 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar3 & 1) == 0) {
          local_44 = 4;
        }
        else {
          puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                     local_78);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_88 = puVar2;
          (*(code *)PTR__objc_release_02578630)();
          uVar3 = local_80;
          FUN_010ca728();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = local_50;
          puVar2 = local_88;
          uVar7 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_objectForKeyedSubscript__0269d098,local_88);
          _objc_retainAutoreleasedReturnValue();
          FUN_010cb06c(uVar3,puVar6,puVar2,uVar5,uVar7,local_68,&local_69);
          _objc_retainAutoreleasedReturnValue();
          local_90 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar7);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          uVar3 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_live);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          uVar5 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_a1 = false;
          bVar1 = (uVar5 & 1) == 0;
          if (bVar1) {
            local_130 = 0;
          }
          else {
            local_130 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,PTR_s_objectForKeyedSubscript__0269d098,&cf_live);
            _objc_retainAutoreleasedReturnValue();
            local_a0 = local_130;
          }
          local_a1 = !bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_98 = local_130;
          if ((local_a1 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_a0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar5 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_count_0269cfe0);
          uVar3 = local_98;
          if (uVar5 != 0) {
            FUN_010ca79c();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_88,PTR_s_stringByAppendingString__0269d398,&cf__live);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = local_50;
            uVar8 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90,PTR_s_objectForKeyedSubscript__0269d098,&cf_live);
            _objc_retainAutoreleasedReturnValue();
            FUN_010cb06c(uVar3,uVar5,puVar2,uVar7,uVar8,local_68,&local_69);
            _objc_retainAutoreleasedReturnValue();
            local_b0 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar8);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_release_02578630)(uVar5);
            uVar3 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_count_0269cfe0);
            if (uVar3 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_90,PTR_s_setObject_forKeyedSubscript__0269d248,local_b0,&cf_live);
            }
            _objc_storeStrong(&local_b0,0);
          }
          uVar3 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_count_0269cfe0);
          if (uVar3 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,local_90,local_88);
          }
          _objc_storeStrong(&local_98);
          _objc_storeStrong(&local_90,0);
          _objc_storeStrong(&local_88,0);
          local_44 = 0;
        }
        _objc_storeStrong(&local_80,0);
      }
      if ((local_69 & 1) != 0) {
        FUN_010cb890(local_58,local_60);
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      local_44 = 0;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

