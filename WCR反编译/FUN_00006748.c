// FUN_00006748 @ 00006748

void FUN_00006748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  undefined8 ***pppuVar3;
  undefined8 **local_38;
  undefined4 local_2c;
  undefined8 **local_28;
  
  pppuVar3 = &local_28;
  local_28 = (undefined8 ***)0x0;
  _objc_storeStrong(pppuVar3,param_5);
  if ((undefined8 ***)local_28 == (undefined8 ***)0x0) {
    local_2c = 1;
  }
  else {
    FUN_00004e6c();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    local_38 = pppuVar3;
    if (pppuVar3 != (undefined8 ***)0x0) {
      pppuVar3 = (undefined8 ***)local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_windowScene_026cabf8);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = pppuVar3 != (undefined8 ***)local_38;
      (*(code *)PTR__objc_release_02578630)(pppuVar3);
    }
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setWindowScene__026caaf0,local_38);
      pppuVar3 = (undefined8 ***)local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_coordinateSpace_0269cb30);
      uVar2 = (uint)pppuVar3;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)();
      _CGRectIsEmpty(param_1,param_2,param_3,param_4);
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,param_2,param_3,param_4,local_28,PTR_s_setFrame__026ca960);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHidden__026ca970,0);
    pppuVar3 = (undefined8 ***)local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isKeyWindow_0269cd70);
    if (((ulong)pppuVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_makeKeyAndVisible_0269cd78);
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

