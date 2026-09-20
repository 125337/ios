// FUN_0087acf8 @ 0087acf8

byte FUN_0087acf8(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  ulong local_48;
  char *local_40;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_0087ae8c;
  }
  uVar1 = local_20;
  FUN_0087aec4();
  if ((uVar1 & 1) != 0) {
    local_11 = 1;
    local_24 = 1;
    goto LAB_0087ae8c;
  }
  pcVar2 = "ContactsViewController";
  _objc_getClass();
  local_40 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_0087ae8c;
  }
  uVar1 = local_20;
  FUN_0087b010();
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar1;
  if (uVar1 == 0) {
LAB_0087ae60:
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isMemberOfClass__026a2030,local_40);
    if ((uVar1 & 1) == 0) goto LAB_0087ae60;
    FUN_0087a644(local_20);
    local_11 = 1;
  }
  local_24 = 1;
  _objc_storeStrong(&local_48,0);
LAB_0087ae8c:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

