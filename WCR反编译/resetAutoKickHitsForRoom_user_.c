// resetAutoKickHitsForRoom:user: @ 00ed8364

/* Function Stack Size: 0x20 bytes */

void WCRefineChatRoomKickHelper::resetAutoKickHitsForRoom_user_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID local_40;
  ID local_38;
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
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcr_hitKeyForRoom_user__026ab6d8,local_28,local_30);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_store_026ab6d0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar2;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(IVar2);
  IVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_hits);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_sync_exit(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_saveStore_026ab6f0);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

