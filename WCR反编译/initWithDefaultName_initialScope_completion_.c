// initWithDefaultName:initialScope:completion: @ 01aa4584

/* Function Stack Size: 0x28 bytes */

ID WCRGroupCreateViewController::initWithDefaultName_initialScope_completion_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,
             undefined4 param_6)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *local_48;
  undefined *local_40;
  undefined8 local_38;
  unsigned_long_long local_30;
  undefined8 local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_30 = param_4;
  _objc_storeStrong(&local_38,param_5);
  local_48 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_48;
  local_40 = PTR_WCRGroupCreateViewController_026cfe28;
  _objc_msgSendSuper2(ppuVar2,PTR_s_initWithNibName_bundle__026a2600,0);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if (ppuVar2 != (undefined8 **)0x0) {
    uVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    uVar3 = *(undefined8 *)((long)local_18 + (long)_defaultName);
    *(undefined8 *)((long)local_18 + (long)_defaultName) = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    *(unsigned_long_long *)((long)local_18 + (long)_selectedScope) = local_30;
    uVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
    uVar3 = *(undefined8 *)((long)local_18 + (long)_completion);
    *(undefined8 *)((long)local_18 + (long)_completion) = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)local_18 + (long)_selectedUsernames);
    *(undefined8 *)((long)local_18 + (long)_selectedUsernames) = puVar4;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    _objc_storeStrong((long)local_18 + (long)_nameDraft);
    _objc_storeStrong((long)local_18 + (long)_detailDraft,&::cf___);
    _objc_storeStrong((long)local_18 + (long)_inlineDetailDraft,&::cf___);
    puVar4 = PTR____NSArray0___02578280;
    _objc_storeStrong((long)local_18 + (long)_memberSyncChatRoomsDraft,
                      *(undefined8 *)PTR____NSArray0___02578280);
    _objc_storeStrong((long)local_18 + (long)_memberSyncTagsDraft,*(undefined8 *)puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTitle__0269cef0,&cf_e_R_);
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

