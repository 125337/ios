// FUN_00028f90 @ 00028f90

byte FUN_00028f90(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte local_f4;
  char *local_e0;
  undefined *local_78;
  byte local_69;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  undefined4 local_48;
  long local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_21 = 0;
    local_48 = 1;
  }
  else {
    pcVar2 = "MMServiceCenter";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = "CContactMgr";
    local_50 = pcVar2;
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getService__0269d170,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 0;
    local_58 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
    if (((ulong)pcVar2 & 1) == 0) {
      local_e0 = (char *)0x0;
    }
    else {
      local_e0 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_getContactByName__0269d178,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_e0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_e0;
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_f4 = 0;
    local_78 = puVar4;
    if ((puVar4 != (undefined *)0x0) && (local_f4 = 0, local_60 != (char *)0x0)) {
      puVar5 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_wcr_sendImage_toContact__0269d4d0,puVar4,local_60
                );
      local_f4 = (byte)puVar5;
    }
    local_21 = local_f4 & 1;
    local_48 = 1;
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

