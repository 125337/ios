// abTestChatAlbumPageSheetMode @ 0203297c

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::abTestChatAlbumPageSheetMode(ID param_1,SEL param_2)

{
  SEL SVar1;
  ID IVar2;
  SEL local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_28;
  local_30 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_30;
  local_38 = SVar1;
  FUN_0202f3fc(local_30,SVar1,0,0);
  local_18 = IVar2;
  if ((IVar2 == 1) && (_WCRefineIsChatAlbumPageSheetSupportedByCurrentWeChat(0), (IVar2 & 1) == 0))
  {
    FUN_0202fa84(local_30,local_38,0);
    local_18 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

