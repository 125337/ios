// FUN_0220ff58 @ 0220ff58

byte FUN_0220ff58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  undefined8 local_50;
  byte local_29;
  
  _swift_retain();
  puVar1 = &DAT_0233bcf0;
  _swift_getKeyPath(&DAT_0233bcf0,local_50);
  puVar2 = &DAT_0233bd18;
  _swift_getKeyPath(&DAT_0233bd18,local_50);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&local_29,unaff_x20,puVar1);
  _swift_release(puVar2);
  _swift_release(puVar1);
  _swift_release(unaff_x20);
  return local_29 & 1;
}

