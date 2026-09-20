// FUN_0154ed1c @ 0154ed1c

void FUN_0154ed1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = param_1;
  if (DAT_028e3878 == *(long *)(param_1 + 0x20)) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_getAssociatedObject(uVar1,DAT_028c5e50);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    local_38 = uVar1;
    _objc_getAssociatedObject(uVar2,DAT_028c5e58);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_20;
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setText__026caa88);
      _objc_setAssociatedObject(local_40,DAT_028c5e60,&cf__gS);
      _objc_setAssociatedObject(local_40,DAT_028c5e68,&cf__gS,3);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setText__026caa88,puVar4);
      _objc_setAssociatedObject(local_40,DAT_028c5e60,local_48);
      _objc_setAssociatedObject(local_40,DAT_028c5e68,&cf___,3);
      uVar2 = local_40;
      uVar1 = DAT_028c5e70;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,uVar1,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

