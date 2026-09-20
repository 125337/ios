// FUN_0156492c @ 0156492c

byte FUN_0156492c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ulong local_68;
  ulong local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  char *local_48;
  ulong local_40;
  ulong local_38;
  long local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) || (uVar2 = local_20, FUN_01564574(), (uVar2 & 1) != 0)) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    lVar3 = DAT_028e3900;
    FUN_01528c84();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = DAT_028e38f8;
    local_30 = lVar3;
    FUN_01528c84();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_30;
    local_38 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if ((lVar3 == 0) ||
       (uVar2 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
       uVar2 == 0)) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      FUN_01565438();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = "ChatRoomInfoViewController";
      local_40 = uVar2;
      _objc_getClass();
      pcVar5 = &cf_openContactInfo_;
      local_48 = pcVar4;
      _NSSelectorFromString();
      local_50 = pcVar5;
      if (((local_48 == (char *)0x0) ||
          (uVar2 = local_40,
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isKindOfClass__0269cd68,local_48),
          (uVar2 & 1) == 0)) ||
         (uVar6 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,local_50)
         , uVar2 = local_40, puVar1 = PTR_WCRefineTopBarProfileCardPresenter_026ce228,
         (uVar6 & 1) == 0)) {
        local_11 = 0;
        local_24 = 1;
      }
      else {
        local_88 = PTR___NSConcreteStackBlock_02578660;
        local_80 = 0xc2000000;
        local_7c = 0;
        local_78 = FUN_015655dc;
        local_70 = &DAT_0257a740;
        (*(code *)PTR__objc_retain_02578638)();
        uVar6 = local_20;
        local_68 = uVar2;
        local_58 = local_50;
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_performWithoutChatAvatarProfileC_026a5f80,&local_88);
        local_11 = 1;
        local_24 = 1;
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

