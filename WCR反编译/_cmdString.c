// _cmdString @ 01fcb7b4

void _cmdString(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined4 local_84;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_70 = param_1;
  FUN_01fcbad8();
  local_78 = param_1;
  _os_unfair_lock_lock();
  puVar1 = local_78;
  _CFDictionaryGetValue(local_78,local_70);
  _objc_retainAutoreleasedReturnValue();
  local_80 = puVar1;
  _os_unfair_lock_unlock(&DAT_028e4940);
  puVar1 = local_80;
  if (local_80 == (undefined *)0x0) {
    puVar1 = local_70;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    local_90 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_hasPrefix__0269d320,&cf_set);
    if (((ulong)puVar1 & 1) != 0) {
      local_38 = 3;
      local_40 = 1;
      local_30 = 3;
      local_28 = 1;
      local_a8 = 3;
      local_a0 = 1;
      puVar1 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_substringWithRange__0269d138,3,1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_98 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_90;
      puVar2 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      local_b8 = puVar2 + -5;
      local_58 = 4;
      local_50 = 4;
      local_c0 = 4;
      local_60 = local_b8;
      local_48 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_substringWithRange__0269d138,4,local_b8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_b0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_90;
      local_90 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(&local_b0);
      _objc_storeStrong(&local_98,0);
    }
    _os_unfair_lock_lock(&DAT_028e4940);
    puVar1 = local_78;
    _CFDictionaryGetValue(local_78,local_70);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      _CFDictionarySetValue(local_78,local_70,local_90);
      _objc_storeStrong(&local_c8,local_90);
    }
    _os_unfair_lock_unlock(&DAT_028e4940);
    puVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = puVar1;
    local_84 = 1;
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(&local_90,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = puVar1;
    local_84 = 1;
  }
  _objc_storeStrong(&local_80,0);
  _objc_autoreleaseReturnValue(local_68);
  return;
}

