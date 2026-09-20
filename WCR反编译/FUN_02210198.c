// FUN_02210198 @ 02210198

void FUN_02210198(undefined8 param_1)

{
  undefined *puVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_80 [8];
  ulong local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  long local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined1 auStack_48 [24];
  
  puVar1 = &DAT_028c7538;
  local_58 = param_1;
  FUN_021c77d4(&DAT_028c7538,&DAT_0233bd40);
  local_60 = *(long *)(puVar1 + -8);
  local_78 = *(long *)(local_60 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_50 = puVar1;
  (*(code *)PTR____chkstk_darwin_02578668)();
  local_70 = auStack_80 + -local_78;
  (**(code **)(extraout_x8 + 0x10))();
  local_68 = auStack_48;
  _swift_beginAccess(unaff_x20 +
                     _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C28WCRefineVoiceGlowLayoutModel
                     ::_isActive,local_68,0x21,0);
  puVar1 = &DAT_028c7530;
  FUN_021c77d4(&DAT_028c7530,&DAT_0233bd38);
  __s7Combine9PublishedV14projectedValueAC9PublisherVyx_Gvs(local_70,puVar1);
  _swift_endAccess(local_68);
  (**(code **)(local_60 + 8))(local_58,local_50);
  return;
}

