// FUN_00392a24 @ 00392a24

void FUN_00392a24(void)

{
  undefined *puVar1;
  undefined *local_18;
  
  puVar1 = PTR_WCRGroupingSnapshot_026ce5b8;
  _objc_alloc_init();
  local_18 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTargetSection__026a2b88,DAT_02324060);
  puVar1 = PTR____NSArray0___02578280;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setPreservedOriginalRows__026a2b90,
             *(undefined8 *)PTR____NSArray0___02578280);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setTrailingOriginalRows__026a2b98,*(undefined8 *)puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setHiddenOriginalRowsBySection__026a2ba0,
             *(undefined8 *)PTR____NSDictionary0___02578288);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setHiddenSessionUsernames__026a2ce8,*(undefined8 *)puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEntries__026a2ba8,*(undefined8 *)puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setFriendItems__026a2bb0,*(undefined8 *)puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setChatRoomItems__026a2bb8,*(undefined8 *)puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setOtherItems__026a2bc0,*(undefined8 *)puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBuiltForInlineMode__026a2d58,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDisplaySignature__026a2d50);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLayoutSignature__026a2d60,&cf_empty);
  puVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

