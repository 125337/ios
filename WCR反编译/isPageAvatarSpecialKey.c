// isPageAvatarSpecialKey @ 0183bea0

/* Function Stack Size: 0x10 bytes */

bool WCRefineAvatarFrameSpecialUserDetailViewController::isPageAvatarSpecialKey
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRefineAvatarFramePageOverlayHelper_026cefb0;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isReservedSpecialKey__026b6610);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return (bool)puVar1;
}

