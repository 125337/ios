// FUN_0073d3c8 @ 0073d3c8

byte FUN_0073d3c8(ulong param_1,undefined8 param_2,byte param_3,byte param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  uint local_134;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined *local_98;
  ulong local_90 [2];
  ulong local_80 [3];
  ulong local_68;
  byte local_5a;
  byte local_59;
  undefined8 local_58;
  ulong local_50;
  byte local_41;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_5a = param_4;
  local_59 = param_3;
  local_58 = param_2;
  local_50 = param_1;
  FUN_0073f088();
  _objc_retainAutoreleasedReturnValue();
  local_68 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (param_1 != 0) {
    local_80[0] = 0;
    uVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_valueForKey__0269d128,&cf_m_arrMsgList);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_80[0];
    local_80[0] = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar5 = local_80[0];
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar3 = local_80[0];
    if ((uVar5 & 1) == 0) {
LAB_0073da14:
      bVar1 = false;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_90[0] = uVar3;
      local_98 = (undefined *)0x0;
      for (local_a0 = 0; uVar5 = local_a0, uVar3 = local_90[0],
          (*(code *)PTR__objc_msgSend_02578628)(local_90[0],PTR_s_count_0269cfe0), uVar5 < uVar3;
          local_a0 = local_a0 + 1) {
        uVar5 = local_90[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90[0],PTR_s_objectAtIndexedSubscript__0269cc78,local_a0);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = uVar5;
        FUN_0073f25c();
        _objc_retainAutoreleasedReturnValue();
        local_b0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
        local_134 = 0;
        if (uVar5 != 0) {
          uVar5 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_containsObject__0269cbb8,local_b0);
          local_134 = (uint)uVar5;
        }
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        if ((local_134 & 1) == 0) {
          if (local_98 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_addObject__0269d180,local_a8);
          }
        }
        else if (local_98 == (undefined *)0x0) {
          uVar5 = local_90[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_90[0],PTR_s_count_0269cfe0);
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_arrayWithCapacity__0269d9b8,uVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_98;
          local_98 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar4 = local_98;
          if (local_a0 != 0) {
            local_38 = 0;
            local_40 = local_a0;
            local_30 = 0;
            local_28 = local_a0;
            uVar5 = local_90[0];
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90[0],PTR_s_subarrayWithRange__0269d848,0,local_a0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObjectsFromArray__0269d540);
            (*(code *)PTR__objc_release_02578630)(uVar5);
          }
        }
        _objc_storeStrong(&local_b0);
        _objc_storeStrong(&local_a8,0);
      }
      if (local_98 == (undefined *)0x0) {
LAB_0073d9c0:
        bVar1 = false;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setValue_forKey__0269d300,local_98,&cf_m_arrMsgList);
        puVar4 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_count_0269cfe0);
        if (puVar4 != (undefined *)0x0) goto LAB_0073d9c0;
        local_41 = 0;
        bVar1 = true;
      }
      _objc_storeStrong(&local_98);
      _objc_storeStrong(local_90,0);
      if (!bVar1) goto LAB_0073da14;
    }
    _objc_storeStrong(local_80,0);
    if (bVar1) goto LAB_0073da8c;
  }
  uVar5 = local_50;
  (*DAT_028cc5c0)(local_50,local_58,local_59 & 1,local_5a & 1);
  local_41 = (byte)uVar5 & 1;
LAB_0073da8c:
  _objc_storeStrong(&local_68,0);
  return local_41 & 1;
}

