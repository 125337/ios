// FUN_005560bc @ 005560bc

byte FUN_005560bc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined *local_168;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68 [3];
  undefined *local_50;
  undefined4 local_44;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined *local_30;
  byte local_21;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_40 = param_3;
  local_38 = param_2;
  if (local_30 == (undefined *)0x0) {
    local_21 = 0;
    local_44 = 1;
  }
  else {
    puVar1 = local_30;
    FUN_00546750();
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
    if (puVar1 == (undefined *)0x0) {
      local_21 = 0;
      local_44 = 1;
    }
    else {
      FUN_0054e638();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_68[0] = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_68[0];
      puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)puVar1 & 1) == 0) {
        local_21 = 0;
        local_44 = 1;
      }
      else {
        puVar1 = local_68[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_objectForKey__0269e048,&cf_like);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_68[0];
        local_70 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_objectForKey__0269e048,&cf_comment);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_70;
        local_78 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
        if (((ulong)puVar1 & 1) == 0) {
          local_168 = (undefined *)0xffffffffffffffff;
        }
        else {
          local_168 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_integerValue_026ca750);
        }
        puVar1 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
        if (((ulong)puVar1 & 1) == 0) {
          local_180 = (undefined *)0xffffffffffffffff;
        }
        else {
          local_180 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_integerValue_026ca750);
        }
        if (((long)local_168 < 0) || ((long)local_180 < 0)) {
          local_21 = 0;
        }
        else {
          if ((long)local_168 < 0x2711) {
            local_188 = local_168;
          }
          else {
            local_188 = &DAT_00002710;
          }
          if ((long)local_188 < 1) {
            local_190 = (undefined *)0x0;
          }
          else {
            local_190 = local_188;
          }
          if ((long)local_180 < 0x12d) {
            local_198 = local_180;
          }
          else {
            local_198 = (undefined *)0x12c;
          }
          if ((long)local_198 < 1) {
            local_1a0 = (undefined *)0x0;
          }
          else {
            local_1a0 = local_198;
          }
          if (local_38 != (undefined8 *)0x0) {
            *local_38 = local_190;
          }
          if (local_40 != (undefined8 *)0x0) {
            *local_40 = local_1a0;
          }
          local_21 = 1;
        }
        local_44 = 1;
        _objc_storeStrong(&local_78);
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(local_68,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

