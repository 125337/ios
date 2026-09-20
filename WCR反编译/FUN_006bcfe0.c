// FUN_006bcfe0 @ 006bcfe0

undefined8 FUN_006bcfe0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_80;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_30;
  undefined *local_20;
  undefined8 local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_18 = 0;
    local_30 = 1;
  }
  else {
    puVar2 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_028cc1ba);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      _objc_setAssociatedObject(local_20,&DAT_028cc1bb,0,3);
      local_18 = 0;
      local_30 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == puVar1) {
        local_80 = (undefined *)0x0;
      }
      else {
        local_80 = local_38;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = local_80;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setImage__026ca978,local_40);
      _objc_setAssociatedObject(local_20,&DAT_028cc1ba,0,1);
      _objc_setAssociatedObject(local_20,&DAT_028cc1bb,0,3);
      local_18 = 1;
      local_30 = 1;
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

