// bindGroupSource @ 01aaca74

/* Function Stack Size: 0x10 bytes */

void WCRGroupCreateViewController::bindGroupSource(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID local_88;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_initWeak(auStack_28,param_1);
  IVar2 = local_18;
  puVar1 = PTR_WCRefineChatRoomPicker_026cef60;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_memberSyncChatRoomsDraft_026bdbc8);
  _objc_retainAutoreleasedReturnValue();
  local_88 = IVar3;
  if (IVar3 == 0) {
    local_88 = *(ID *)PTR____NSArray0___02578280;
  }
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_01aacbec;
  local_48 = &DAT_0257a7d0;
  _objc_copyWeak(auStack_40,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_presentFromViewController_title__026ab898,IVar2,&cf____JSY,local_88,
             &local_60);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_28);
  return;
}

