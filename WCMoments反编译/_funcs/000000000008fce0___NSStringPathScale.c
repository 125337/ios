// __NSStringPathScale @0x8fce0

undefined1  [16] __NSStringPathScale(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  lVar1 = _objc_msgSend_length(local_50,local_e0);
  if ((lVar1 == 0) || (uVar2 = _objc_msgSend_hasSuffix_(local_50,local_e0,&cf__), (uVar2 & 1) != 0))
  {
    local_48 = 0x3ff0000000000000;
    local_54 = 1;
  }
  else {
    _objc_msgSend_stringByDeletingPathExtension(local_50,local_e0);
    local_60 = _objc_retainAutoreleasedReturnValue();
    local_78 = &local_80;
    local_80 = 0;
    local_70 = 0x20000000;
    local_6c = 0x20;
    local_68 = 0x3ff0000000000000;
    uVar3 = _objc_msgSend_regularExpressionWithPattern_options_error_
                      (&_OBJC_CLASS___NSRegularExpression,local_e0,&cf___0_9______0_9__x_,0x10,0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar3 = local_60;
    local_88 = uVar4;
    local_a0 = _objc_msgSend_length(local_60,local_e0);
    local_38 = 0;
    local_30 = 0;
    local_a8 = 0;
    local_d8 = PTR___NSConcreteStackBlock_001104f0;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = ____NSStringPathScale_block_invoke;
    local_c0 = &___block_descriptor_48_e8_32s40r_e37_v32__0__NSTextCheckingResult_8Q16_B24l;
    local_b0 = &local_80;
    local_40 = local_a0;
    local_28 = local_a0;
    local_b8 = (*(code *)PTR__objc_retain_00110460)(local_50);
    _objc_msgSend_enumerateMatchesInString_options_range_usingBlock_
              (uVar4,local_e0,uVar3,0,local_a8,local_a0,&local_d8);
    local_48 = local_78[3];
    local_54 = 1;
    _objc_storeStrong(&local_b8);
    _objc_storeStrong(&local_88,0);
    __Block_object_dispose(&local_80,8);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50,0);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_48;
  return auVar5;
}

