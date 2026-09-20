// FUN_00f6f008 @ 00f6f008

void FUN_00f6f008(void)

{
  char *pcVar1;
  undefined *puVar2;
  char *local_20;
  char *local_18;
  
  pcVar1 = "MMMenuController";
  _objc_getClass();
  local_18 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_sharedMenuController_026a0478);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sharedMenuController_026a0478);
    _objc_retainAutoreleasedReturnValue();
    local_20 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setMenuVisible_animated__026a0088);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setMenuVisible_animated__026a0088,0,1);
    }
    _objc_storeStrong(&local_20,0);
  }
  puVar2 = PTR__OBJC_CLASS___UIMenuController_026ce770;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIMenuController_026ce770,PTR_s_sharedMenuController_026a0478);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

