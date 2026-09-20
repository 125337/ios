// editInviteChatRoom @ 018068d8

/* Function Stack Size: 0x10 bytes */

void WCRefineAutoAcceptTransferTierEditorViewController::editInviteChatRoom(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *local_a8;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [15];
  bool local_51;
  undefined *local_50;
  byte local_41;
  ID local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  ID local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_inviteChatRoom_026b5ba0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_41 = 0;
  local_51 = false;
  if (IVar4 == 0) {
    local_a8 = *(undefined **)PTR____NSArray0___02578280;
  }
  else {
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_inviteChatRoom_026b5ba0);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_a8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_40 = IVar5;
    local_20 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_a8;
  }
  local_51 = IVar4 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_a8;
  if ((local_51 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_initWeak(auStack_60,local_28);
  IVar3 = local_28;
  puVar2 = local_38;
  puVar1 = PTR_WCRefineChatRoomPicker_026cef60;
  local_88 = PTR___NSConcreteStackBlock_02578660;
  local_80 = 0xc2000000;
  local_7c = 0;
  local_78 = FUN_01806ba0;
  local_70 = &DAT_0257a7d0;
  _objc_copyWeak(auStack_68,auStack_60);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_presentFromViewController_title__026ab898,IVar3,&cf_b_,puVar2,&local_88);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

