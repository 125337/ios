// FUN_015c54f8 @ 015c54f8

byte FUN_015c54f8(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  char *local_38;
  char *local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_015c5614;
  }
  pcVar1 = "MsgPlayingFacade";
  _objc_getClass();
  FUN_015c5634();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar1;
  FUN_015c25f4(pcVar1,PTR_s_currentPlayingMsg_026b0dc0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  if (pcVar1 == (char *)0x0) {
LAB_015c55d8:
    local_11 = 0;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_IsSameMsg__026a99b8);
    if ((uVar2 & 1) == 0) goto LAB_015c55d8;
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_IsSameMsg__026a99b8,local_38);
    local_11 = (byte)uVar2 & 1;
  }
  local_24 = 1;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
LAB_015c5614:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

