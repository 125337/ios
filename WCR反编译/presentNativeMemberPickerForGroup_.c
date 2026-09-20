// presentNativeMemberPickerForGroup: @ 01abe5ec

/* Function Stack Size: 0x18 bytes */

void WCRGroupListViewController::presentNativeMemberPickerForGroup_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  long local_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [12];
  undefined4 local_3c;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  if (local_38 == 0) {
    local_3c = 1;
  }
  else {
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scope_0269ea90);
    if (lVar3 == 1) {
      _objc_initWeak(0,auStack_48,local_28);
      IVar2 = local_28;
      lVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_name_0269d828);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_members_0269ea98);
      _objc_retainAutoreleasedReturnValue();
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc2000000;
      local_7c = 0;
      local_78 = FUN_01abe9d8;
      local_70 = &DAT_025887c8;
      _objc_copyWeak(auStack_60,auStack_48);
      lVar3 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = lVar3;
      FUN_01aae4f8(IVar2,lVar4,lVar5,&local_88);
      (*(code *)PTR__objc_release_02578630)(lVar5);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      local_3c = 1;
      _objc_storeStrong(&local_68,0);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_48);
    }
    else {
      lVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scope_0269ea90);
      if (lVar3 == 2) {
        _objc_initWeak(0,auStack_90,local_28);
        IVar2 = local_28;
        puVar1 = PTR_WCRefineChatRoomPicker_026cef60;
        lVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_name_0269d828);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_members_0269ea98);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = PTR___NSConcreteStackBlock_02578660;
        local_b8 = 0xc2000000;
        local_b4 = 0;
        local_b0 = FUN_01abed10;
        local_a8 = &DAT_025887c8;
        _objc_copyWeak(auStack_98,auStack_90);
        lVar3 = local_38;
        (*(code *)PTR__objc_retain_02578638)();
        local_a0 = lVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_presentFromViewController_title__026ab898,IVar2,lVar4,lVar5,
                   &local_c0);
        (*(code *)PTR__objc_release_02578630)(lVar5);
        (*(code *)PTR__objc_release_02578630)(lVar4);
        local_3c = 1;
        _objc_storeStrong(&local_a0,0);
        _objc_destroyWeak(auStack_98);
        _objc_destroyWeak(auStack_90);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_presentOtherSourceMenuForGroup__026bdf08,local_38);
        local_3c = 0;
      }
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

