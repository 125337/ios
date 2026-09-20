// FUN_000297dc @ 000297dc

void FUN_000297dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_f0;
  bool local_71;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  int local_50;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_path_0269d4d8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    if (local_38 != 0) {
      (**(code **)(local_38 + 0x10))(local_38,0);
    }
    local_50 = 1;
  }
  else {
    pcVar2 = "MMServiceCenter";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = "CContactMgr";
    local_58 = pcVar2;
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getService__0269d170,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
    local_71 = ((ulong)pcVar2 & 1) == 0;
    if (local_71) {
      local_f0 = (char *)0x0;
    }
    else {
      local_f0 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_getContactByName__0269d178,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_f0;
    }
    local_71 = !local_71;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_f0;
    if (local_71) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if (local_68 == (char *)0x0) {
      if (local_38 != 0) {
        (**(code **)(local_38 + 0x10))(local_38,0);
      }
      local_50 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_wcr_sendVideoAtPath_toContact_co_0269d4e0,
                 local_40,local_68,local_38);
      local_50 = 0;
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    if (local_50 == 0) {
      local_50 = 0;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

