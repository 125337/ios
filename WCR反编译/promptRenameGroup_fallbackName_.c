// promptRenameGroup:fallbackName: @ 01ac1318

/* Function Stack Size: 0x20 bytes */

void WCRGroupListViewController::promptRenameGroup_fallbackName_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_e0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined1 auStack_80 [15];
  byte local_71;
  undefined *local_70;
  undefined1 auStack_58 [12];
  undefined4 local_4c;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (undefined *)0x0;
  _objc_storeStrong(&local_40,param_4);
  puVar1 = PTR_WCRefineGroupManager_026ce2b8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_48 == (undefined *)0x0) {
    local_4c = 1;
  }
  else {
    _objc_initWeak(auStack_58,local_28);
    local_71 = 0;
    puVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (puVar2 == (undefined *)0x0) {
      local_e0 = local_40;
    }
    else {
      local_e0 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_name_0269d828);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = local_e0;
    }
    puVar2 = local_48;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_01ac1600;
    local_90 = &DAT_0257c948;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = puVar2;
    _objc_copyWeak(auStack_80,auStack_58);
    FUN_01a9f3b0(&cf__TTR_,&cf_eQR_Ty,local_e0,&local_a8);
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_destroyWeak(auStack_80);
    _objc_storeStrong(&local_88,0);
    _objc_destroyWeak(auStack_58);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

