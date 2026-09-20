// quickChatNicknameSpacing @ 02149f98

/* Function Stack Size: 0x10 bytes */

double __thiscall
WCRefineConfig::quickChatNicknameSpacing(WCRefineConfig *this,ID param_1,SEL param_2)

{
  ID IVar1;
  double in_d0;
  double local_80;
  double local_78;
  double local_70;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
  if ((IVar1 & 1) == 0) {
    local_70 = 4.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_doubleValue_026ca608);
    local_70 = in_d0;
  }
  if (local_70 <= 20.0) {
    local_78 = local_70;
  }
  else {
    local_78 = 20.0;
  }
  if (local_78 <= 0.0) {
    local_80 = 0.0;
  }
  else {
    local_80 = local_78;
  }
  _objc_storeStrong(&local_28,0);
  return local_80;
}

