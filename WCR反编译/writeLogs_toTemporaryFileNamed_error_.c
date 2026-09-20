// writeLogs:toTemporaryFileNamed:error: @ 00913de4

/* Function Stack Size: 0x28 bytes */

ID LogViewerViewController::writeLogs_toTemporaryFileNamed_error_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *local_68;
  long local_60;
  ID local_58;
  long local_50;
  undefined4 local_44;
  ID *local_40;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  lVar1 = local_30;
  local_40 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_18 = (undefined *)0x0;
    local_44 = 1;
  }
  else {
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      _objc_storeStrong(&local_50,&cf__tmp);
    }
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_sanitizedFileNameComponent__026aa1f8,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((IVar4 & 1) == 0) {
      IVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_stringByAppendingString__0269d398,&cf__txt);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_58;
      local_58 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    lVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_stringByAppendingPathComponent__026cab30,local_58);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
    local_60 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,lVar1);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_writeToURL_atomically_encoding_e_026aa200,puVar5,1,4,local_40);
    puVar5 = local_68;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar5;
    local_44 = 1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

