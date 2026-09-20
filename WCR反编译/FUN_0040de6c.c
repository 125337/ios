// FUN_0040de6c @ 0040de6c

undefined1  [16] FUN_0040de6c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined4 local_134;
  long local_130 [3];
  undefined *local_118;
  long local_110;
  undefined *local_108;
  undefined *local_100;
  long local_f8;
  undefined *local_f0;
  undefined *local_e8;
  long local_e0;
  undefined *local_d8;
  undefined *local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  undefined *local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_108 = (undefined *)0x0;
  _objc_storeStrong(&local_108,param_1);
  local_110 = 0;
  _objc_storeStrong(&local_110,param_2);
  puVar2 = local_108;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_110;
  local_118 = puVar2;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_118;
  local_130[0] = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
  if ((puVar2 == (undefined *)0x0) ||
     (lVar3 = local_130[0],
     (*(code *)PTR__objc_msgSend_02578628)(local_130[0],PTR_s_length_0269cca0), lVar3 == 0)) {
    local_38 = 0x7fffffffffffffff;
    local_40 = 0;
    local_30 = 0x7fffffffffffffff;
    local_28 = 0;
    local_100 = (undefined *)0x7fffffffffffffff;
    local_f8 = 0;
    local_134 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<__);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_118;
    puVar5 = PTR_s_rangeOfString_options__0269d118;
    local_140 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_rangeOfString_options__0269d118,puVar2,1);
    local_150 = puVar4;
    local_148 = puVar5;
    if (puVar4 == (undefined *)0x7fffffffffffffff) {
      local_58 = 0x7fffffffffffffff;
      local_60 = 0;
      local_50 = 0x7fffffffffffffff;
      local_48 = 0;
      local_100 = (undefined *)0x7fffffffffffffff;
      local_f8 = 0;
      local_134 = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      lVar3 = local_130[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<___>);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_150;
      puVar5 = local_118;
      local_158 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
      local_80 = (long)puVar5 - (long)local_150;
      local_78 = puVar2;
      local_70 = puVar2;
      puVar4 = local_118;
      puVar5 = PTR_s_rangeOfString_options_range__0269d130;
      local_68 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,PTR_s_rangeOfString_options_range__0269d130,local_158,1,puVar2,local_80,
                 in_x6,in_x7,lVar3);
      if (puVar4 == (undefined *)0x7fffffffffffffff) {
        local_98 = 0x7fffffffffffffff;
        local_a0 = 0;
        local_90 = 0x7fffffffffffffff;
        local_88 = 0;
        local_100 = (undefined *)0x7fffffffffffffff;
        local_f8 = 0;
      }
      else {
        puVar2 = puVar4 + (long)puVar5;
        local_f0 = puVar4;
        local_e8 = puVar5;
        if ((local_150 < puVar2) &&
           (puVar4 = local_118,
           (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0), puVar2 <= puVar4)
           ) {
          local_f8 = (long)puVar2 - (long)local_150;
          local_d8 = local_150;
          local_d0 = local_150;
          local_100 = local_150;
          local_e0 = local_f8;
          local_c8 = local_f8;
        }
        else {
          local_b8 = 0x7fffffffffffffff;
          local_c0 = 0;
          local_b0 = 0x7fffffffffffffff;
          local_a8 = 0;
          local_100 = (undefined *)0x7fffffffffffffff;
          local_f8 = 0;
        }
      }
      local_134 = 1;
      _objc_storeStrong(&local_158,0);
    }
    _objc_storeStrong(&local_140,0);
  }
  _objc_storeStrong(local_130);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  auVar1._8_8_ = local_f8;
  auVar1._0_8_ = local_100;
  return auVar1;
}

