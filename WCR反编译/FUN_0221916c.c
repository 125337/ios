// FUN_0221916c @ 0221916c

void FUN_0221916c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *local_30;
  
  local_30 = param_1;
  if (param_1 == (undefined8 *)0x0) {
    local_30 = (undefined8 *)0x0;
  }
  if (local_30 == (undefined8 *)0x0) {
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
              ("Fatal error",0xb,2,"Unexpectedly found nil while unwrapping an Optional value",0x39,
               2,"WCRefine/WCRefineVoiceInputBreathingLightOverlay.swift",0x36,2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x2219238);
    (*pcVar1)();
  }
  puVar2 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  FUN_02217a24();
  uVar3 = *puVar2;
  _swift_retain(uVar3);
  FUN_022188dc(local_30);
  _swift_release(uVar3);
  (*(code *)PTR__objc_release_02578630)(local_30);
  return;
}

