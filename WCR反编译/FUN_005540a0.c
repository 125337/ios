// FUN_005540a0 @ 005540a0

void FUN_005540a0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *local_40;
  ulong local_38;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((local_18 == 0) ||
     (uVar1 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_likeFlag_026a4708),
     (uVar1 & 1) != 0)) {
    local_28 = 1;
  }
  else {
    uVar1 = local_18;
    FUN_00550aa0(local_18,&cf_username);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      uVar2 = local_18;
      FUN_00550aa0(local_18,&cf_sourceUserName);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_18;
    FUN_00550aa0(local_18,&cf_itemID);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if ((uVar2 == 0) ||
       (uVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
       uVar1 == 0)) {
      local_28 = 1;
    }
    else {
      if (DAT_028cb400 == (char *)0x0) {
        pcVar3 = "MMContext";
        _objc_getClass();
        DAT_028cb400 = pcVar3;
      }
      pcVar3 = DAT_028cb400;
      _objc_retainAutoreleaseReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      if (DAT_028cb428 == (char *)0x0) {
        pcVar4 = "WCFacade";
        _objc_getClass();
        DAT_028cb428 = pcVar4;
      }
      pcVar4 = DAT_028cb428;
      _objc_retainAutoreleaseReturnValue();
      pcVar5 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getService__0269d170,pcVar4);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      if (local_40 == (char *)0x0) {
        local_28 = 1;
      }
      else {
        pcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_logLikeFeed__026a4760);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_logLikeFeed__026a4760,local_18);
        }
        pcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,
                   PTR_s_likeObject_ofUser_source__026a4770);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_likeObject_ofUser_source__026a4770,local_18,local_30,0);
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLikeFlag__026a4778,1);
        }
        local_28 = 0;
      }
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

