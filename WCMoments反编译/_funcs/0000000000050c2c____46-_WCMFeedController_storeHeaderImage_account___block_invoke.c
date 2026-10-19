// ___46-[WCMFeedController_storeHeaderImage:account:]_block_invoke @0x50c2c

void ___46__WCMFeedController_storeHeaderImage_account___block_invoke
               (undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double local_1e8;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined8 local_1b8;
  double local_1b0;
  undefined *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  code *local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 auStack_170 [8];
  undefined8 local_168;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined8 local_138;
  double dStack_130;
  undefined8 local_128;
  undefined8 local_120;
  double local_118;
  undefined8 local_110;
  double local_108;
  double local_100;
  int local_f4;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  uint local_cc;
  undefined8 local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  int local_84;
  double local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  double local_60;
  int local_54;
  double local_50;
  double local_48;
  uint local_3c;
  double local_38;
  long local_30;
  long local_28;
  
  local_3c = 1;
  local_54 = 1;
  local_30 = param_3;
  local_28 = param_3;
  local_70 = (double)_objc_msgSend_size(*(undefined8 *)(param_3 + 0x20));
  local_1b0 = local_70;
  if (local_70 <= (double)(long)local_54) {
    local_1b0 = (double)(long)local_54;
  }
  local_78 = local_1b0;
  local_50 = 600.0 / local_1b0;
  local_84 = 1;
  local_68 = param_2;
  local_60 = local_70;
  local_a0 = _objc_msgSend_size(*(undefined8 *)(param_3 + 0x20),local_1b8);
  local_1c0 = local_1b0;
  if (local_1b0 <= (double)(long)local_84) {
    local_1c0 = (double)(long)local_84;
  }
  local_a8 = local_1c0;
  local_80 = 144.0 / local_1c0;
  local_1c8 = local_80;
  if (local_50 < local_80) {
    local_1c8 = local_50;
  }
  local_b0 = local_1c8;
  local_48 = local_1c8;
  if (local_1c8 <= (double)(long)(int)local_3c) {
    local_1d0 = local_1c8;
  }
  else {
    local_1c8 = (double)(ulong)local_3c;
    local_1d0 = (double)(long)(int)local_3c;
  }
  local_b8 = local_1d0;
  local_38 = local_1d0;
  local_cc = 1;
  local_98 = local_1b0;
  local_90 = local_1b0;
  local_e8 = (double)_objc_msgSend_size(*(undefined8 *)(param_3 + 0x20),local_1b8);
  local_d8 = (double)(long)(local_e8 * local_38);
  local_108 = local_d8;
  local_1d8 = local_d8;
  if (local_d8 <= (double)(long)(int)local_cc) {
    local_108 = (double)(ulong)local_cc;
    local_1d8 = (double)(long)(int)local_cc;
  }
  local_f0 = local_1d8;
  local_f4 = 1;
  local_e0 = local_1c8;
  local_110 = _objc_msgSend_size(*(undefined8 *)(param_3 + 0x20),local_1b8);
  local_100 = (double)(long)(local_108 * local_38);
  local_1e8 = local_100;
  if (local_100 <= (double)(long)local_f4) {
    local_1e8 = (double)(long)local_f4;
  }
  local_118 = local_1e8;
  local_c8 = _CGSizeMake(local_1d8);
  dStack_c0 = local_1e8;
  _objc_msgSend_defaultFormat(&_OBJC_CLASS___UIGraphicsImageRendererFormat,local_1b8);
  local_120 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setScale_(0x3ff0000000000000,local_120,local_1b8);
  uVar3 = _objc_alloc(&_OBJC_CLASS___UIGraphicsImageRenderer);
  uVar3 = _objc_msgSend_initWithSize_format_(local_c8,dStack_c0,uVar3,local_1b8,local_120);
  puVar1 = PTR___NSConcreteStackBlock_001104f0;
  local_160 = PTR___NSConcreteStackBlock_001104f0;
  local_158 = 0xc2000000;
  local_154 = 0;
  local_150 = ___46__WCMFeedController_storeHeaderImage_account___block_invoke_2;
  local_148 = &___block_descriptor_56_e8_32s_e40_v16__0__UIGraphicsImageRendererContext_8l;
  local_140 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_3 + 0x20));
  dStack_130 = dStack_c0;
  local_138 = local_c8;
  _objc_msgSend_imageWithActions_(uVar3,local_1b8);
  local_128 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _UIImagePNGRepresentation(local_128);
  local_168 = _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___dispatch_main_q_00110528;
  _objc_retainAutoreleaseReturnValue();
  uVar3 = _objc_retainAutoreleasedReturnValue(puVar2);
  local_1a0 = puVar1;
  local_198 = 0xc2000000;
  local_194 = 0;
  local_190 = ___46__WCMFeedController_storeHeaderImage_account___block_invoke_2091;
  local_188 = &___block_descriptor_56_e8_32s40s48w_e5_v8__0l;
  _objc_copyWeak(auStack_170,param_3 + 0x30);
  local_180 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_3 + 0x28));
  local_178 = (*(code *)PTR__objc_retain_00110460)(local_168);
  _dispatch_async(uVar3,&local_1a0);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_storeStrong(&local_178);
  _objc_storeStrong(&local_180,0);
  _objc_destroyWeak(auStack_170);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_128,0);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_120,0);
  return;
}

