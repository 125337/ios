// FUN_0056fafc @ 0056fafc

undefined4 FUN_0056fafc(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setInputRefComment__026a5208);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setInputRefComment__026a5208,local_20);
  }
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setRefComment__026a5210);
  if ((uVar2 & 1) == 0) {
    if (!bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setValue_forKey__0269d300,local_20,&cf_refComment);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRefComment__026a5210,local_20);
  }
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setDefaultRefComment__026a5218);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setValue_forKey__0269d300,0,&cf_defaultRefComment);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDefaultRefComment__026a5218,0);
  }
  uVar2 = local_18;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_hasFoundDefaultRefComment);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return 1;
}

