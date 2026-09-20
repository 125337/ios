// handleGlobalMappingSave: @ 01e68d9c

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineTextReplaceViewController::handleGlobalMappingSave_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  ID local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ID local_58;
  ID local_50;
  undefined4 local_44;
  ID local_40 [2];
  SEL local_30;
  ID local_28;
  
  local_40[1] = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(local_40 + 1,param_3);
  IVar1 = local_28;
  _objc_getAssociatedObject(local_28,"globalMappingTextView");
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = IVar1;
  if (IVar1 == 0) {
    local_44 = 1;
    goto LAB_01e690c8;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setGlobalMappingReplacement__026c6b10);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_changedKeys_026c6c70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_saveAllChangesImmediately_026c6ac0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
  (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_resignFirstResponder_0269ea18);
  IVar1 = local_28;
  _objc_getAssociatedObject(local_28,"currentGlobalMappingSheet");
  _objc_retainAutoreleasedReturnValue();
  local_50 = IVar1;
  if (IVar1 == 0) {
LAB_01e68ff4:
    dVar2 = _dispatch_time(0,300000000);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_28;
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_01e6913c;
    local_88 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = IVar1;
    _dispatch_after(dVar2,puVar3,&local_a0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_80,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420);
    if ((IVar1 & 1) == 0) goto LAB_01e68ff4;
    dVar2 = _dispatch_time(0,300000000);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_50;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_01e690f4;
    local_60 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = IVar1;
    _dispatch_after(dVar2,puVar3,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_50,0);
  local_44 = 0;
LAB_01e690c8:
  _objc_storeStrong(local_40);
  _objc_storeStrong(local_40 + 1,0);
  return;
}

