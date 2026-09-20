// _$s8WCRefine24WCRSuperFloatFanMenuViewC8onSelectySo12NSDictionaryCcSgvs @ 021ce3c0

void __s8WCRefine24WCRSuperFloatFanMenuViewC8onSelectySo12NSDictionaryCcSgvs
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [24];
  
  FUN_021c7530();
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::onSelect);
  _swift_beginAccess(puVar1,auStack_40,0x21,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_0219fae8(uVar2,uVar3);
  _swift_endAccess(auStack_40);
  FUN_0219fae8(param_1,param_2);
  return;
}

