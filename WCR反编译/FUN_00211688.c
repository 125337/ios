// FUN_00211688 @ 00211688

void FUN_00211688(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_48;
  ulong local_40 [3];
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028c9195);
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
    if (uVar1 != 0) {
      FUN_00200588(uVar1,PTR_s_stopPlayer_026a0568);
      FUN_00200588(local_28,PTR_s_clearPlayer_026a0570);
      FUN_00200588(local_28,PTR_s_removeTimeObserver_026a0578);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_removeFromSuperview_026ca800);
      _objc_setAssociatedObject(local_18,&DAT_028c9195,0,1);
    }
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028c9198);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___AVPlayer_026ce308;
    local_40[0] = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___AVPlayer_026ce308,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_pause_0269f2d8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40[0],PTR_s_replaceCurrentItemWithPlayerItem_026a0580,0);
    }
    _objc_setAssociatedObject(local_18,&DAT_028c9198,0,1);
    _objc_setAssociatedObject(local_18,&DAT_028c919a,0,1);
    _objc_setAssociatedObject(local_18,&DAT_028c9196,0,3);
    _objc_setAssociatedObject(local_18,&DAT_028c9197,0,1);
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028c919b);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar1;
    if (uVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_removeFromSuperview_026ca800);
      _objc_setAssociatedObject(local_18,&DAT_028c919b,0,1);
    }
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_18,PTR_s_setAlpha__026ca860);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(local_40,0);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

