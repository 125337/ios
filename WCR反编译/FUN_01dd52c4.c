// FUN_01dd52c4 @ 01dd52c4

void FUN_01dd52c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_68;
  undefined *local_50;
  long local_40;
  long local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_30 = (undefined *)0x0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  lVar1 = param_1 + 0x20;
  local_38 = param_1;
  _objc_loadWeakRetained();
  local_40 = lVar1;
  if (lVar1 != 0) {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      local_68 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lu__lu);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_68;
    }
    else {
      local_68 = local_30;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setProgressText__026c55a8,local_68);
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_reloadBoard_026c54f8);
  }
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return;
}

