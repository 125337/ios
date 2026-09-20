// FUN_003e705c @ 003e705c

void FUN_003e705c(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_100;
  undefined *local_70;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50 [3];
  undefined *local_38;
  long local_30;
  long local_28;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_026ce418;
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (puVar2 != (undefined *)0x0) {
    puVar3 = *(undefined **)(param_1 + 0x20);
    (*DAT_028ca3b8)(puVar3,*(undefined8 *)(param_1 + 0x28),local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = DAT_028ca470;
    DAT_028ca470 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = DAT_028ca470;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((((ulong)puVar2 & 1) == 0) ||
     (puVar2 = DAT_028ca470,
     (*(code *)PTR__objc_msgSend_02578628)(DAT_028ca470,PTR_s_count_0269cfe0),
     puVar2 == (undefined *)0x0)) {
    puVar2 = PTR__OBJC_CLASS___NSBundle_026ce418;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_50[0];
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    bVar1 = ((ulong)puVar2 & 1) == 0;
    if (bVar1) {
      local_100 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_100;
    }
    else {
      local_100 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_mutableCopy_0269d8a0);
      local_60 = local_100;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_100;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_removeObjectForKey__0269d700,&cf_SignerIdentity);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_removeObjectForKey__0269d700,&cf_ProvisionsAllDevices);
    puVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_copy_0269d150);
    puVar2 = DAT_028ca470;
    DAT_028ca470 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

