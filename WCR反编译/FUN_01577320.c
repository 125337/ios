// FUN_01577320 @ 01577320

void FUN_01577320(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    FUN_01577278(local_18);
    pcVar2 = &cf_setBNeedAnimation_;
    _NSSelectorFromString();
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar2);
    uVar1 = local_18;
    if ((uVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_setValue_forKey__0269d300,puVar4,&cf_bNeedAnimation);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar2,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

