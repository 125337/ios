// FUN_007f3908 @ 007f3908

void FUN_007f3908(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **local_c8;
  undefined *local_90;
  undefined *local_88;
  int local_7c;
  long local_78;
  long local_70;
  long local_68;
  undefined *local_60;
  long local_58;
  undefined *local_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  undefined *local_30;
  long local_28;
  long local_20;
  undefined *local_18;
  
  local_18 = *(undefined **)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_1);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_2);
  if ((local_38 == 0) || (local_40 == 0)) {
    local_44 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_38;
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_WCRefineHomeTableHeaderHost_026ce570;
    local_58 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHomeTableHeaderHost_026ce570,PTR_s_todoSlotInTableView__026a8938,lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_38;
    local_60 = puVar1;
    _objc_getAssociatedObject(local_38,&DAT_028ccee1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_38;
    local_68 = lVar2;
    _objc_getAssociatedObject(local_38,&DAT_028ccee2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_60;
    local_70 = lVar3;
    (*(code *)PTR__objc_retain_02578638)();
    lVar3 = local_68;
    local_30 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_70;
    local_28 = lVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_20 = lVar2;
    local_78 = 0;
    for (local_7c = 0; local_7c < 3; local_7c = local_7c + 1) {
      puVar4 = (&local_30)[local_7c];
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_viewWithTag__026cabe0,FUN_0007f148);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_WCRefineToDoCardView_026ce978;
      local_88 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineToDoCardView_026ce978,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((ulong)puVar4 & 1) == 0) {
        local_44 = 4;
      }
      else {
        puVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsObject__0269cbb8,local_88);
        if (((ulong)puVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,local_88);
          local_78 = local_78 + 1;
          (**(code **)(local_40 + 0x10))(local_40,local_88);
          local_44 = 0;
        }
        else {
          local_44 = 4;
        }
      }
      _objc_storeStrong(&local_88,0);
    }
    puVar1 = PTR_WCRefineToDoCardView_026ce978;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineToDoCardView_026ce978,PTR_s_currentSharedWebHostCardIfAny_026a89c8);
    _objc_retainAutoreleasedReturnValue();
    local_90 = puVar1;
    if ((puVar1 != (undefined *)0x0) &&
       (puVar4 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsObject__0269cbb8,puVar1),
       ((ulong)puVar4 & 1) == 0)) {
      local_78 = local_78 + 1;
      (**(code **)(local_40 + 0x10))(local_40,local_90);
    }
    _objc_storeStrong(&local_90,0);
    local_c8 = &local_18;
    do {
      local_c8 = local_c8 + -1;
      _objc_storeStrong(local_c8,0);
    } while (local_c8 != &local_30);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - (long)local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - (long)local_18);
  }
  return;
}

