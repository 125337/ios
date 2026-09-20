// FUN_008b0408 @ 008b0408

void FUN_008b0408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_3);
  FUN_008b4e10();
  if (((ulong)puVar2 & 1) == 0) {
    (*DAT_028cdf80)(local_18,local_20,local_28);
    local_38 = 1;
  }
  else {
    FUN_008c0c98();
    if (((ulong)puVar2 & 1) == 0) {
      uVar3 = local_28;
      FUN_008b50d8();
      if ((uVar3 & 1) == 0) {
        (*DAT_028cdf80)(local_18,local_20,local_28);
      }
      else {
        FUN_008c2ff4(local_28);
        _objc_setAssociatedObject(local_18,&DAT_028ce013,local_28,1);
        uVar1 = local_18;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar1,&DAT_028ce014,puVar4,1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        uVar3 = local_28;
        FUN_008bcaa4();
        _objc_retainAutoreleasedReturnValue();
        local_40 = uVar3;
        if (uVar3 == 0) {
          (*DAT_028cdf80)(local_18,local_20,local_28);
        }
        else {
          (*DAT_028cdf80)(local_18,local_20,uVar3);
        }
        _objc_storeStrong(&local_40,0);
      }
      local_38 = 0;
    }
    else {
      FUN_008c08b4();
      (*DAT_028cdf80)(local_18,local_20,local_28);
      local_38 = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

