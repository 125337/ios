// wcr_discardHeadCacheForUser:headImageMgr:cacher: @ 00ed60f4

/* Function Stack Size: 0x28 bytes */

void WCRefineChatRoomKickHelper::wcr_discardHeadCacheForUser_headImageMgr_cacher_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ulong uVar2;
  ID local_40;
  ulong local_38;
  ulong local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_trimmedString__0269ec98,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 != 0) {
    if (local_38 != 0) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_discardCachedHeadImg__026a0a20);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_discardCachedHeadImg__026a0a20,local_40);
      }
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,
                 PTR_s_discardCachedHeadImgInMemory__026a0a28);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_discardCachedHeadImgInMemory__026a0a28,local_40);
      }
    }
    if ((local_30 != 0) &&
       (uVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_deleteUsrHeadImg__026a0a38),
       (uVar2 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_deleteUsrHeadImg__026a0a38,local_40);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

