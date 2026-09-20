// FUN_0024c8fc @ 0024c8fc

void FUN_0024c8fc(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  (*DAT_028c93a0)(param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
  local_40 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_isEnabled_026a0ef0);
  if ((((ulong)puVar2 & 1) == 0) || (puVar2 = local_30, FUN_002592fc(), ((ulong)puVar2 & 1) == 0)) {
    puVar2 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
    local_50 = 1;
    goto LAB_0024ce7c;
  }
  puVar3 = PTR_WCRefineEmoticonGroupStore_026ce420;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_selectedFilterGroupId_026a0fe8);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_isEqualToString__0269ccc8,_WCREmoticonGroupAllId);
  puVar2 = local_40;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_dataGeneration_026a0ff0);
    puVar3 = local_30;
    local_60 = puVar2;
    _objc_getAssociatedObject(local_30,DAT_026dfb88);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_30;
    local_68 = puVar3;
    _objc_getAssociatedObject(local_30,DAT_026dfba0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_30;
    local_70 = puVar2;
    _objc_getAssociatedObject(local_30,DAT_026dfba8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_30;
    local_78 = puVar3;
    _objc_getAssociatedObject(local_30,DAT_026dfb80);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
    local_80 = puVar2;
    if ((puVar2 == (undefined *)0x0) || (uVar4 = (long)local_68 - (long)local_40, uVar4 != 0)) {
LAB_0024cc14:
      _CFAbsoluteTimeGetCurrent(uVar4);
      puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
      local_88 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineEmoticonGroupStore_026ce420,
                 PTR_s_filterEmoticonWraps_byGroupId__026a0ff8,local_40,local_58);
      _objc_retainAutoreleasedReturnValue();
      local_90 = puVar2;
      _CFAbsoluteTimeGetCurrent();
      _objc_setAssociatedObject(local_30,DAT_026dfb80,local_90,1);
      _objc_setAssociatedObject(local_30,DAT_026dfb88,local_40,0);
      puVar2 = local_30;
      uVar1 = DAT_026dfba0;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_60);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(puVar2,uVar1,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_setAssociatedObject(local_30,DAT_026dfba8,local_58,3);
      puVar2 = local_90;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_50 = 1;
      _objc_storeStrong(&local_90,0);
    }
    else {
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_integerValue_026ca750);
      uVar4 = (long)puVar2 - (long)local_60;
      if (uVar4 != 0) goto LAB_0024cc14;
      puVar3 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,local_58);
      puVar2 = local_80;
      uVar4 = (ulong)puVar3 & 0xffffffff;
      if (((ulong)puVar3 & 1) == 0) goto LAB_0024cc14;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
      local_50 = 1;
    }
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
    local_50 = 1;
  }
  _objc_storeStrong(&local_58,0);
LAB_0024ce7c:
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

