// FUN_005ba22c @ 005ba22c

void FUN_005ba22c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  uint local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  long local_58;
  undefined4 local_50;
  int local_4c;
  ulong local_48;
  undefined4 local_40;
  byte local_39;
  long local_38;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = DAT_028cb640;
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = lVar1;
  local_39 = 0;
  local_7c = 1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_openedNoteViewController_026a58e8);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_7c = 1;
    local_38 = lVar1;
    if (lVar1 == 0) {
      lVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tappedCollectButton_026a58f0);
      local_7c = (uint)lVar1;
    }
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if ((local_7c & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_setOpenedNoteViewController__026a58f8,local_18);
    uVar2 = local_18;
    FUN_005bb4d0();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    FUN_005bb648(uVar2,&cf_favId,PTR_s_favId_026a1428);
    local_4c = (int)uVar2;
    uVar2 = local_48;
    FUN_005bb648(local_48,&cf_localId,PTR_s_localId_026a1440);
    local_50 = (undefined4)uVar2;
    if (local_4c == 0) {
      if (local_48 != 0) {
        FUN_005bba1c(local_48,PTR_s_setFavId__026a5748,0);
        FUN_005bba1c(local_48,PTR_s_setLocalId__026a5900,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setTappedCollectButton__026a5908,1);
      DAT_028cb730 = 1;
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_onClickMoreBtn_026a5910);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_onMenuAction__026a5918);
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onMenuAction__026a5918,0);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onClickMoreBtn_026a5910);
      }
      dVar3 = _dispatch_time(0,550000000);
      puVar4 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_20;
      local_78 = PTR___NSConcreteStackBlock_02578660;
      local_70 = 0xc2000000;
      local_6c = 0;
      local_68 = FUN_005bbb74;
      local_60 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = lVar1;
      _dispatch_after(dVar3,puVar4,&local_78);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_58,0);
      local_40 = 0;
    }
    else {
      _objc_storeStrong(local_4c,&DAT_028cb640,0);
      FUN_005bb92c(local_18);
      local_40 = 1;
    }
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_40 = 1;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

