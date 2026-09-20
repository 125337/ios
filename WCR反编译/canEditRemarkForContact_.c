// canEditRemarkForContact: @ 0112bc90

/* Function Stack Size: 0x18 bytes */

bool WCRefineQuickRemarkEditor::canEditRemarkForContact_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  long local_58;
  long local_50;
  undefined4 local_44;
  long local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  if (local_40 == 0) {
    local_21 = 0;
    local_44 = 1;
  }
  else {
    lVar2 = local_40;
    FUN_0112bf98(local_40,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      lVar3 = local_40;
      FUN_0112bf98(local_40,&cf_m_nsUserName);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_50;
      local_50 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
    lVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      local_21 = 0;
      local_44 = 1;
    }
    else {
      lVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      local_18 = &DAT_028e3570;
      local_20 = 0;
      local_58 = lVar2;
      _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02585880);
      if (*local_18 + 1 != 0) {
        _dispatch_once(*local_18 + 1,local_18,local_20);
      }
      _objc_storeStrong(&local_20,0);
      uVar4 = DAT_028e3568;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3568,PTR_s_containsObject__0269cbb8,local_58);
      if ((uVar4 & 1) == 0) {
        pcVar5 = "MMKernelUtil";
        _objc_getClass();
        puVar1 = PTR_s_IsBrandContact__026af250;
        if (((pcVar5 == (char *)0x0) ||
            (pcVar6 = pcVar5,
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_IsBrandContact__026af250),
            ((ulong)pcVar6 & 1) == 0)) ||
           ((*(code *)PTR__objc_msgSend_02578628)(pcVar5,puVar1,local_50), ((ulong)pcVar5 & 1) == 0)
           ) {
          local_21 = 1;
        }
        else {
          local_21 = 0;
        }
      }
      else {
        local_21 = 0;
      }
      local_44 = 1;
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

