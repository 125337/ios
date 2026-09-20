// FUN_01520f2c @ 01520f2c

byte FUN_01520f2c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_01516994();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_isEqualToString__0269ccc8,&cf_chatroom_session_box);
  if ((uVar1 & 1) == 0) {
    pcVar3 = "ChatBoxUtil";
    _objc_getClass();
    pcVar4 = &cf_isChatBox_;
    _NSSelectorFromString();
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    if (((uVar1 == 0) ||
        (pcVar5 = pcVar3,
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_respondsToSelector__026ca818,pcVar4),
        ((ulong)pcVar5 & 1) == 0)) ||
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar4,local_20), ((ulong)pcVar3 & 1) == 0)) {
      uVar1 = local_28;
      FUN_0152119c(local_28,&cf_isChatBoxSession);
      if (((uVar1 & 1) == 0) &&
         (uVar1 = local_28, FUN_0152119c(local_28,&cf_isChatBoxContact), (uVar1 & 1) == 0)) {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 1;
    }
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

