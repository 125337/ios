// FUN_007bfd30 @ 007bfd30

void FUN_007bfd30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_58;
  long local_50;
  long local_48;
  undefined4 local_40;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_4;
  if (((DAT_026f46b8 & 1) == 0) || (local_28 == 0)) {
    (*DAT_028ccd68)(local_18,local_20,local_28,param_4);
    local_40 = 1;
  }
  else {
    lVar1 = DAT_028cccc0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccc0,PTR_s_objectForKey__0269e048,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_50 = 0;
    local_48 = lVar1;
    if ((lVar1 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0), lVar1 == 0)) {
      lVar2 = local_28;
      FUN_007c7d38(local_28,local_30,1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_50;
      local_50 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      lVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      if (lVar1 != 0) {
        lVar2 = DAT_028cccc0;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccc0,PTR_s_objectForKey__0269e048,local_50);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = local_48;
        local_48 = lVar2;
        (*(code *)PTR__objc_release_02578630)(lVar1);
      }
    }
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____llu);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar3;
    if ((local_48 == 0) ||
       (lVar1 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
       lVar1 == 0)) {
      (*DAT_028ccd68)(local_18,local_20,local_28,local_30);
    }
    else {
      (*DAT_028ccd68)(local_18,local_20,local_48,local_30);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

