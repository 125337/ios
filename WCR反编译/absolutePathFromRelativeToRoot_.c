// absolutePathFromRelativeToRoot: @ 015b2d30

/* Function Stack Size: 0x18 bytes */

ID WCRefineVoicePackStore::absolutePathFromRelativeToRoot_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rootAbsolutePath_026ae1f8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_30;
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  IVar1 = local_38;
  if (IVar2 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar1;
  }
  else {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__);
    IVar1 = local_30;
    if ((IVar2 & 1) == 0) {
      IVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_stringByAppendingPathComponent__026cab30,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_18 = IVar1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = IVar1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

