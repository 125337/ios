// fetchNeteasePlaylist:callbackId: @ 01e98814

/* Function Stack Size: 0x20 bytes */

void WCRefineToDoCardView::fetchNeteasePlaylist_callbackId_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  _objc_initWeak(auStack_38,local_18);
  uVar3 = local_28;
  puVar1 = PTR_WCRefineToDoCardView_026ce978;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01e98974;
  local_50 = &DAT_025887c8;
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_fetchNeteasePlaylistWithId_compl_026c34e0,uVar3,&local_68);
  _objc_storeStrong(&local_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

