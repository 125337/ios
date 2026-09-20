// FUN_01531aa4 @ 01531aa4

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_01531aa4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long local_f8;
  undefined1 auStack_98 [48];
  undefined1 auStack_68 [52];
  undefined4 local_34;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  if ((local_28 == 0) || (local_30 == 0)) {
    local_34 = 1;
  }
  else {
    FUN_01563940();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_removeFromSuperview_026ca800);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAlpha__026ca860);
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_30,PTR_s_setAlpha__026ca860);
    _memcpy(auStack_68,PTR__CGAffineTransformIdentity_025782d8,0x30);
    lVar5 = local_30;
    _memcpy(auStack_98,auStack_68,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_setTransform__026caad0,auStack_98);
    _objc_storeStrong(&DAT_028e3880,local_28);
    _objc_storeStrong(&DAT_028e3888,local_30);
    lVar1 = local_30;
    _objc_getAssociatedObject(local_30,DAT_028c5df8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = DAT_028e3890;
    DAT_028e3890 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar5);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    DAT_028c5f58 = puVar4;
    (*(code *)PTR__objc_release_02578630)();
    FUN_0154557c();
    local_f8 = local_30;
    DAT_028c5f60 = puVar3;
    FUN_01563a08();
    if (local_f8 < 0) {
      FUN_01545618();
    }
    DAT_028c5f68 = local_f8;
    DAT_028e39f0 = DAT_028e3988;
    lVar5 = local_30;
    _objc_getAssociatedObject(local_30,DAT_028c5e10);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    DAT_028e39f8 = (undefined1)lVar1;
    (*(code *)PTR__objc_release_02578630)(lVar5);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

