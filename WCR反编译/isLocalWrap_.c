// isLocalWrap: @ 01082278

/* Function Stack Size: 0x18 bytes */

bool WCRefineLocalEmoticonStore::isLocalWrap_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  byte local_6c;
  ulong local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    uVar1 = local_30;
    _objc_getAssociatedObject(local_30,DAT_0280e168);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) == 0) {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_relativePathForWrap__026ae2a0,local_30);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if (IVar4 == 0) {
        local_40 = 0;
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_m_emojiInfo_026a3d98);
        if ((uVar1 & 1) != 0) {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_emojiInfo_026a3d98);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_40;
          local_40 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        local_48 = 0;
        if (local_40 != 0) {
          uVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_productId_026ae2a8);
          if ((uVar1 & 1) != 0) {
            uVar2 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_productId_026ae2a8);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = local_48;
            local_48 = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar1);
          }
        }
        uVar1 = local_48;
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar5);
        local_6c = 0;
        if ((uVar1 & 1) != 0) {
          uVar1 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_isEqualToString__0269ccc8,&cf_wcr_local_emoticon_pid);
          local_6c = (byte)uVar1;
        }
        local_11 = local_6c & 1;
        local_34 = 1;
        _objc_storeStrong(&local_48);
        _objc_storeStrong(&local_40,0);
      }
      else {
        local_11 = 1;
        local_34 = 1;
      }
    }
    else {
      local_11 = 1;
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

