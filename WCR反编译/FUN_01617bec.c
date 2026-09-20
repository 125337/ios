// FUN_01617bec @ 01617bec

void FUN_01617bec(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_80;
  undefined *local_58;
  long local_50;
  byte local_41;
  undefined *local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_2c = 1;
  }
  else {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_01618794();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (uVar3 == 0) {
      local_2c = 1;
    }
    else {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar5;
      if (puVar5 == (undefined *)0x0) {
        local_80 = *(undefined **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_mutableCopy_0269d8a0);
      local_40 = local_80;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_41 = 0;
      for (local_50 = 0; lVar1 = local_50, puVar2 = local_40,
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0), lVar1 < (long)puVar2
          ; local_50 = local_50 + 1) {
        puVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_50);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        puVar6 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (((ulong)puVar6 & 1) != 0) {
          puVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_50);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          FUN_01618794();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if (((ulong)puVar7 & 1) != 0) {
            puVar2 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_50);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_58 = puVar5;
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_addEntriesFromDictionary__026a2e30,local_28);
            puVar2 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_50);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
            if (puVar5 != (undefined *)0x0) {
              puVar2 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_50);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf__wcrEnabled
                        );
              (*(code *)PTR__objc_release_02578630)(puVar5);
              (*(code *)PTR__objc_release_02578630)(puVar2);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_setObject_atIndexedSubscript__0269e970,local_58,local_50);
            local_41 = 1;
            local_2c = 2;
            _objc_storeStrong(&local_58,0);
            break;
          }
        }
      }
      if ((local_41 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addObject__0269d180,local_28);
      }
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_40,0);
      local_2c = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

