// FUN_001a031c @ 001a031c

undefined8 FUN_001a031c(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong local_40;
  undefined4 local_38;
  undefined1 *local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  local_28 = param_3;
  if (local_20 == 0) {
    FUN_001a0770();
    local_38 = 1;
    local_18 = param_1;
  }
  else {
    uVar2 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_028c8972);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar2 & 1) == 0) {
      FUN_001a0770();
      local_18 = param_1;
    }
    else {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_doubleValue_026ca608);
      uVar1 = (uint)uVar2;
      uVar4 = param_1;
      FUN_001a0538();
      if ((uVar1 & 1) == 0) {
        FUN_001a0770();
        local_18 = uVar4;
      }
      else {
        local_18 = param_1;
        if (local_28 != (undefined1 *)0x0) {
          *local_28 = 1;
        }
      }
    }
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

