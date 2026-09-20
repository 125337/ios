// lightweightWrapForItem: @ 010984ac

/* Function Stack Size: 0x18 bytes */

ID WCRefineLocalEmoticonStore::lightweightWrapForItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  char *local_58;
  ulong local_50;
  char *local_48;
  char *local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if ((local_30 == 0) ||
     (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isPack_026ae428),
     (uVar2 & 1) != 0)) {
    local_18 = (char *)0x0;
    local_34 = 1;
  }
  else {
    pcVar3 = "CEmoticonWrap";
    _objc_getClass();
    local_40 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      local_18 = (char *)0x0;
      local_34 = 1;
    }
    else {
      _objc_alloc_init();
      uVar2 = local_30;
      local_48 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_md5_026a3da0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
      if (uVar2 == 0x20) {
        local_58 = (char *)0x0;
        pcVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_m_emojiInfo_026a3d98);
        if (((ulong)pcVar3 & 1) != 0) {
          pcVar4 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_m_emojiInfo_026a3d98);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_58;
          local_58 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
        if ((local_58 != (char *)0x0) &&
           (pcVar3 = local_58,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setMd5__026ac158),
           ((ulong)pcVar3 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setMd5__026ac158,local_50);
        }
        if ((local_58 != (char *)0x0) &&
           (pcVar3 = local_58,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setProductId__026ac400),
           ((ulong)pcVar3 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_setProductId__026ac400,&cf_wcr_local_emoticon_pid);
        }
        _objc_storeStrong(&local_58,0);
      }
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_setM_uiType__026ac168);
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setM_uiType__026ac168,2);
      }
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_setM_bCanDelete__026ae438);
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setM_bCanDelete__026ae438,1);
      }
      pcVar3 = local_48;
      uVar1 = DAT_0280e168;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(pcVar3,uVar1,puVar5,1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_relativePath_026ac370);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      pcVar3 = local_48;
      uVar1 = DAT_0280e170;
      if (uVar6 != 0) {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_relativePath_026ac370);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(pcVar3,uVar1,uVar2,3);
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      pcVar3 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar3;
      local_34 = 1;
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

