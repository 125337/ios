// FUN_007bf400 @ 007bf400

undefined8
FUN_007bf400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long local_70;
  long local_68;
  undefined4 local_60;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  uVar4 = local_30;
  pcVar1 = DAT_028ccd50;
  if (((DAT_026f46b8 & 1) == 0) || (local_40 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    (*pcVar1)(uVar4,local_38,local_40,local_48,local_50);
    local_60 = 1;
    local_28 = uVar4;
  }
  else {
    lVar2 = DAT_028cccc0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccc0,PTR_s_objectForKey__0269e048,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_70 = 0;
    local_68 = lVar2;
    if ((lVar2 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0), lVar2 == 0)) {
      lVar3 = local_40;
      FUN_007c7d38(local_40,0x7fffffffffffffff,0);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_70;
      local_70 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      lVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      if (lVar2 != 0) {
        lVar3 = DAT_028cccc0;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccc0,PTR_s_objectForKey__0269e048,local_70);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = local_68;
        local_68 = lVar3;
        (*(code *)PTR__objc_release_02578630)(lVar2);
      }
    }
    if ((local_68 == 0) ||
       (lVar2 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0),
       uVar4 = local_30, pcVar1 = DAT_028ccd50, lVar2 == 0)) {
      uVar4 = local_30;
      pcVar1 = DAT_028ccd50;
      (*(code *)PTR__objc_retain_02578638)();
      (*pcVar1)(uVar4,local_38,local_40,local_48,local_50);
      local_28 = uVar4;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      (*pcVar1)(uVar4,local_38,local_68,local_48,local_50);
      local_28 = uVar4;
    }
    local_60 = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return local_28;
}

