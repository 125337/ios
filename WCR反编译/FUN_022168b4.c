// FUN_022168b4 @ 022168b4

void FUN_022168b4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = (undefined8 *)
           (unaff_x20 +
           _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C36WCRefineVoiceInputBreathingLightView::
           ___lazy_storage___hostingController);
  _swift_beginAccess(puVar1,auStack_38,0x21,0);
  uVar2 = *puVar1;
  *puVar1 = param_1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _swift_endAccess(auStack_38);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

