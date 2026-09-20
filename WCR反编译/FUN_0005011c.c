// FUN_0005011c @ 0005011c

byte FUN_0005011c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_50;
  char *local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0004fa34();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_hasPrefix__0269d320,&cf_gh_);
    if ((((uVar1 & 1) == 0) &&
        (uVar1 = local_40,
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasSuffix__0269d018,&cf__weclaw),
        (uVar1 & 1) == 0)) && (uVar1 = local_28, FUN_0005059c(), (uVar1 & 1) == 0)) {
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,
                 local_28);
      if (((ulong)puVar2 & 1) == 0) {
        uVar1 = local_28;
        FUN_0004ff90();
        if (((uVar1 & 1) == 0) &&
           (uVar1 = local_40,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_40,PTR_s_containsString__0269d0b0,&cf__openim), (uVar1 & 1) == 0)) {
          pcVar3 = "CContactMgr";
          _objc_getClass();
          FUN_0004ea88();
          _objc_retainAutoreleasedReturnValue();
          local_48 = pcVar3;
          if ((pcVar3 == (char *)0x0) ||
             ((*(code *)PTR__objc_msgSend_02578628)
                        (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178)
             , ((ulong)pcVar3 & 1) == 0)) {
            local_11 = 0;
            local_38 = 1;
          }
          else {
            local_50 = (char *)0x0;
            pcVar4 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_getContactByName__0269d178,local_28);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_50;
            local_50 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            pcVar3 = local_50;
            FUN_00050734();
            local_11 = (byte)pcVar3 & 1;
            local_38 = 1;
            _objc_storeStrong(&local_50,0);
          }
          _objc_storeStrong(&local_48,0);
        }
        else {
          local_11 = 0;
          local_38 = 1;
        }
      }
      else {
        local_11 = 1;
        local_38 = 1;
      }
    }
    else {
      local_11 = 1;
      local_38 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

