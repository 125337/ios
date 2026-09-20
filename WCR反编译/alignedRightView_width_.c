// alignedRightView:width: @ 019eee30

/* Function Stack Size: 0x20 bytes */

ID WCRefineFontConvertViewController::alignedRightView_width_
             (ID param_1,SEL param_2,ID param_3,double param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined *local_38;
  double local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_30 = param_4;
  _objc_alloc();
  uVar3 = 0;
  uVar2 = 0;
  uVar5 = 0x4040000000000000;
  dVar4 = local_30;
  FUN_019e39e8();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,uVar3,dVar4,uVar5,puVar1,PTR_s_initWithFrame__026ca6e8);
  uVar2 = 0;
  uVar3 = 0x3ff0000000000000;
  uVar5 = 0x403e000000000000;
  dVar4 = local_30;
  local_38 = puVar1;
  FUN_019e39e8();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,uVar3,dVar4,uVar5,local_28,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSubview__026ca4c0,local_28);
  puVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

