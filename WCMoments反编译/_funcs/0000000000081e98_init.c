// init @0x81e98

/* Function Stack Size: 0x10 bytes */

ID WCMYBIBIconManager::init(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  long local_18;
  
  local_18 = 0;
  local_28 = &objc::class_t::WCMYBIBIconManager;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = _objc_msgSendSuper2(&local_30,"init");
  _objc_storeStrong(&local_18);
  if (local_18 != 0) {
    uVar1 = _objc_retainBlock(&___block_literal_global_29);
    uVar2 = *(undefined8 *)(local_18 + 8);
    *(undefined8 *)(local_18 + 8) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar1 = _objc_retainBlock(&___block_literal_global_33);
    uVar2 = *(undefined8 *)(local_18 + 0x10);
    *(undefined8 *)(local_18 + 0x10) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar1 = _objc_retainBlock(&___block_literal_global_36);
    uVar2 = *(undefined8 *)(local_18 + 0x18);
    *(undefined8 *)(local_18 + 0x18) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar1 = _objc_retainBlock(&___block_literal_global_39);
    uVar2 = *(undefined8 *)(local_18 + 0x20);
    *(undefined8 *)(local_18 + 0x20) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar1 = _objc_retainBlock(&___block_literal_global_42);
    uVar2 = *(undefined8 *)(local_18 + 0x28);
    *(undefined8 *)(local_18 + 0x28) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar1 = _objc_retainBlock(&___block_literal_global_45);
    uVar2 = *(undefined8 *)(local_18 + 0x30);
    *(undefined8 *)(local_18 + 0x30) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar1 = _objc_retainBlock(&___block_literal_global_48);
    uVar2 = *(undefined8 *)(local_18 + 0x38);
    *(undefined8 *)(local_18 + 0x38) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar1 = _objc_retainBlock(&___block_literal_global_51);
    uVar2 = *(undefined8 *)(local_18 + 0x40);
    *(undefined8 *)(local_18 + 0x40) = uVar1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  IVar3 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _objc_storeStrong(&local_18,0);
  return IVar3;
}

