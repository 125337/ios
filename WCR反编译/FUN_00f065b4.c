// FUN_00f065b4 @ 00f065b4

void FUN_00f065b4(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_retainCount_026aba90);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__YNOYu);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  if (0 < local_20) {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__YNOYu);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_40;
    local_40 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  lVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar4 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__YNeYNnt1Y__
              );
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_40;
    local_40 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_rememberStatus_upload_download__026abb18,local_40
             ,1,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_finish_success_message__026abb10,
             *(undefined8 *)(param_1 + 0x20),1,local_40);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

