// FUN_01e97c3c @ 01e97c3c

void FUN_01e97c3c(double param_1,double param_2,undefined8 param_3)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double local_118;
  double local_108;
  double local_100;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  undefined4 local_34;
  long local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
    local_50 = 0x4094000000000000;
    local_100 = param_1;
    if (param_1 < param_2) {
      local_100 = param_2;
    }
    local_70 = local_100;
    local_58 = local_100;
    local_68 = param_2;
    local_60 = param_1;
    local_48 = param_1;
    local_40 = param_2;
    if ((1280.0 < local_100) && (1.0 < local_100)) {
      local_78 = 1280.0 / local_100;
      local_90 = 0x3ff0000000000000;
      local_98 = (double)(long)(param_1 * local_78);
      local_108 = local_98;
      if (local_98 <= 1.0) {
        local_108 = 1.0;
      }
      local_a0 = local_108;
      local_a8 = 0x3ff0000000000000;
      local_b0 = (double)(long)(param_2 * local_78);
      local_118 = local_b0;
      if (local_b0 <= 1.0) {
        local_118 = 1.0;
      }
      local_b8 = local_118;
      FUN_01e75160();
      local_88 = local_108;
      local_80 = local_118;
      _UIGraphicsBeginImageContextWithOptions(local_108,local_118,0x3ff0000000000000,1);
      lVar1 = local_30;
      uVar4 = 0;
      uVar3 = 0;
      dVar5 = local_88;
      dVar6 = local_80;
      FUN_01e728c8();
      local_d8 = uVar3;
      local_d0 = uVar4;
      local_c8 = dVar5;
      local_c0 = dVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,uVar4,dVar5,dVar6,lVar1,PTR_s_drawInRect__026ca610);
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      local_e0 = lVar1;
      _UIGraphicsEndImageContext();
      if (local_e0 != 0) {
        _objc_storeStrong(&local_30,local_e0);
      }
      _objc_storeStrong(&local_e0,0);
    }
    lVar1 = local_30;
    _UIImageJPEGRepresentation(DAT_02323f28);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
      local_34 = 1;
    }
    else {
      lVar1 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_base64EncodedStringWithOptions__026a1df8,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      local_f0 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_data_image_jpeg_base64___);
      _objc_retainAutoreleasedReturnValue();
      local_34 = 1;
      local_28 = pcVar2;
      _objc_storeStrong(&local_f0,0);
    }
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

