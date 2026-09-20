// quickChatSidebarAlpha @ 02148de4

/* Function Stack Size: 0x10 bytes */

double WCRefineConfig::quickChatSidebarAlpha(ID param_1,SEL param_2)

{
  double dVar1;
  ID IVar2;
  double local_48;
  double local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  dVar1 = DAT_02323da8;
  local_48 = DAT_02323da8;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
  if ((IVar2 & 1) == 0) {
    local_48 = DAT_02323e70;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_doubleValue_026ca608);
  }
  local_30 = local_48;
  if (local_48 < dVar1) {
    local_30 = dVar1;
  }
  if (1.0 < local_30) {
    local_30 = 1.0;
  }
  _objc_storeStrong(&local_28,0);
  return local_30;
}

