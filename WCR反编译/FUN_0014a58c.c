// FUN_0014a58c @ 0014a58c

void FUN_0014a58c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_48 [3];
  undefined *local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_5);
  puVar3 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028c87e0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_28;
  local_30 = puVar3;
  FUN_0014a994();
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = puVar4;
  if ((local_30 == (undefined *)0x0) && (puVar4 != (undefined *)0x0)) {
    if (DAT_028c8690 == 0) {
      puVar4 = PTR_WCRChatToolbarView_026ce318;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_bounds_026ca548);
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      uVar5 = param_1;
      FUN_00134e1c();
      uVar7 = 0;
      uVar6 = 0;
      FUN_0013a194();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,uVar7,param_1,uVar5,puVar4,PTR_s_initWithFrame__026ca6e8);
      puVar3 = local_30;
      local_30 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setHidden__026ca970,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_addSubview__026ca4c0,local_30);
      _objc_setAssociatedObject(local_28,&DAT_028c87e0,local_30,1);
    }
    else {
      _objc_storeStrong(&local_30,DAT_028c8690);
      _objc_storeStrong(&DAT_028c8690,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeFromSuperview_026ca800);
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_addSubview__026ca4c0,local_30);
      _objc_setAssociatedObject(local_28,&DAT_028c87e0,local_30,1);
    }
  }
  else {
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = puVar3 != local_48[0];
    bVar2 = local_48[0] != (undefined *)0x0;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (bVar1 && bVar2) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeFromSuperview_026ca800);
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_addSubview__026ca4c0,local_30);
    }
  }
  puVar3 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar3);
  return;
}

