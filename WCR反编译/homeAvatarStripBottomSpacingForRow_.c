// homeAvatarStripBottomSpacingForRow: @ 0215cc28

/* Function Stack Size: 0x18 bytes */

double __thiscall
WCRefineConfig::homeAvatarStripBottomSpacingForRow_
          (WCRefineConfig *this,ID param_1,SEL param_2,long_long param_3)

{
  long_long lVar1;
  ID IVar2;
  ID IVar3;
  double in_d0;
  double local_60;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_homeAvatarStripNormalizedRowConf_026be298);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_30;
  local_38 = param_1;
  if (((long)local_30 < 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0),
     (long)param_1 <= (long)lVar1)) {
    local_18 = 0.0;
    local_3c = 1;
  }
  else {
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_30);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    if ((IVar2 & 1) == 0) {
      local_60 = 0.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_doubleValue_026ca608);
      local_60 = in_d0;
    }
    local_18 = local_60;
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return local_18;
}

