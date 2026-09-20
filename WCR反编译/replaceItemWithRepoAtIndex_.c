// replaceItemWithRepoAtIndex: @ 01a0c9c4

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordMultiReplyEditorViewController::replaceItemWithRepoAtIndex_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  ID local_b0;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined1 auStack_68 [8];
  ulong local_60;
  undefined1 auStack_58 [15];
  bool local_49;
  ID local_48;
  byte local_39;
  ID local_38;
  ID local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setEditingItemIndex__026bb6b0,param_3);
  uVar2 = local_28;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_39 = 0;
  local_49 = false;
  if (IVar4 <= uVar2) {
    local_b0 = 0;
  }
  else {
    local_b0 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_b0;
  }
  local_49 = IVar4 > uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_b0;
  if ((local_49 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_initWeak(auStack_58,local_18);
  IVar4 = local_18;
  IVar3 = local_30;
  puVar1 = PTR_WCRefineMessageRepositoryPicker_026cf050;
  local_88 = PTR___NSConcreteStackBlock_02578660;
  local_80 = 0xc2000000;
  local_7c = 0;
  local_78 = FUN_01a0cc5c;
  local_70 = &DAT_0258ab80;
  _objc_copyWeak(auStack_68,auStack_58);
  local_60 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_presentFromViewController_title__026ae548,IVar4,&cf_fbc_Nmo_N_,IVar3,
             &local_88);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_storeStrong(&local_30,0);
  return;
}

