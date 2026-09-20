// FUN_0220fe80 @ 0220fe80

void FUN_0220fe80(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  lVar1 = unaff_x20 +
          _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C28WCRefineVoiceGlowLayoutModel::
          _safeAreaInsets;
  _swift_beginAccess(lVar1,auStack_28,0x21,0);
  puVar2 = &DAT_028c7520;
  FUN_021c77d4(&DAT_028c7520,&DAT_0233bce0);
  lVar3 = *(long *)(puVar2 + -8);
  (**(code **)(lVar3 + 0x18))(lVar1,param_1);
  _swift_endAccess(auStack_28);
  (**(code **)(lVar3 + 8))(param_1,puVar2);
  return;
}

