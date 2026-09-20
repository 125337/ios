// FUN_0029a48c @ 0029a48c

void FUN_0029a48c(undefined8 param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  ulong uVar5;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60 [4];
  char *local_40;
  uint local_34;
  char *local_30;
  char *local_28;
  
  local_30 = (char *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == (char *)0x0) {
    local_28 = (char *)0x0;
    local_34 = 1;
    goto LAB_0029a9ec;
  }
  local_40 = (char *)0x0;
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_objectId);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_40;
  local_40 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = local_40;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((((ulong)pcVar4 & 1) == 0) ||
      (pcVar4 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
      pcVar4 == (char *)0x0)) &&
     (pcVar4 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_objectId_026a18b8),
     ((ulong)pcVar4 & 1) != 0)) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectId_026a18b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_40;
    local_40 = pcVar2;
    (*(code *)PTR__objc_release_02578630)();
  }
  FUN_0029aa14();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_40;
  uVar5 = 0;
  local_60[0] = pcVar4;
  if (pcVar4 == (char *)0x0) {
LAB_0029a8dc:
    pcVar4 = "WCFinderConvertHelper";
    _objc_getClass(uVar5);
    local_78 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_convertShareItemToDataItem__026a18d0)
    ;
    if (((ulong)pcVar4 & 1) == 0) {
      local_28 = (char *)0x0;
      local_34 = 1;
    }
    else {
      pcVar4 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_convertShareItemToDataItem__026a18d0,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_80 = pcVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_34 = 1;
      local_28 = pcVar4;
      _objc_storeStrong(&local_80,0);
    }
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar5 = (ulong)pcVar2 & 0xffffffff;
    if (((ulong)pcVar2 & 1) == 0) goto LAB_0029a8dc;
    pcVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    uVar5 = 0;
    if (pcVar4 == (char *)0x0) goto LAB_0029a8dc;
    pcVar4 = local_60[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60[0],PTR_s_respondsToSelector__026ca818,
               PTR_s_getLocalDataItemWithTid__026a18c0);
    if (((ulong)pcVar4 & 1) == 0) {
LAB_0029a818:
      pcVar4 = local_60[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60[0],PTR_s_respondsToSelector__026ca818,
                 PTR_s_getFinderDataItemWithTid__026a18c8);
      uVar1 = (uint)pcVar4;
      if (((ulong)pcVar4 & 1) != 0) {
        pcVar4 = local_60[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60[0],PTR_s_getFinderDataItemWithTid__026a18c8,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_70 = pcVar4;
        if (pcVar4 != (char *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar4;
        }
        local_34 = (uint)(pcVar4 != (char *)0x0);
        _objc_storeStrong(&local_70,0);
        if (local_34 != 0) goto LAB_0029a9ac;
        uVar1 = 0;
      }
      uVar5 = (ulong)uVar1;
      goto LAB_0029a8dc;
    }
    pcVar4 = local_60[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60[0],PTR_s_getLocalDataItemWithTid__026a18c0,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar4;
    if (pcVar4 != (char *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar4;
    }
    local_34 = (uint)(pcVar4 != (char *)0x0);
    _objc_storeStrong(&local_68,0);
    if (local_34 == 0) goto LAB_0029a818;
  }
LAB_0029a9ac:
  _objc_storeStrong(local_60);
  _objc_storeStrong(&local_40,0);
LAB_0029a9ec:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

