// FUN_005de5b0 @ 005de5b0

undefined1  [16] FUN_005de5b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_e8;
  undefined *local_e0;
  long local_d8;
  long local_d0;
  undefined *local_c8;
  undefined *local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_e8 = (undefined *)0x0;
  _objc_storeStrong(&local_e8,param_1);
  if ((local_e8 == (undefined *)0x0) ||
     (puVar3 = local_e8, (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0),
     puVar3 == (undefined *)0x0)) {
    local_48 = 0x7fffffffffffffff;
    local_50 = 0;
    local_40 = 0x7fffffffffffffff;
    local_38 = 0;
    local_e0 = (undefined *)0x7fffffffffffffff;
    local_d8 = 0;
  }
  else {
    puVar3 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_rangeOfString_options__0269d118,&cf_<appmsg,1);
    if (puVar3 == (undefined *)0x7fffffffffffffff) {
      local_68 = 0x7fffffffffffffff;
      local_70 = 0;
      local_60 = 0x7fffffffffffffff;
      local_58 = 0;
      local_e0 = (undefined *)0x7fffffffffffffff;
      local_d8 = 0;
    }
    else {
      puVar4 = local_e8;
      puVar5 = PTR_s_rangeOfString_options__0269d118;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_rangeOfString_options__0269d118,&cf_<_appmsg>,1);
      if (puVar4 == (undefined *)0x7fffffffffffffff) {
        local_88 = 0x7fffffffffffffff;
        local_90 = 0;
        local_80 = 0x7fffffffffffffff;
        local_78 = 0;
        local_e0 = (undefined *)0x7fffffffffffffff;
        local_d8 = 0;
      }
      else {
        puVar1 = puVar4 + (long)puVar5;
        local_30 = puVar4;
        local_28 = puVar5;
        if ((puVar3 < puVar1) &&
           (puVar4 = local_e8, (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0)
           , puVar1 <= puVar4)) {
          local_d8 = (long)puVar1 - (long)puVar3;
          local_e0 = puVar3;
          local_d0 = local_d8;
          local_c8 = puVar3;
          local_c0 = puVar3;
          local_b8 = local_d8;
        }
        else {
          local_a8 = 0x7fffffffffffffff;
          local_b0 = 0;
          local_a0 = 0x7fffffffffffffff;
          local_98 = 0;
          local_e0 = (undefined *)0x7fffffffffffffff;
          local_d8 = 0;
        }
      }
    }
  }
  _objc_storeStrong(&local_e8,0);
  auVar2._8_8_ = local_d8;
  auVar2._0_8_ = local_e0;
  return auVar2;
}

