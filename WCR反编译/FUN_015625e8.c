// FUN_015625e8 @ 015625e8

byte FUN_015625e8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong local_60;
  cfstringStruct *local_58;
  undefined1 local_49;
  cfstringStruct *local_48;
  undefined *local_40;
  int local_34;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_28;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
    local_34 = 1;
    goto LAB_01562948;
  }
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf__chatroom);
  if (((uVar1 & 1) != 0) ||
     (uVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf__openim),
     (uVar1 & 1) != 0)) {
    local_11 = 0;
    local_34 = 1;
    goto LAB_01562948;
  }
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((puVar2 == (undefined *)0x0) ||
     (puVar2 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_30),
     ((ulong)puVar2 & 1) == 0)) {
    pcVar4 = &cf_isInContactList_;
    _NSSelectorFromString();
    local_48 = pcVar4;
    if ((local_20 != 0) &&
       (uVar1 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar4),
       (uVar1 & 1) != 0)) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_48,local_30);
      local_49 = (undefined1)uVar1;
      if ((uVar1 & 1) != 0) {
        local_11 = 1;
        local_34 = 1;
        goto LAB_01562938;
      }
    }
    pcVar4 = &cf_getContactByName_;
    _NSSelectorFromString();
    local_58 = pcVar4;
    if ((local_20 != 0) &&
       (uVar1 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,pcVar4),
       (uVar1 & 1) != 0)) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,local_58,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar1;
      if (uVar1 == 0) {
LAB_015628f8:
        local_34 = 0;
      }
      else {
        FUN_01533f64(uVar1,PTR_s_isBrandContact_0269d9c8,0);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_60;
          FUN_01533f64(local_60,PTR_s_isMyContact_0269ef80,0);
          if ((uVar1 & 1) == 0) goto LAB_015628f8;
          local_11 = 1;
          local_34 = 1;
        }
        else {
          local_11 = 0;
          local_34 = 1;
        }
      }
      _objc_storeStrong(&local_60,0);
      if (local_34 != 0) goto LAB_01562938;
    }
    local_11 = 0;
    local_34 = 1;
  }
  else {
    local_11 = 0;
    local_34 = 1;
  }
LAB_01562938:
  _objc_storeStrong(&local_40,0);
LAB_01562948:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

