// FUN_005bd044 @ 005bd044

byte FUN_005bd044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *local_b0 [2];
  long local_a0;
  long local_98;
  char *local_90;
  undefined4 local_84;
  undefined *local_80;
  undefined *local_78;
  char *local_70;
  char *local_58;
  byte local_49;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  pcVar1 = "WCDataItem";
  local_49 = param_5;
  _objc_getClass();
  pcVar2 = "WCForwardViewController";
  local_58 = pcVar1;
  _objc_getClass();
  local_78 = PTR_s_fromUploadTask__026a5938;
  local_80 = PTR_s_initWithDataItem__026a5940;
  local_70 = pcVar2;
  if ((((local_30 == 0) || (local_58 == (char *)0x0)) || (pcVar2 == (char *)0x0)) ||
     ((pcVar1 = local_58,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_fromUploadTask__026a5938),
      ((ulong)pcVar1 & 1) == 0 ||
      (pcVar1 = local_70,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_instancesRespondToSelector__0269da90,local_80),
      ((ulong)pcVar1 & 1) == 0)))) {
    local_21 = 0;
    local_84 = 1;
  }
  else {
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,local_78,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_90 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_21 = 0;
      local_84 = 1;
    }
    else {
      if ((local_49 & 1) != 0) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_setValue_forKey__0269d300,puVar3,&cf_isFromFav);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        lVar4 = local_38;
        FUN_0059d260(local_38,&cf_favCheckId);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        FUN_005a0828();
        _objc_retainAutoreleasedReturnValue();
        local_98 = lVar5;
        (*(code *)PTR__objc_release_02578630)(lVar4);
        lVar4 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
        if (lVar4 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_setValue_forKey__0269d300,local_98,&cf_draftID);
        }
        lVar4 = local_38;
        FUN_0059d260(local_38,&cf_localId);
        _objc_retainAutoreleasedReturnValue();
        local_a0 = lVar4;
        if (lVar4 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_setValue_forKey__0269d300,lVar4,&cf_favLocalId);
        }
        _objc_storeStrong(&local_a0);
        _objc_storeStrong(&local_98,0);
      }
      pcVar1 = local_70;
      _objc_alloc();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,local_80,local_90);
      _objc_retainAutoreleasedReturnValue();
      local_b0[0] = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if (local_b0[0] == (char *)0x0) {
        local_21 = 0;
      }
      else {
        pcVar1 = local_b0[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0[0],PTR_s_respondsToSelector__026ca818,PTR_s_setIPostSource__026a5948);
        if ((((ulong)pcVar1 & 1) != 0) &&
           (uVar6 = local_30,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_postSource_026a5950),
           (uVar6 & 1) != 0)) {
          uVar6 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_postSource_026a5950);
          (*(code *)PTR__objc_msgSend_02578628)(local_b0[0],PTR_s_setIPostSource__026a5948,uVar6);
        }
        FUN_0059ee6c(local_b0[0],local_48);
        uVar7 = local_40;
        FUN_0059f4cc(local_40,local_b0[0]);
        local_21 = (byte)uVar7 & 1;
      }
      local_84 = 1;
      _objc_storeStrong(local_b0,0);
    }
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

