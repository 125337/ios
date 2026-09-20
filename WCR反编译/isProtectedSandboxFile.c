// isProtectedSandboxFile @ 0195b634

/* Function Stack Size: 0x10 bytes */

bool WCRefineFileManagerPreviewViewController::isProtectedSandboxFile(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  byte local_50;
  ID local_48;
  ID local_40;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  _NSHomeDirectory();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_filePath_026b9cb0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_38);
  IVar2 = local_40;
  local_50 = 1;
  bVar1 = (IVar3 & 1) == 0;
  if (bVar1) {
    local_48 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_hasPrefix__0269d320);
    local_50 = (byte)IVar2;
  }
  local_11 = local_50 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

