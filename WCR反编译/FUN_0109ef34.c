// FUN_0109ef34 @ 0109ef34

undefined1 * FUN_0109ef34(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *local_120;
  undefined1 *local_e0;
  undefined1 *local_88;
  undefined *local_80;
  undefined1 *local_78;
  long local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  long local_58;
  long local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  long local_38;
  undefined1 *local_30;
  undefined *local_28;
  
  local_80 = (undefined1 *)0x0;
  _objc_storeStrong(&local_80,param_1);
  puVar1 = local_80;
  FUN_0109a9f4();
  _objc_retainAutoreleasedReturnValue();
  local_88 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined1 *)0x0) {
    local_78 = (undefined1 *)0xffffffffffffffff;
  }
  else {
    puVar2 = local_88;
    puVar1 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_rangeOfString_options__0269d118,&cf_<_[CDATA[,1);
    if (puVar2 != (undefined1 *)0x7fffffffffffffff) {
      puVar4 = puVar2 + (long)puVar1;
      puVar3 = local_88;
      local_30 = puVar2;
      local_28 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      puVar2 = local_88;
      if (puVar4 < puVar3) {
        puVar3 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
        local_50 = (long)puVar3 - (long)puVar4;
        local_48 = puVar4;
        local_40 = puVar4;
        local_38 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_rangeOfString_options_range__0269d130,&cf___>,0,puVar4,local_50);
        if (puVar2 != (undefined1 *)0x7fffffffffffffff) {
          local_70 = (long)puVar2 - (long)puVar4;
          puVar3 = local_88;
          local_68 = puVar4;
          local_60 = puVar4;
          local_58 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_substringWithRange__0269d138,puVar4,local_70);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          FUN_0109a9f4();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_88;
          local_88 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
      }
    }
    puVar2 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    if ((puVar2 == (undefined1 *)0x0) ||
       (puVar2 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0),
       (undefined1 *)((long)&MACH_HEADER.ncmds + 1) <= puVar2)) {
      local_78 = (undefined1 *)0xffffffffffffffff;
    }
    else {
      for (local_e0 = (undefined1 *)0x0; puVar2 = local_88,
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0), local_e0 < puVar2;
          local_e0 = local_e0 + 1) {
        puVar2 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_characterAtIndex__0269fa18,local_e0);
        if (((ushort)puVar2 < 0x30) || (0x39 < (ushort)puVar2)) {
          local_78 = (undefined1 *)0xffffffffffffffff;
          goto LAB_0109f2c8;
        }
      }
      local_120 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_integerValue_026ca750);
      if ((long)local_120 < 1) {
        local_120 = (undefined1 *)0xffffffffffffffff;
      }
      local_78 = local_120;
    }
  }
LAB_0109f2c8:
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  return local_78;
}

