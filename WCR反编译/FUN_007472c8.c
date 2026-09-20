// FUN_007472c8 @ 007472c8

void FUN_007472c8(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  ulong *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  FUN_007475f0();
  if (((uVar1 & 1) == 0) || (local_18 == 0)) {
    local_28 = 1;
  }
  else {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_m_pbRequest);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar3;
    if (uVar3 != 0) {
      pcVar4 = "SendYoRequest";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar4);
      puVar6 = PTR_s_setYoType__026a7cb8;
      if ((uVar3 & 1) != 0) {
        uVar5 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_setYoType__026a7cb8);
        uVar3 = local_30;
        if ((uVar5 & 1) == 0) {
          puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_setValue_forKey__0269d300,puVar6,&cf_yoType);
          (*(code *)PTR__objc_release_02578630)(puVar6);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,puVar6,0);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_setValue_forKey__0269d300,0,&cf_requestData);
      }
    }
    _objc_storeStrong(&local_30,0);
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

