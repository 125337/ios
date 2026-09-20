// movePlugin:operation: @ 0178c69c

/* Function Stack Size: 0x20 bytes */

void WCPluginsViewControllerBehavior::movePlugin_operation_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined1 *local_f8;
  undefined *local_f0;
  undefined1 *local_e8;
  undefined4 local_dc;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined1 *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined1 *local_58;
  undefined *local_50;
  undefined *local_48;
  ulong local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar4 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_orderedPluginsIncludingHidden__026b1a18,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_50 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_58 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_48;
  local_60 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_groupIdentifierForPlugin__026b4470,local_38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_48;
  puVar1 = local_50;
  puVar4 = PTR___NSConcreteGlobalBlock_02578658;
  local_a8 = PTR___NSConcreteGlobalBlock_02578658;
  local_a0 = 0xd0800000;
  local_9c = 0;
  local_98 = FUN_0178ccfc;
  local_90 = &DAT_02588a90;
  local_68 = puVar5;
  (*(code *)PTR__objc_retain_02578638)();
  puVar5 = local_68;
  local_88 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  puVar6 = local_58;
  local_80 = puVar5;
  (*(code *)PTR__objc_retain_02578638)();
  puVar5 = local_60;
  local_78 = puVar6;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_a8)
  ;
  uVar3 = local_38;
  puVar6 = local_58;
  local_d8 = puVar4;
  local_d0 = 0xd0800000;
  local_cc = 0;
  local_c8 = FUN_0178ceb4;
  local_c0 = &DAT_02588950;
  (*(code *)PTR__objc_retain_02578638)();
  local_b8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_indexOfObjectPassingTest__026a27f8,&local_d8);
  local_b0 = puVar6;
  if ((puVar6 == (undefined1 *)0x7fffffffffffffff) ||
     (puVar6 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0),
     puVar6 <= (undefined1 *)((long)&MACH_HEADER.magic + 1))) {
    local_dc = 1;
  }
  else {
    local_e8 = local_b0;
    uVar7 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_top);
    if ((uVar7 & 1) == 0) {
      uVar7 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_bottom);
      if ((uVar7 & 1) == 0) {
        uVar7 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_up);
        if (((uVar7 & 1) == 0) || (local_b0 == (undefined1 *)0x0)) {
          uVar7 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_down);
          if (((uVar7 & 1) != 0) &&
             (puVar6 = local_b0 + 1, puVar8 = local_58,
             (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0), puVar6 < puVar8))
          {
            local_e8 = local_b0 + 1;
          }
        }
        else {
          local_e8 = local_b0 + -1;
        }
      }
      else {
        puVar6 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
        local_e8 = puVar6 + -1;
      }
    }
    else {
      local_e8 = (undefined1 *)0x0;
    }
    if (local_e8 == local_b0) {
      local_dc = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_removeObjectAtIndex__0269d530,local_b0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_insertObject_atIndex__0269eac0,local_38,local_e8);
      puVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_mutableCopy_0269d8a0);
      puVar4 = local_60;
      local_120 = PTR___NSConcreteGlobalBlock_02578658;
      local_118 = 0xd0800000;
      local_114 = 0;
      local_110 = FUN_0178cfb4;
      local_108 = &DAT_02588ab0;
      local_f0 = puVar5;
      (*(code *)PTR__objc_retain_02578638)();
      puVar6 = local_58;
      local_100 = puVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_120);
      puVar4 = local_48;
      puVar5 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_valueForKey__0269d128,&cf_identifier);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_persistOrderedIdentifiers__026b4798);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_f8);
      _objc_storeStrong(&local_100,0);
      _objc_storeStrong(&local_f0,0);
      local_dc = 0;
    }
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

