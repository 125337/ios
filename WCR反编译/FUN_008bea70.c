// FUN_008bea70 @ 008bea70

byte FUN_008bea70(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *local_178;
  char *local_150;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  char *local_80;
  char *local_78;
  undefined *local_70;
  undefined1 local_62;
  byte local_61;
  char *local_60;
  int local_58;
  undefined *local_48;
  char *local_40;
  byte local_31;
  undefined *local_30;
  long local_28;
  undefined **ppuVar3;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = (char *)0x0;
  _objc_storeStrong(&local_40,param_1);
  ppuVar3 = &local_48;
  local_48 = (undefined *)0x0;
  _objc_storeStrong(ppuVar3,param_2);
  uVar2 = (uint)ppuVar3;
  FUN_008b4e10();
  if (((uVar2 & 1) == 0) || (puVar4 = local_48, FUN_008b8a0c(), ((ulong)puVar4 & 1) == 0)) {
    local_31 = 0;
    local_58 = 1;
    goto LAB_008bf19c;
  }
  local_61 = 0;
  pcVar5 = local_40;
  FUN_008bae68();
  _objc_retainAutoreleasedReturnValue();
  bVar1 = true;
  if (pcVar5 == (char *)0x0) {
    pcVar6 = local_40;
    FUN_008bb29c();
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    bVar1 = pcVar6 != (char *)0x0;
    local_60 = pcVar6;
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  if (bVar1) {
    pcVar5 = local_40;
    FUN_008ba510(local_40,local_48);
    local_62 = SUB81(pcVar5,0);
    if (((ulong)pcVar5 & 1) == 0) {
      FUN_008b6b2c(&cf_SnxuSb);
    }
    local_31 = 1;
    local_58 = 1;
    goto LAB_008bf19c;
  }
  pcVar5 = local_40;
  FUN_008bf220(local_40,local_48);
  if (((ulong)pcVar5 & 1) != 0) {
    local_31 = 1;
    local_58 = 1;
    goto LAB_008bf19c;
  }
  puVar4 = local_48;
  FUN_008bf7a0();
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_count_0269cfe0);
  if (puVar4 == (undefined *)0x0) {
    local_31 = 0;
    local_58 = 1;
  }
  else {
    pcVar5 = "FavForwardLogicController";
    _objc_getClass();
    local_78 = pcVar5;
    if (pcVar5 == (char *)0x0) {
      local_31 = 0;
      local_58 = 1;
    }
    else {
      local_80 = (char *)0x0;
      _objc_alloc_init();
      pcVar6 = local_80;
      local_80 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      if (local_80 == (char *)0x0) {
        local_31 = 0;
        local_58 = 1;
      }
      else {
        if (local_40 == (char *)0x0) {
          local_150 = local_80;
        }
        else {
          local_150 = local_40;
        }
        _objc_setAssociatedObject(local_150,&DAT_028ce019,local_80,1);
        local_90 = PTR_s_ForwardFavItemList_delegate__026a5b80;
        pcVar5 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_respondsToSelector__026ca818,
                   PTR_s_ForwardFavItemList_delegate__026a5b80);
        puVar4 = local_48;
        if (((ulong)pcVar5 & 1) != 0) {
          puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar7);
          bVar1 = ((ulong)puVar4 & 1) == 0;
          if (bVar1) {
            local_30 = local_48;
            local_178 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_30,1);
            _objc_retainAutoreleasedReturnValue();
            local_a0 = local_178;
          }
          else {
            local_178 = local_48;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_98 = local_178;
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_a0);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_80,local_90,local_98,local_40);
          local_31 = 1;
          local_58 = 1;
          _objc_storeStrong(&local_98,0);
          if (local_58 != 0) goto LAB_008bf15c;
        }
        puVar4 = PTR_s_forwardFavDataItemWraps_delegate_026a9a28;
        pcVar5 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_respondsToSelector__026ca818,
                   PTR_s_forwardFavDataItemWraps_delegate_026a9a28);
        if (((ulong)pcVar5 & 1) == 0) {
          local_31 = 0;
          local_58 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_80,puVar4,local_70,local_40);
          local_31 = 1;
          local_58 = 1;
        }
      }
LAB_008bf15c:
      _objc_storeStrong(&local_80,0);
    }
  }
  _objc_storeStrong(&local_70,0);
LAB_008bf19c:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_31 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

