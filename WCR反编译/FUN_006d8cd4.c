// FUN_006d8cd4 @ 006d8cd4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006d8cd4(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *local_240;
  undefined1 *local_228;
  undefined1 *local_180;
  undefined1 *local_138;
  undefined1 *local_128;
  undefined1 *local_c0;
  undefined *puStack_b8;
  cfstringStruct *local_a8;
  byte local_99;
  undefined1 *local_98;
  undefined1 *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined1 *local_68;
  long local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  long local_48;
  long local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  long local_28;
  
  local_70 = (undefined1 *)0x0;
  _objc_storeStrong(&local_70,param_1);
  local_78 = (undefined1 *)0x0;
  _objc_storeStrong(&local_78,param_2);
  local_99 = 0;
  puVar3 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_m_nsContent_0269d0a0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (puVar4 == (undefined1 *)0x0) {
    local_180 = (undefined1 *)0x0;
  }
  else {
    local_180 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_m_nsContent_0269d0a0);
    _objc_retainAutoreleasedReturnValue();
    local_99 = 1;
    local_98 = local_180;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_180;
  if ((local_99 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar4 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
  if (puVar4 != (undefined1 *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = &cf_<receivertitle><_[CDATA[;
    local_c0 = local_80;
    puStack_b8 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_rangeOfString__0269d838,&cf_<receivertitle><_[CDATA[);
    if (local_c0 == (undefined1 *)0x7fffffffffffffff) {
      _objc_storeStrong(0,&local_a8,&cf_<sendertitle><_[CDATA[);
      local_c0 = local_80;
      puStack_b8 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_rangeOfString__0269d838,local_a8);
    }
    puVar4 = local_80;
    if (local_c0 == (undefined1 *)0x7fffffffffffffff) {
LAB_006d913c:
      puVar4 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_rangeOfString__0269d838,&cf_<);
      bVar1 = false;
      if (puVar4 == (undefined1 *)0x7fffffffffffffff) {
        puVar4 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
        bVar1 = puVar4 < section_00000068.segname + 9;
      }
      puVar4 = local_80;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = puVar4;
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      local_c0 = local_c0 + (long)puStack_b8;
      puVar5 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
      local_40 = (long)puVar5 - (long)local_c0;
      local_38 = local_c0;
      local_30 = local_c0;
      local_28 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_rangeOfString_options_range__0269d130,&cf___>,0,local_c0,local_40);
      if ((puVar4 == (undefined1 *)0x7fffffffffffffff) || (puVar4 <= local_c0)) goto LAB_006d913c;
      local_60 = (long)puVar4 - (long)local_c0;
      puVar4 = local_80;
      local_58 = local_c0;
      local_50 = local_c0;
      local_48 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_substringWithRange__0269d138,local_c0,local_60);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_68 = puVar4;
    }
    _objc_storeStrong(&local_a8,0);
    if (bVar1) goto LAB_006d9440;
  }
  puVar3 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_stringForKey__026a33a0,&cf_wishing);
  _objc_retainAutoreleasedReturnValue();
  bVar2 = false;
  bVar1 = false;
  local_228 = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    local_128 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_stringForKey__026a33a0,&cf_wish);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    bVar1 = local_128 == (undefined1 *)0x0;
    local_240 = local_128;
    if (bVar1) {
      local_138 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_stringForKey__026a33a0,&cf_remark);
      _objc_retainAutoreleasedReturnValue();
      local_240 = local_138;
    }
    local_228 = local_240;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_228;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_138);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_128);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
LAB_006d9440:
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_autoreleaseReturnValue(local_68);
  return;
}

