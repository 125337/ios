// FUN_01561c40 @ 01561c40

undefined4 FUN_01561c40(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  char *local_60;
  cfstringStruct *local_58;
  char *local_50;
  char *local_48;
  undefined *local_40;
  char *local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_14 = 0;
    local_2c = 1;
  }
  else {
    pcVar2 = "MMServiceCenter";
    _objc_getClass();
    FUN_01533df4();
    _objc_retainAutoreleasedReturnValue();
    local_40 = PTR_s_getService__0269d170;
    pcVar3 = "CMessageMgr";
    local_38 = pcVar2;
    _objc_getClass();
    local_50 = (char *)0x0;
    local_48 = pcVar3;
    if (((local_38 != (char *)0x0) && (pcVar3 != (char *)0x0)) &&
       (pcVar2 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,local_40),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,local_40,local_48);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_50;
      local_50 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar4 = &cf_GetLastMsgFromUsr_;
    _NSSelectorFromString();
    local_58 = pcVar4;
    if ((local_50 == (char *)0x0) ||
       (pcVar2 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar4),
       ((ulong)pcVar2 & 1) == 0)) {
      local_14 = 0;
      local_2c = 1;
    }
    else {
      local_60 = (char *)0x0;
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,local_58,local_28);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_60;
      local_60 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_60;
      FUN_015623d8(local_60,PTR_s_m_uiCreateTime_0269d208,0);
      local_14 = SUB84(pcVar2,0);
      local_2c = 1;
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_14;
}

