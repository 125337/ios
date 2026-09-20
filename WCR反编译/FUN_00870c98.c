// FUN_00870c98 @ 00870c98

byte FUN_00870c98(ulong param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  byte local_44;
  byte local_11;
  
  if ((DAT_028cd869 & 1) == 0) {
    (*DAT_028cd820)(param_1,param_2);
    local_44 = (byte)param_1;
  }
  else {
    pcVar1 = &cf_bSolitaire;
    _NSSelectorFromString(&cf_bSolitaire);
    uVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,pcVar1);
    pcVar1 = &cf_shouldShowRoomTodoView;
    _NSSelectorFromString(&cf_shouldShowRoomTodoView);
    uVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,pcVar1);
    if (((uVar2 & 1) == 0) && ((uVar3 & 1) == 0)) {
      local_44 = 0;
    }
    else {
      (*DAT_028cd820)(param_1,param_2);
      local_44 = (byte)param_1;
    }
  }
  local_11 = local_44 & 1;
  return local_11;
}

