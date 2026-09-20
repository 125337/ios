// filteredArray: @ 01112160

/* Function Stack Size: 0x18 bytes */

ID WCRefinePrivateFriendManager::filteredArray_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_120;
  undefined *local_c0;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  uint local_6c;
  uint local_68;
  undefined4 local_64;
  undefined *local_60;
  SEL local_58;
  ID local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  
  local_60 = (undefined *)0x0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  puVar2 = local_60;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)puVar2 & 1) == 0) ||
     (puVar1 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0),
     puVar2 = local_60, puVar1 == (undefined *)0x0)) {
    if (local_60 == (undefined *)0x0) {
      local_c0 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_c0 = local_60;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_c0;
    local_64 = 1;
  }
  else {
    local_6c = DAT_028e3544;
    local_68 = DAT_028e3544;
    if ((DAT_028e3544 & 3) == 3) {
      FUN_01111cd8(0);
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_count_0269cfe0);
      puVar2 = local_60;
      if (puVar1 == (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = puVar2;
        local_64 = 1;
      }
      else {
        local_80 = (undefined *)0x0;
        for (local_88 = (undefined *)0x0; puVar2 = local_88, puVar1 = local_60,
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0), puVar2 < puVar1;
            local_88 = local_88 + 1) {
          puVar2 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_objectAtIndexedSubscript__0269cc78,local_88);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_78;
          local_90 = puVar2;
          FUN_01112028();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_containsObject__0269cbb8);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          if ((((ulong)puVar1 & 1) == 0) || (local_80 != (undefined *)0x0)) {
            if ((((ulong)puVar1 & 1) == 0) && (local_80 != (undefined *)0x0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_addObject__0269d180,local_90);
            }
          }
          else {
            puVar1 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,puVar1);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = local_80;
            local_80 = puVar2;
            (*(code *)PTR__objc_release_02578630)(puVar1);
            puVar2 = local_80;
            if (local_88 != (undefined *)0x0) {
              local_38 = 0;
              local_40 = local_88;
              local_30 = 0;
              local_28 = local_88;
              puVar1 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_60,PTR_s_subarrayWithRange__0269d848,0,local_88);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
              (*(code *)PTR__objc_release_02578630)(puVar1);
            }
          }
          _objc_storeStrong(&local_90,0);
        }
        if (local_80 == (undefined *)0x0) {
          local_120 = local_60;
        }
        else {
          local_120 = local_80;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = local_120;
        local_64 = 1;
        _objc_storeStrong(&local_80,0);
      }
      _objc_storeStrong(&local_78,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = puVar2;
      local_64 = 1;
    }
  }
  _objc_storeStrong(&local_60,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_48;
}

