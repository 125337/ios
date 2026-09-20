// FUN_002e57b4 @ 002e57b4

void FUN_002e57b4(double param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  pcVar1 = DAT_028c98c0;
  if ((lVar2 == 0) || (param_1 < 1.0)) {
    local_18 = (undefined *)0x0;
  }
  else if (DAT_028c98c0 == (code *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_fontWithName_size__026a1cd0,local_20)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_class_0269cd60);
    (*pcVar1)(param_1,puVar3,PTR_s_fontWithName_size__026a1cd0,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar3;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

