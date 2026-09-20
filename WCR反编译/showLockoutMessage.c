// showLockoutMessage @ 0000b4a4

/* Function Stack Size: 0x10 bytes */

void __thiscall EncryptionLock::showLockoutMessage(EncryptionLock *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  double in_d0;
  undefined *puVar3;
  undefined *local_58;
  long local_50;
  long local_48;
  long local_40;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_lockoutEndTime_0269cd08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_40 = (long)in_d0 % 0x3c;
  local_48 = ((long)in_d0 / 0x3c) % 0x3c;
  local_50 = (long)in_d0 / 0xe10;
  local_58 = (undefined *)0x0;
  if (local_50 < 1) {
    if (local_48 < 1) {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_58;
      local_58 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_58;
      local_58 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_58;
    local_58 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  puVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Y___W_);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf__x_kpeY,puVar1,&cf_nx_,
             &PTR___NSConcreteGlobalBlock_02578cf0,in_x6,in_x7,puVar3);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_58,0);
  return;
}

