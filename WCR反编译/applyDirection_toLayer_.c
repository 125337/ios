// applyDirection:toLayer: @ 00f8de58

/* Function Stack Size: 0x20 bytes */

void WCRefineGradientPalette::applyDirection_toLayer_
               (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long_long local_200;
  long_long local_1f8;
  long local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_40,param_4);
  if (local_40 != 0) {
    if ((long)local_38 < 6) {
      local_1f8 = local_38;
    }
    else {
      local_1f8 = 5;
    }
    if ((long)local_1f8 < 1) {
      local_200 = 0;
    }
    else {
      local_200 = local_1f8;
    }
    if (local_200 == 1) {
      uVar1 = 0x3ff0000000000000;
      uVar2 = 0x3fe0000000000000;
      FUN_00f8e29c(0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,uVar2,local_40,PTR_s_setStartPoint__026caa70);
      uVar2 = 0x3fe0000000000000;
      uVar1 = 0;
      FUN_00f8e29c();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,uVar2,local_40,PTR_s_setEndPoint__026ca940);
    }
    else if (local_200 == 2) {
      uVar1 = 0x3fe0000000000000;
      uVar2 = 0;
      FUN_00f8e29c(0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,uVar2,local_40,PTR_s_setStartPoint__026caa70);
      uVar1 = 0x3fe0000000000000;
      uVar2 = 0x3ff0000000000000;
      FUN_00f8e29c();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,uVar2,local_40,PTR_s_setEndPoint__026ca940);
    }
    else if (local_200 == 3) {
      uVar1 = 0x3fe0000000000000;
      uVar2 = 0x3ff0000000000000;
      FUN_00f8e29c(0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,uVar2,local_40,PTR_s_setStartPoint__026caa70);
      uVar1 = 0x3fe0000000000000;
      uVar2 = 0;
      FUN_00f8e29c();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,uVar2,local_40,PTR_s_setEndPoint__026ca940);
    }
    else if (local_200 == 4) {
      uVar2 = 0;
      uVar1 = 0;
      FUN_00f8e29c(0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,uVar2,local_40,PTR_s_setStartPoint__026caa70);
      uVar2 = 0x3ff0000000000000;
      uVar1 = 0x3ff0000000000000;
      FUN_00f8e29c();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,uVar2,local_40,PTR_s_setEndPoint__026ca940);
    }
    else if (local_200 - 5 == 0) {
      uVar1 = 0x3ff0000000000000;
      uVar2 = 0;
      FUN_00f8e29c(0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,uVar2,local_40,PTR_s_setStartPoint__026caa70);
      uVar1 = 0;
      uVar2 = 0x3ff0000000000000;
      FUN_00f8e29c();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,uVar2,local_40,PTR_s_setEndPoint__026ca940);
    }
    else {
      uVar1 = 0;
      uVar2 = 0x3fe0000000000000;
      FUN_00f8e29c(local_200 - 5);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,uVar2,local_40,PTR_s_setStartPoint__026caa70);
      uVar2 = 0x3fe0000000000000;
      uVar1 = 0x3ff0000000000000;
      FUN_00f8e29c();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,uVar2,local_40,PTR_s_setEndPoint__026ca940);
    }
  }
  _objc_storeStrong(&local_40,0);
  return;
}

