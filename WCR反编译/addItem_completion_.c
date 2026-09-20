// addItem:completion: @ 010a8a9c

/* Function Stack Size: 0x20 bytes */

void WCRefineMessageRepositoryStore::addItem_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ID IVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ID IVar8;
  ID IVar9;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ID local_98;
  ulong local_90;
  ulong local_88;
  long local_80;
  ID local_78;
  ID local_70;
  ID local_68;
  ID local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_44;
  long local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar6 = local_38;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
  if ((uVar6 & 1) == 0) {
    if (local_40 != 0) {
      (**(code **)(local_40 + 0x10))(local_40,0,0,0);
    }
    local_44 = 1;
  }
  else {
    uVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    FUN_010a6348();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar7;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    uVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_remark);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    FUN_010a6348();
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar7;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    IVar8 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_earliestItemWithRemark_excluding_026ae598,local_58,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar8;
    if (IVar8 == 0) {
      IVar8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_allItems_026a2730);
      _objc_retainAutoreleasedReturnValue();
      IVar9 = IVar8;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_68 = IVar9;
      (*(code *)PTR__objc_release_02578630)(IVar8);
      IVar8 = local_68;
      uVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_insertObject_atIndex__0269eac0,uVar6,0);
      (*(code *)PTR__objc_release_02578630)(uVar6);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_persistItems__026ae590,local_68);
      if (local_40 != 0) {
        (**(code **)(local_40 + 0x10))(local_40,1,0,local_50);
      }
      local_44 = 1;
      _objc_storeStrong(&local_68,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
      _objc_retainAutoreleasedReturnValue();
      IVar9 = IVar8;
      FUN_010a6348();
      _objc_retainAutoreleasedReturnValue();
      local_70 = IVar9;
      (*(code *)PTR__objc_release_02578630)(IVar8);
      IVar4 = local_28;
      uVar6 = local_58;
      IVar9 = local_60;
      IVar8 = local_70;
      puVar5 = PTR___NSConcreteStackBlock_02578660;
      local_b8 = PTR___NSConcreteStackBlock_02578660;
      local_b0 = 0xc2000000;
      local_ac = 0;
      local_a8 = FUN_010a8fd0;
      local_a0 = &DAT_02581fc0;
      local_78 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      uVar3 = local_38;
      local_98 = IVar8;
      (*(code *)PTR__objc_retain_02578638)();
      uVar7 = local_58;
      local_90 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      lVar1 = local_40;
      local_88 = uVar7;
      (*(code *)PTR__objc_retain_02578638)();
      lVar2 = local_40;
      local_80 = lVar1;
      local_e0 = puVar5;
      local_d8 = 0xc2000000;
      local_d4 = 0;
      local_d0 = FUN_010a90a4;
      local_c8 = &DAT_025814c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_confirmReplaceRemark_existingIte_026ae5a8,uVar6,IVar9,0,&local_b8,
                 &local_e0);
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_70,0);
      local_44 = 0;
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

