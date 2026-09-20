// FUN_006b527c @ 006b527c

void FUN_006b527c(double param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_40;
  double local_38;
  uint local_2c;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_20 = param_2;
  local_18 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldHangupUsername__026a6878,
             *(undefined8 *)(param_2 + 0x20));
  if ((((ulong)puVar2 & 1) == 0) ||
     (puVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hangupAutoReplyEnabled_026a6880),
     ((ulong)puVar1 & 1) == 0)) {
    local_2c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar3 = *(ulong *)(param_2 + 0x20);
    local_38 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8,DAT_028cbe20);
    if (((uVar3 & 1) == 0) || (8.0 <= local_38 - DAT_028cc0d0)) {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hangupAutoReplyText_026a6888);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (puVar1 != (undefined *)0x0) {
        _objc_storeStrong(&DAT_028cbe20,*(undefined8 *)(param_2 + 0x20));
        DAT_028cc0d0 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,local_40,
                   *(undefined8 *)(param_2 + 0x20));
      }
      local_2c = (uint)(puVar1 == (undefined *)0x0);
      _objc_storeStrong(&local_40,0);
    }
    else {
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

