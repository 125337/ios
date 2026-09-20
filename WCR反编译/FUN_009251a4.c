// FUN_009251a4 @ 009251a4

void FUN_009251a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined *local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_logWithFormat__026aa3c0,&cf___);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_logLevel_026aa5b0);
  if (0 < lVar2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_logWithFormat__026aa3c0,&cf_space_s_);
    uVar3 = *(ulong *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_viewControllers_0269e348);
    if ((uVar3 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_20;
      local_40 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_logWithFormat__026aa3c0,&cf_space_s_);
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

