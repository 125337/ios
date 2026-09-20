// FUN_019f4358 @ 019f4358

void FUN_019f4358(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ulong local_58;
  long local_50;
  long local_48;
  ulong local_40;
  int local_34;
  long local_30;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  uVar3 = local_20;
  local_30 = lVar1;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_from);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_30;
      local_40 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_glyphDrawingRuleObjects_026bb288);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_40;
      local_78 = PTR___NSConcreteGlobalBlock_02578658;
      local_70 = 0xd0800000;
      local_6c = 0;
      local_68 = FUN_019f4648;
      local_60 = &DAT_02582108;
      local_48 = lVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar1,PTR_s_indexesOfObjectsPassingTest__026a2c90,&local_78);
      _objc_retainAutoreleasedReturnValue();
      local_50 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
      if (lVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_removeObjectsAtIndexes__026a2c98,local_50);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addObject__0269d180,local_20);
      lVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_jsonStringFromObject__026bb3a8,local_48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setGlyphDrawingRules__026bb1d0);
      (*(code *)PTR__objc_release_02578630)(lVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_savePreferences_026bb238);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_reloadTableData_0269dca8);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Kb_O___OX_);
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
      local_34 = 0;
      goto LAB_019f4610;
    }
  }
  local_34 = 1;
LAB_019f4610:
  _objc_storeStrong(&local_30,0);
  if (local_34 == 0) {
    local_34 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

