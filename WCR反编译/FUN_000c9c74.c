// FUN_000c9c74 @ 000c9c74

double FUN_000c9c74(double param_1,undefined8 param_2,double param_3)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  double local_18;
  
  pcVar1 = "UiUtil";
  _objc_getClass();
  pcVar2 = &cf_mainScreenWidth;
  _NSSelectorFromString();
  if (((pcVar1 == (char *)0x0) ||
      (pcVar3 = pcVar1,
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,pcVar2),
      ((ulong)pcVar3 & 1) == 0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)(pcVar1,pcVar2), local_18 = param_1, param_1 <= 1.0)) {
    puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_18 = param_3;
  }
  return local_18;
}

