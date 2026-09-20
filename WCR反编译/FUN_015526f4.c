// FUN_015526f4 @ 015526f4

void FUN_015526f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  long local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  long local_160;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  long local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  long local_108;
  undefined1 auStack_100 [48];
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [52];
  undefined4 local_3c;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  uVar1 = DAT_02332e50;
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = param_1;
  if ((local_28 == 0) || (local_30 == 0)) {
    local_3c = 1;
  }
  else {
    FUN_01587ed0(local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAlpha__026ca860);
    (*(code *)PTR__objc_msgSend_02578628)(0,local_30,PTR_s_setAlpha__026ca860);
    _CGAffineTransformMakeScale(uVar1);
    _CGAffineTransformMakeTranslation(0,0x4024000000000000);
    _CGAffineTransformConcat(auStack_a0,auStack_d0);
    lVar4 = local_30;
    _memcpy(auStack_100,auStack_70,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_setTransform__026caad0,auStack_100);
    lVar4 = local_28;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    puVar2 = PTR___NSConcreteStackBlock_02578660;
    local_128 = PTR___NSConcreteStackBlock_02578660;
    local_120 = 0xc2000000;
    local_11c = 0;
    local_118 = FUN_015880d4;
    local_110 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_108 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323d40,0,puVar3,PTR_s_animateWithDuration_delay_option_026ca4f0,&DAT_00020004,
               &local_128);
    lVar4 = local_30;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_158 = puVar2;
    local_150 = 0xc2000000;
    local_14c = 0;
    local_148 = FUN_01588118;
    local_140 = &DAT_0257cc98;
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = lVar4;
    local_130 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02324058,0,puVar3,PTR_s_animateWithDuration_delay_option_026ca4f0,&DAT_00020004,
               &local_158,0);
    lVar4 = local_30;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_180 = puVar2;
    local_178 = 0xc2000000;
    local_174 = 0;
    local_170 = FUN_0158815c;
    local_168 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    lVar5 = local_30;
    local_160 = lVar4;
    local_1a8 = puVar2;
    local_1a0 = 0xc2000000;
    local_19c = 0;
    local_198 = FUN_015881dc;
    local_190 = &DAT_02579d00;
    (*(code *)PTR__objc_retain_02578638)();
    local_188 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02332e48,0,DAT_02323f28,0x3fe6666666666666,puVar3,
               PTR_s_animateWithDuration_delay_usingS_026ca4f8,&DAT_00020006,&local_180,&local_1a8);
    _objc_storeStrong(&local_188,0);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(&local_108,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

