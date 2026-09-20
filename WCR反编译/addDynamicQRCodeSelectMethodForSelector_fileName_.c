// addDynamicQRCodeSelectMethodForSelector:fileName: @ 01f34310

/* Function Stack Size: 0x20 bytes */

void WCRefineUIBeautifyViewController::addDynamicQRCodeSelectMethodForSelector_fileName_
               (ID param_1,SEL param_2,SEL param_3,ID param_4)

{
  long lVar1;
  ID IVar2;
  SEL SVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [8];
  SEL local_50;
  undefined **local_48;
  undefined1 auStack_40 [12];
  undefined4 local_34;
  long local_30;
  SEL local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  if ((local_28 == 0) ||
     (lVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_34 = 1;
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_qrCodeSelectMethodMap_026c8900);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_30;
    SVar3 = local_28;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setObject_forKey__026ca9e8,lVar1);
    (*(code *)PTR__objc_release_02578630)(SVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_initWeak(auStack_40,local_18);
    ppuVar4 = &local_78;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_01f34568;
    local_60 = &DAT_0258bb40;
    _objc_copyWeak(auStack_58,auStack_40);
    local_50 = local_28;
    _objc_retainBlock();
    ppuVar5 = ppuVar4;
    _imp_implementationWithBlock();
    (*(code *)PTR__objc_release_02578630)(ppuVar4);
    IVar2 = local_18;
    local_48 = ppuVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    _class_replaceMethod(IVar2,local_28,local_48,"v@:@");
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_40);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

