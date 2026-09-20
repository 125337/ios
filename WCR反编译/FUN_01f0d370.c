// FUN_01f0d370 @ 01f0d370

void FUN_01f0d370(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long local_90;
  long local_88;
  undefined *local_80;
  long local_78;
  undefined *local_70;
  long local_68;
  undefined *local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined *local_28;
  
  local_40 = 0;
  local_38 = param_1;
  _objc_storeStrong(&local_40);
  lVar1 = local_40;
  puVar5 = PTR_s_range_0269ef50;
  local_58 = param_1;
  local_50 = param_4;
  local_48 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_68 = lVar1;
  local_60 = puVar5;
  if (lVar1 != 0x7fffffffffffffff) {
    lVar1 = local_40;
    puVar5 = PTR_s_range_0269ef50;
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar2 = *(undefined **)(param_1 + 0x20);
    local_78 = lVar1;
    local_70 = puVar5;
    local_30 = lVar1;
    local_28 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    if (puVar5 + lVar1 <= puVar2) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      uVar8 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      lVar1 = local_40;
      puVar5 = PTR_s_range_0269ef50;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_88 = lVar1;
      local_80 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,PTR_s_addAttribute_value_range__026a1d88,uVar8,uVar6,lVar1,puVar5);
      uVar3 = *(ulong *)(param_1 + 0x30);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_pattern);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if ((uVar4 & 1) != 0) {
        lVar9 = *(long *)(param_1 + 0x38);
        uVar6 = *(undefined8 *)(param_1 + 0x40);
        lVar1 = local_40;
        puVar5 = PTR_s_range_0269ef50;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_substringWithRange__0269d138,lVar1,puVar5)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_htmlColorFromHexToken__026c8190);
        _objc_retainAutoreleasedReturnValue();
        local_90 = lVar9;
        (*(code *)PTR__objc_release_02578630)(uVar6);
        if (local_90 != 0) {
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          uVar7 = *(undefined8 *)PTR__NSBackgroundColorAttributeName_02578058;
          lVar1 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3fd3333333333333,local_90,PTR_s_colorWithAlphaComponent__026ca578);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = local_40;
          puVar5 = PTR_s_range_0269ef50;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_addAttribute_value_range__026a1d88,uVar7,lVar1,lVar9,puVar5);
          (*(code *)PTR__objc_release_02578630)(lVar1);
        }
        _objc_storeStrong(&local_90,0);
      }
    }
  }
  _objc_storeStrong(&local_40,0);
  return;
}

