// FUN_000db8b8 @ 000db8b8

byte FUN_000db8b8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined4 local_68;
  byte local_61;
  undefined *local_60;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined *local_38;
  undefined *local_30;
  byte local_21;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_2);
  local_61 = 0;
  puVar2 = local_30;
  local_48 = param_4;
  local_40 = param_3;
  FUN_000dc544();
  puVar3 = local_38;
  bVar1 = true;
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = local_30;
    FUN_000db77c();
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    bVar1 = puVar3 != puVar2;
    local_60 = puVar2;
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if (bVar1) {
    local_21 = 0;
  }
  else {
    puVar3 = local_30;
    _object_getClass();
    _class_getInstanceVariable(puVar3,"m_arrMsg");
    local_70 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_21 = 0;
    }
    else {
      puVar3 = local_30;
      _objc_getAssociatedObject(local_30,&DAT_028c8375);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_78 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        puVar3 = local_30;
        _object_getIvar(local_30,local_70);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_30;
        local_80 = puVar3;
        _objc_getAssociatedObject(local_30,&DAT_028c8376);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_88 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)puVar2 & 1) == 0) {
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_88;
          local_88 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        _objc_setAssociatedObject(local_30,&DAT_028c8377,local_80,1);
        _object_setIvar(local_30,local_70,local_88);
        puVar3 = local_80;
        if (local_48 != (undefined8 *)0x0) {
          _objc_retainAutorelease();
          *local_48 = puVar3;
        }
        _objc_storeStrong(&local_88);
        _objc_storeStrong(&local_80,0);
      }
      else if (local_48 != (undefined8 *)0x0) {
        *local_48 = 0;
      }
      puVar3 = local_30;
      if (local_40 != (undefined8 *)0x0) {
        *local_40 = local_70;
      }
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                 local_78 + 1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(puVar3,&DAT_028c8375,puVar2,1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_21 = 1;
    }
  }
  local_68 = 1;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

