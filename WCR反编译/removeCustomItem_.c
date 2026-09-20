// removeCustomItem: @ 01b7a68c

/* Function Stack Size: 0x18 bytes */

void WCRefineLongPressMenuViewController::removeCustomItem_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  long lVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  long local_38;
  uint local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  IVar2 = local_18;
  lVar1 = local_28;
  if (lVar3 != 0) {
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_01b7a7a4;
    local_40 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_applyLocalChange__026bfbb8,&local_58);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadItems_026ae4d8);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)(lVar3 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

