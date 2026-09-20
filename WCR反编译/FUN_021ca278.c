// FUN_021ca278 @ 021ca278

undefined8 FUN_021ca278(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined8 unaff_x20;
  long local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  undefined1 *local_40;
  long local_38;
  long local_30;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    local_30 = 0;
  }
  else {
    local_50 = *(long *)(param_1 + 0x18);
    lVar1 = param_1;
    FUN_021cdd90();
    local_58 = *(long *)(local_50 + -8);
    local_60 = *(long *)(local_58 + 0x40);
    local_40 = (undefined1 *)&local_70;
    (*(code *)PTR____chkstk_darwin_02578668)(&local_70,lVar1);
    local_48 = (long)&local_70 - (local_60 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(extraout_x8 + 0x10))();
    lVar1 = local_48;
    __ss27_bridgeAnythingToObjectiveCyyXlxlF(local_48,local_50);
    local_38 = lVar1;
    (**(code **)(local_58 + 8))(local_48,local_50);
    FUN_021c7ff8(param_1);
    local_30 = local_38;
  }
  local_70 = local_30;
  FUN_022227a0();
  local_68 = unaff_x20;
  _swift_unknownObjectRelease(local_70);
  return local_68;
}

