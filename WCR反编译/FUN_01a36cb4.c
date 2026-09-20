// FUN_01a36cb4 @ 01a36cb4

void FUN_01a36cb4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setKeyboardType__026aec58,4);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf__ld);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setText__026caa88);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setClearButtonMode__026a64e0,1);
  _objc_storeStrong(&local_20,0);
  return;
}

