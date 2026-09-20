// _$s8WCRefine22WCRSuperFloatPetPlayerC12previewImage02atD9Directory4sizeSo7UIImageCSgSS_12CoreGraphics7CGFloatVtFZ @ 021ff438

undefined8
__s8WCRefine22WCRSuperFloatPetPlayerC12previewImage02atD9Directory4sizeSo7UIImageCSgSS_12CoreGraphics7CGFloatVtFZ
          (undefined8 param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  void *aBlock;
  undefined *puVar7;
  undefined8 local_180;
  code *local_178;
  undefined *local_170;
  undefined8 local_100;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  uVar2 = 0;
  uVar6 = param_1;
  FUN_021c7774();
  FUN_021a0914();
  __s8WCRefine22WCRSuperFloatPetPlayerC9imageViewACSo07UIImageG0C_tcfC();
  local_48 = uVar2;
  __s8WCRefine22WCRSuperFloatPetPlayerC4load13fromDirectorySbSS_tF(param_2,param_3);
  if ((param_2 & 1) == 0) {
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_180 = 0;
    local_178 = (code *)0x0;
    local_170 = (undefined *)0x0;
  }
  else {
    lVar3 = 0;
    FUN_02201ed4();
    if (lVar3 == 0) {
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_180 = 0;
      local_178 = (code *)0x0;
      local_170 = (undefined *)0x0;
    }
    else {
      uVar4 = 0;
      local_50 = lVar3;
      FUN_021f8d10();
      _swift_getObjCClassFromMetadata();
      FUN_022222e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      local_58 = uVar4;
      _objc_opt_self();
      FUN_02222a00();
      _objc_retainAutoreleasedReturnValue();
      FUN_02222c00();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      FUN_022233e0(uVar6,uVar4,local_100);
      FUN_021f8d70(0);
      (*(code *)PTR__objc_retain_02578638)(uVar4);
      uVar6 = uVar4;
      FUN_021f5690(param_1);
      local_60 = uVar6;
      (*(code *)PTR__objc_retain_02578638)(lVar3);
      local_170 = &DAT_0258e640;
      _swift_allocObject();
      *(long *)(local_170 + 0x10) = lVar3;
      *(undefined8 *)(local_170 + 0x18) = param_1;
      _swift_retain();
      _swift_release(local_170);
      puVar5 = &DAT_0258e668;
      _swift_allocObject(&DAT_0258e668,0x20,7);
      *(code **)(puVar5 + 0x10) = FUN_0220290c;
      *(undefined **)(puVar5 + 0x18) = local_170;
      _swift_retain();
      local_70 = FUN_02202940;
      local_90 = PTR___NSConcreteStackBlock_02578660;
      local_88 = 0x42000000;
      local_84 = 0;
      local_80 = FUN_021f583c;
      local_78 = &DAT_0258e680;
      local_68 = puVar5;
      aBlock = __Block_copy(&local_90);
      _swift_release(local_68);
      local_180 = uVar6;
      FUN_02222560(uVar6,local_100,aBlock);
      _objc_retainAutoreleasedReturnValue();
      __Block_release(aBlock);
      puVar7 = puVar5;
      _swift_isEscapingClosureAtFileLocation
                (puVar5,
                 "/Users/junlin/Code/WCRefine-S/WCRefine/SuperFloat/WCRSuperFloatPetPlayer.swift",
                 0x4e,0x51,0x1f,1);
      _swift_release(puVar5);
      if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x21ff838);
        (*pcVar1)();
      }
      (*(code *)PTR__objc_release_02578630)(uVar6);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_178 = FUN_0220290c;
    }
  }
  FUN_02201ea4(0,0);
  FUN_02201ea4(local_178,local_170);
  return local_180;
}

