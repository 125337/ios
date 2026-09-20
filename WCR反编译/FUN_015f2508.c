// FUN_015f2508 @ 015f2508

byte FUN_015f2508(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  uint local_7c;
  char *local_58;
  byte local_49;
  long local_48;
  long local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  FUN_015fab58();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  FUN_01604ce8();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  if ((local_28 == 0) || (lVar2 == 0)) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    local_49 = 0;
    local_7c = 1;
    if (local_40 != 0) {
      lVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_7c = (uint)lVar2;
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if ((local_7c & 1) == 0) {
      pcVar4 = "QuickReplyMsgMgr";
      _objc_getClass();
      FUN_015f9a60();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_s_showPageSheetSession_fromViewCon_026a2508;
      local_58 = pcVar4;
      if ((pcVar4 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_respondsToSelector__026ca818,
                     PTR_s_showPageSheetSession_fromViewCon_026a2508), ((ulong)pcVar4 & 1) == 0)) {
        local_11 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,puVar1,local_28,local_30);
        local_11 = 1;
      }
      local_34 = 1;
      _objc_storeStrong(&local_58,0);
    }
    else {
      local_11 = 0;
      local_34 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

