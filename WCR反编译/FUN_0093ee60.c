// FUN_0093ee60 @ 0093ee60

void FUN_0093ee60(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *local_e0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  int local_54;
  undefined1 *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined1 *local_28;
  
  local_30 = (undefined1 *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_48 = 0;
  local_40 = param_3;
  _objc_storeStrong(&local_48,param_4);
  puVar1 = local_40;
  FUN_00941ef8(local_40,local_48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  local_50 = puVar1;
  if (local_40 == (undefined1 *)((long)&segment_command_00000020.cmd + 2)) {
    puVar2 = local_30;
    FUN_009421f4(0);
    local_54 = (int)puVar2;
    if (local_54 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_50;
      local_50 = puVar3;
      (*(code *)PTR__objc_release_02578630)();
    }
  }
  FUN_00941cc8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_30;
  local_60 = puVar2;
  FUN_009424c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_30;
  local_68 = puVar3;
  FUN_009418d0(local_30,local_38);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_30;
  local_70 = puVar2;
  FUN_00941344(local_30,&cf_m_nsFromUsr);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  FUN_009407ac();
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = local_30;
  FUN_00941344(local_30,&cf_m_nsToUsr);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  FUN_009407ac();
  _objc_retainAutoreleasedReturnValue();
  local_80 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_70;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if ((puVar1 == (undefined1 *)0x0) ||
       (puVar1 = local_78,
       (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,local_60),
       ((ulong)puVar1 & 1) == 0)) {
      puVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if ((puVar1 == (undefined1 *)0x0) ||
         (puVar1 = local_80,
         (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,local_60),
         ((ulong)puVar1 & 1) == 0)) {
        puVar1 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
        if (puVar1 == (undefined1 *)0x0) {
          local_e0 = local_78;
        }
        else {
          local_e0 = local_80;
        }
        _objc_storeStrong(&local_88,local_e0);
      }
      else {
        _objc_storeStrong(&local_88,local_78);
      }
    }
    else {
      _objc_storeStrong(&local_88,local_80);
    }
  }
  puVar1 = local_68;
  FUN_00942860(local_68,local_60);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_88;
  local_90 = puVar1;
  FUN_00942860(local_88,local_60);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_90;
  local_98 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
  if (((puVar1 == (undefined1 *)0x0) ||
      (puVar1 = local_98, (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0),
      puVar1 == (undefined1 *)0x0)) ||
     (puVar1 = local_90,
     (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_isEqualToString__0269ccc8,local_98),
     ((ulong)puVar1 & 1) != 0)) {
    puVar1 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
    local_28 = local_50;
    if (puVar1 == (undefined1 *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar2;
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar2;
  }
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

