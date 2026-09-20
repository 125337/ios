// FUN_001fec40 @ 001fec40

void FUN_001fec40(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
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
    _objc_getAssociatedObject(local_18,&DAT_028c9170);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_18;
    local_28 = uVar1;
    _objc_getAssociatedObject(local_18,&DAT_028c9173);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = uVar2;
    if (local_28 != 0) {
      FUN_00200588(local_28,PTR_s_stopPlayer_026a0568);
      FUN_00200588(local_28,PTR_s_clearPlayer_026a0570);
      FUN_00200588(local_28,PTR_s_removeTimeObserver_026a0578);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_removeFromSuperview_026ca800);
      _objc_setAssociatedObject(local_18,&DAT_028c9170,0,1);
    }
    uVar1 = local_40[0];
    puVar3 = PTR__OBJC_CLASS___AVPlayer_026ce308;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___AVPlayer_026ce308,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_pause_0269f2d8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40[0],PTR_s_replaceCurrentItemWithPlayerItem_026a0580,0);
    }
    _objc_setAssociatedObject(local_18,&DAT_028c9173,0,1);
    _objc_setAssociatedObject(local_18,&DAT_028c9174,0,1);
    _objc_setAssociatedObject(local_18,&DAT_028c9171,0,3);
    _objc_setAssociatedObject(local_18,&DAT_028c9172,0,1);
    _objc_storeStrong(local_40);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

