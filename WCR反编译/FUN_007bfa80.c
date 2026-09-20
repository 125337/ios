// FUN_007bfa80 @ 007bfa80

void FUN_007bfa80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long local_48;
  long local_40;
  undefined4 local_38;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (((DAT_026f46b8 & 1) == 0) || (local_28 == 0)) {
    (*DAT_028ccd60)(local_18,local_20,local_28);
    local_38 = 1;
  }
  else {
    lVar1 = DAT_028cccc0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccc0,PTR_s_objectForKey__0269e048,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48 = 0;
    local_40 = lVar1;
    if ((lVar1 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0), lVar1 == 0)) {
      lVar2 = local_28;
      FUN_007c7d38(local_28,0x7fffffffffffffff,0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_48;
      local_48 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      lVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if (lVar1 != 0) {
        lVar2 = DAT_028cccc0;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccc0,PTR_s_objectForKey__0269e048,local_48);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_40;
        local_40 = lVar2;
        (*(code *)PTR__objc_release_02578630)(lVar1);
      }
    }
    if ((local_40 == 0) ||
       (lVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
       lVar1 == 0)) {
      (*DAT_028ccd60)(local_18,local_20,local_28);
    }
    else {
      (*DAT_028ccd60)(local_18,local_20,local_40);
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

