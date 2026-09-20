// importOAImageDataToLocalRepository: @ 00f4cd48

/* Function Stack Size: 0x18 bytes */

bool WCRefineEmoticonToolsHelper::importOAImageDataToLocalRepository_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0),
     ((ulong)puVar2 & 1) == 0)) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_extensionForData__026ac368,local_30);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringByAppendingPathExtension__026a4580);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,
               PTR_s_importData_fileName_intoPack_err_026abfa0,local_30,local_40,
               _WCRLocalEmoticonUngroupedId);
    _objc_retainAutoreleasedReturnValue();
    local_11 = puVar2 != (undefined *)0x0;
    (*(code *)PTR__objc_release_02578630)();
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

