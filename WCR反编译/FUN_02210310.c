// FUN_02210310 @ 02210310

void FUN_02210310(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  lVar1 = unaff_x20 +
          _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C28WCRefineVoiceGlowLayoutModel::_isActive
  ;
  _swift_beginAccess(lVar1,auStack_28,0x21,0);
  puVar2 = &DAT_028c7530;
  FUN_021c77d4(&DAT_028c7530,&DAT_0233bd38);
  lVar3 = *(long *)(puVar2 + -8);
  (**(code **)(lVar3 + 0x18))(lVar1,param_1);
  _swift_endAccess(auStack_28);
  (**(code **)(lVar3 + 8))(param_1,puVar2);
  return;
}

