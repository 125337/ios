// FUN_022117f0 @ 022117f0

long FUN_022117f0(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_a0 [8];
  ulong local_98;
  ulong local_90;
  ulong local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  long local_40;
  long local_38;
  undefined1 *local_30;
  undefined *local_28;
  
  puVar2 = &DAT_028c7578;
  FUN_021c77d4(&DAT_028c7578,&DAT_0233bdb8);
  local_40 = *(long *)(puVar2 + -8);
  local_98 = *(long *)(local_40 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_28 = puVar2;
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar1 = -local_98;
  puVar2 = &DAT_028c7530;
  local_30 = auStack_a0 + lVar1;
  FUN_021c77d4(&DAT_028c7530,&DAT_0233bd38);
  local_60 = *(long *)(puVar2 + -8);
  local_90 = *(long *)(local_60 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_48 = puVar2;
  (*(code *)PTR____chkstk_darwin_02578668)();
  lVar1 = (long)(auStack_a0 + lVar1) - local_90;
  puVar2 = &DAT_028c7520;
  local_50 = lVar1;
  FUN_021c77d4(&DAT_028c7520,&DAT_0233bce0);
  local_80 = *(long *)(puVar2 + -8);
  local_88 = *(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_68 = puVar2;
  (*(code *)PTR____chkstk_darwin_02578668)();
  local_70 = lVar1 - local_88;
  local_78 = _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C28WCRefineVoiceGlowLayoutModel::
             _safeAreaInsets;
  __s7SwiftUI10EdgeInsetsVACycfC();
  FUN_0220fa04(local_70);
  (**(code **)(local_80 + 0x20))(unaff_x20 + local_78,local_70,local_68);
  local_58 = _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C28WCRefineVoiceGlowLayoutModel::
             _isActive;
  FUN_0220ff18(local_50,0);
  (**(code **)(local_60 + 0x20))(unaff_x20 + local_58,local_50,local_48);
  local_38 = _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C28WCRefineVoiceGlowLayoutModel::
             _paletteColors;
  FUN_022105ec();
  FUN_022103a8(local_30);
  (**(code **)(local_40 + 0x20))(unaff_x20 + local_38,local_30,local_28);
  return unaff_x20;
}

