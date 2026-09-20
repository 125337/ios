// exportAllFrames @ 01d74e38

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameLibraryViewController::exportAllFrames(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  ID local_88;
  undefined8 local_80;
  byte local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte local_59;
  undefined8 local_58;
  undefined8 local_50 [3];
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  uVar1 = *(undefined8 *)(param_1 + (long)_framePaths);
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_copy_0269d150);
  local_50[0] = 0;
  local_58 = 0;
  local_68 = 0;
  local_70 = 0;
  IVar2 = local_28;
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_prepareScreenshotFrameExportZipF_026c4a60,uVar1,&local_68,&local_70);
  _objc_storeStrong(local_50,local_68);
  _objc_storeStrong(&local_58,local_70);
  puVar3 = PTR___dispatch_main_q_02578680;
  local_59 = (byte)IVar2;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_50[0];
  local_b0 = PTR___NSConcreteStackBlock_02578660;
  local_a8 = 0xc2000000;
  local_a4 = 0;
  local_a0 = FUN_01d75150;
  local_98 = &DAT_025898e8;
  local_78 = local_59 & 1;
  (*(code *)PTR__objc_retain_02578638)();
  IVar2 = local_28;
  local_90 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_58;
  local_88 = IVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = uVar1;
  _dispatch_async(puVar3,&local_b0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_38,0);
  return;
}

