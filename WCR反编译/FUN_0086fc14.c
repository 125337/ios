// FUN_0086fc14 @ 0086fc14

void FUN_0086fc14(long param_1,undefined8 param_2)

{
  long lVar1;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cd7c0)(param_1,param_2);
  if ((DAT_028cd86b & 1) != 0) {
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_valueForKey__0269d128,&cf_m_unreadImageView);
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar1;
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setHidden__026ca970,1);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

