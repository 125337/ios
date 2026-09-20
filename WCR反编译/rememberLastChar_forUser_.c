// rememberLastChar:forUser: @ 00eaa824

/* Function Stack Size: 0x20 bytes */

void WCRefineAuthNameHelper::rememberLastChar_forUser_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long local_80;
  bool local_59;
  long local_58;
  long local_50;
  byte local_45;
  undefined4 local_44;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar2 = local_30;
  FUN_00eaa404();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_28;
  local_38 = lVar2;
  FUN_00eaa404();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_38;
  local_40 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_44 = 1;
  }
  else {
    _os_unfair_lock_lock(&DAT_028e2950);
    FUN_00eaa548();
    lVar2 = DAT_028e2930;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e2930,PTR_s_objectForKeyedSubscript__0269d098,local_38);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = (byte)lVar3 ^ 1;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    local_45 = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2930,PTR_s_setObject_forKeyedSubscript__0269d248,local_40,local_38);
    }
    local_59 = (local_45 & 1) == 0;
    if (local_59) {
      local_80 = 0;
    }
    else {
      local_80 = DAT_028e2930;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e2930,PTR_s_copy_0269d150);
      local_58 = local_80;
    }
    local_59 = !local_59;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_80;
    if (local_59) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    puVar4 = &DAT_028e2950;
    _os_unfair_lock_unlock();
    lVar2 = local_50;
    if (local_50 != 0) {
      FUN_00eaaaec();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_writeToFile_atomically__0269f928,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

