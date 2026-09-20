// FUN_015c3d0c @ 015c3d0c

void FUN_015c3d0c(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *local_28;
  undefined *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  FUN_015c322c(local_18);
  puVar2 = PTR_WCRVPSTickTarget_026cede8;
  _objc_alloc_init();
  local_20 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setCell__026a51a8,local_18);
  puVar2 = PTR__OBJC_CLASS___CADisplayLink_026ce190;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___CADisplayLink_026ce190,PTR_s_displayLinkWithTarget_selector__0269dd38
             ,local_20,PTR_s_tick__026b0dc8);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = 2;
  local_28 = puVar2;
  ___isPlatformVersionAtLeast(2,0xf,0);
  if (iVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPreferredFramesPerSecond__026b0dd8,10);
  }
  else {
    uVar4 = 0x41000000;
    uVar5 = 0x41400000;
    uVar6 = 0x41200000;
    _CAFrameRateRangeMake();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,uVar5,uVar6,local_28,PTR_s_setPreferredFrameRateRange__026b0dd0);
  }
  puVar2 = local_28;
  puVar3 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_addToRunLoop_forMode__0269dd48,puVar3,
             *(undefined8 *)PTR__NSRunLoopCommonModes_02578258);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_setAssociatedObject(local_18,&DAT_028e3b2e,local_28);
  _objc_setAssociatedObject(local_18,&DAT_028e3b2f,local_20,1);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

