// isDarkMode @ 018451f4

/* WARNING: Removing unreachable block (ram,0x01845274) */
/* Function Stack Size: 0x10 bytes */

bool WCRefineAvatarFrameSpecialUsersViewController::isDarkMode(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_traitCollection_026caba8);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return (uint)(IVar1 == 2);
}

