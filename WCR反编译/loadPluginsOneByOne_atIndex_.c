// loadPluginsOneByOne:atIndex: @ 014c2564

/* Function Stack Size: 0x20 bytes */

void WCRefineSearchManager::loadPluginsOneByOne_atIndex_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  dispatch_queue_t pdVar4;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  ulong local_b0;
  ulong local_a8;
  undefined1 auStack_a0 [8];
  ulong local_98;
  ulong local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined1 auStack_68 [28];
  undefined4 local_4c;
  undefined1 auStack_48 [8];
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = param_4;
  _objc_initWeak(auStack_48,local_28);
  uVar3 = local_40;
  if ((*(byte *)(local_28 + 10) & 1) == 0) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    if (uVar3 < uVar1) {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_90 = uVar3;
      if ((uVar3 == 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0), uVar3 == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_loadPluginsOneByOne_atIndex__026af580,local_38,local_40 + 1);
        local_4c = 1;
      }
      else {
        uVar3 = *(ulong *)(local_28 + 0x50);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_containsObject__0269cbb8,local_90);
        if ((uVar3 & 1) == 0) {
          pdVar4 = _dispatch_get_global_queue(0,0);
          _objc_retainAutoreleasedReturnValue();
          local_d0 = PTR___NSConcreteStackBlock_02578660;
          local_c8 = 0xc2000000;
          local_c4 = 0;
          local_c0 = FUN_014c2f48;
          local_b8 = &DAT_02583088;
          _objc_copyWeak(auStack_a0,auStack_48);
          uVar3 = local_90;
          (*(code *)PTR__objc_retain_02578638)();
          uVar1 = local_38;
          local_b0 = uVar3;
          (*(code *)PTR__objc_retain_02578638)();
          local_a8 = uVar1;
          local_98 = local_40;
          _dispatch_async(pdVar4,&local_d0);
          (*(code *)PTR__objc_release_02578630)(pdVar4);
          _objc_storeStrong(&local_a8);
          _objc_storeStrong(&local_b0,0);
          _objc_destroyWeak(auStack_a0);
          local_4c = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_loadPluginsOneByOne_atIndex__026af580,local_38,local_40 + 1);
          local_4c = 1;
        }
      }
      _objc_storeStrong(&local_90,0);
    }
    else {
      *(undefined1 *)(local_28 + 0xb) = 0;
      *(undefined1 *)(local_28 + 0xd) = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_rebuildPluginTitleIndexFromAllSe_026af5b0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_savePersistentPluginTitleIndex_026af5b8);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(local_28 + 0x20),PTR_s_removeAllObjects_0269d508);
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc2000000;
      local_7c = 0;
      local_78 = FUN_014c2968;
      local_70 = &DAT_0257be28;
      _objc_copyWeak(auStack_68,auStack_48);
      _dispatch_async(puVar2,&local_88);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_4c = 1;
      _objc_destroyWeak(auStack_68);
    }
  }
  else {
    *(undefined1 *)(local_28 + 0xb) = 0;
    local_4c = 1;
  }
  _objc_destroyWeak(auStack_48);
  _objc_storeStrong(&local_38,0);
  return;
}

