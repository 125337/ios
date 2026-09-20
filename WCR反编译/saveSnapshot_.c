// saveSnapshot: @ 00f7df44

/* Function Stack Size: 0x18 bytes */

void WCRefineFriendRelationStore::saveSnapshot_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong local_48;
  undefined8 local_38;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar1 & 1) == 0) {
    local_48 = *(ulong *)PTR____NSDictionary0___02578288;
  }
  else {
    local_48 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_48;
  _os_unfair_lock_lock();
  FUN_00f7dc54();
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e2e68,PTR_s_removeAllObjects_0269d508);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e2e68,PTR_s_addEntriesFromDictionary__026a2e30,local_30);
  uVar2 = DAT_028e2e68;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e2e68,PTR_s_copy_0269d150);
  puVar3 = &DAT_028e2e70;
  local_38 = uVar2;
  _os_unfair_lock_unlock();
  uVar2 = local_38;
  FUN_00f7e13c();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_writeToFile_atomically__0269f928,puVar3,1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

