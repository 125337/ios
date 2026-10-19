// initValue @0x710f4

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageData::initValue(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBImageLayout);
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = uVar1;
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeWeak(param_1 + 0x110,uVar1);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0x4170000000000000;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBSentinel);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar1 = _objc_opt_new(&objc::class_t::WCMYBIBInteractionProfile);
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
  (*(code *)PTR__objc_release_00110458)(uVar2);
  *(undefined1 *)(param_1 + 0x19) = 1;
  return;
}

