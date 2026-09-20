// wcrCustomExtraCountInSection: @ 017c7680

/* Function Stack Size: 0x18 bytes */

long_long WCRefineAIPersonaLibraryViewController::wcrCustomExtraCountInSection_
                    (ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  long_long local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrGroupIsCustom__026b4ed0,param_3);
  if ((IVar1 & 1) == 0) {
    local_18 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrShowsFollowGlobal_026b4e98);
    local_18 = (long_long)(int)(((param_1 & 1) != 0) + 1);
  }
  return local_18;
}

