// FUN_016b742c @ 016b742c

byte FUN_016b742c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long local_30;
  ulong local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  _objc_getAssociatedObject(local_20,&DAT_028e3ed1);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  if (lVar1 == 0) {
    if (local_28 != 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_isSender_0269d1b0);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isSender_0269d1b0);
        lVar1 = local_20;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                   (uint)uVar2 & 1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(lVar1,&DAT_028e3ed1,puVar3,1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_11 = (byte)uVar2 & 1;
        goto LAB_016b7624;
      }
    }
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_boolValue_026ca540);
    local_11 = (byte)lVar1 & 1;
  }
LAB_016b7624:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

