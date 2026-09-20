// runQuitSelectedChatRooms:deleteAllMsg: @ 018a5e10

/* Function Stack Size: 0x1c bytes */

void WCRefineChatRoomFunctionViewController::runQuitSelectedChatRooms_deleteAllMsg_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined1 auStack_50 [8];
  byte local_48;
  undefined1 auStack_40 [8];
  undefined *local_38;
  byte local_29;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  puVar4 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_W);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar4;
  _objc_initWeak(auStack_40,local_18);
  uVar3 = local_28;
  bVar2 = local_29;
  puVar1 = local_38;
  puVar4 = PTR_WCRefineChatRoomMuteHelper_026ce2f0;
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_018a5fbc;
  local_60 = &DAT_02589d68;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = puVar1;
  local_48 = local_29 & 1;
  _objc_copyWeak(auStack_50,auStack_40);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_quitChatRoomsWithUserNames_delet_026b76f0,uVar3,bVar2 & 1,&local_78);
  _objc_destroyWeak(auStack_50);
  _objc_storeStrong(&local_58);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

