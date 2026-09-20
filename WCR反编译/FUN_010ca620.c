// FUN_010ca620 @ 010ca620

byte FUN_010ca620(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  byte local_30;
  undefined *local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  local_30 = 0;
  if (lVar1 != 0) {
    local_28 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = (byte)puVar2;
  }
  local_11 = local_30 & 1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

