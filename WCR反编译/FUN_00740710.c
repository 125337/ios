// FUN_00740710 @ 00740710

void FUN_00740710(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_140;
  uint local_104;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined **local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  
  ppuVar1 = &local_50;
  local_50 = (undefined *)0x0;
  _objc_storeStrong(ppuVar1,param_1);
  FUN_0073f088();
  _objc_retainAutoreleasedReturnValue();
  local_58 = ppuVar1;
  (*(code *)PTR__objc_msgSend_02578628)(ppuVar1,PTR_s_count_0269cfe0);
  puVar3 = local_50;
  if (ppuVar1 != (undefined **)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
      puVar3 = local_50;
      local_70 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = puVar3;
        local_68 = 1;
      }
      else {
        local_78 = (undefined *)0x0;
        for (local_80 = (undefined *)0x0; local_80 < local_70; local_80 = local_80 + 1) {
          puVar3 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_80);
          _objc_retainAutoreleasedReturnValue();
          local_88 = puVar3;
          FUN_00740154();
          _objc_retainAutoreleasedReturnValue();
          local_90 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
          local_104 = 0;
          if (puVar3 != (undefined *)0x0) {
            ppuVar1 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsObject__0269cbb8,local_90);
            local_104 = (uint)ppuVar1;
          }
          if ((local_104 & 1) == 0) {
            if (local_78 != (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addObject__0269d180,local_88);
            }
            local_68 = 0;
          }
          else {
            if (local_78 == (undefined *)0x0) {
              puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithCapacity__0269d9b8
                         ,local_70);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = local_78;
              local_78 = puVar2;
              (*(code *)PTR__objc_release_02578630)(puVar3);
              puVar3 = local_78;
              if (local_80 != (undefined *)0x0) {
                local_38 = 0;
                local_40 = local_80;
                local_30 = 0;
                local_28 = local_80;
                puVar2 = local_50;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_50,PTR_s_subarrayWithRange__0269d848,0,local_80);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObjectsFromArray__0269d540);
                (*(code *)PTR__objc_release_02578630)(puVar2);
              }
            }
            local_68 = 4;
          }
          _objc_storeStrong(&local_90);
          _objc_storeStrong(&local_88,0);
        }
        if (local_78 == (undefined *)0x0) {
          local_140 = local_50;
        }
        else {
          local_140 = local_78;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = local_140;
        local_68 = 1;
        _objc_storeStrong(&local_78,0);
      }
      goto LAB_00740be0;
    }
  }
  puVar3 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = puVar3;
  local_68 = 1;
LAB_00740be0:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

