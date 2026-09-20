// FUN_02216748 @ 02216748

undefined1 * FUN_02216748(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 *local_d8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [24];
  undefined1 auStack_48 [40];
  
  puVar1 = (undefined8 *)
           (unaff_x20 +
           _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C36WCRefineVoiceInputBreathingLightView::
           ___lazy_storage___hostingController);
  _swift_beginAccess(puVar1,auStack_68,0x20,0);
  local_d8 = (undefined1 *)*puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  _swift_endAccess(auStack_68);
  if (local_d8 == (undefined1 *)0x0) {
    FUN_021c77d4(&DAT_028c7650,&DAT_0233be48);
    uVar2 = *(undefined8 *)
             (unaff_x20 +
             _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C36WCRefineVoiceInputBreathingLightView
             ::layoutModel);
    _swift_retain();
    FUN_022164a8(uVar2);
    local_d8 = auStack_90;
    _memcpy(local_d8,auStack_48,0x28);
    __s7SwiftUI19UIHostingControllerC8rootViewACyxGx_tcfC();
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = (undefined8 *)
             (unaff_x20 +
             _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C36WCRefineVoiceInputBreathingLightView
             ::___lazy_storage___hostingController);
    _swift_beginAccess(puVar1,auStack_a8,0x21,0);
    uVar2 = *puVar1;
    *puVar1 = local_d8;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _swift_endAccess(auStack_a8);
  }
  return local_d8;
}

