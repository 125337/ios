// FUN_01e30c34 @ 01e30c34

void FUN_01e30c34(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_48;
  undefined4 local_3c;
  undefined *local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_20;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  puVar4 = PTR_WCRSuperFloatProfileStore_026cee48;
  local_30 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_urlSchemes_026b1a10);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_30;
  local_38 = puVar4;
  if ((local_30 < 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_count_0269cfe0), (long)puVar4 <= lVar1)) {
    local_3c = 1;
  }
  else {
    puVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_30);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_48;
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    if ((((ulong)puVar4 & 1) == 0) ||
       (puVar4 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
       puVar4 == (undefined *)0x0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_c_Nzz);
      local_3c = 1;
    }
    else {
      _WCRSFOpenURLSchemeTemplate(local_48);
      local_3c = 0;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

