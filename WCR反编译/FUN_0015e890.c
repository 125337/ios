// FUN_0015e890 @ 0015e890

void FUN_0015e890(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  char *local_f8;
  char *local_b0;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  undefined4 local_40;
  long local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    pcVar2 = *(char **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = 1;
    local_28 = pcVar2;
    goto LAB_0015ec9c;
  }
  pcVar2 = "CGroupMgr";
  _objc_getClass();
  FUN_0015f0b8();
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar2;
  if (pcVar2 == (char *)0x0) {
LAB_0015eaa0:
    pcVar2 = "CContactMgr";
    _objc_getClass();
    FUN_0015f0b8();
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    if (pcVar2 == (char *)0x0) {
LAB_0015ec2c:
      pcVar2 = *(char **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = 1;
      local_28 = pcVar2;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,
                 PTR_s_getChatRoomTopMsgInfoListWithUse_0269f670);
      if (((ulong)pcVar2 & 1) == 0) goto LAB_0015ec2c;
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_getChatRoomTopMsgInfoListWithUse_0269f670,local_30,0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_60 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)pcVar2 & 1) == 0) {
        local_f8 = *(char **)PTR____NSArray0___02578280;
      }
      else {
        local_f8 = local_60;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_f8;
      local_40 = 1;
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,
               PTR_s_getChatRoomTopMsgInfoListWithUse_0269f668);
    if (((ulong)pcVar2 & 1) == 0) goto LAB_0015eaa0;
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_getChatRoomTopMsgInfoListWithUse_0269f668,local_30);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_50 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar2 & 1) == 0) {
      local_b0 = *(char **)PTR____NSArray0___02578280;
    }
    else {
      local_b0 = local_50;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_b0;
    local_40 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_48,0);
LAB_0015ec9c:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

