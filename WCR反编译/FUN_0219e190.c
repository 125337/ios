// FUN_0219e190 @ 0219e190

undefined1 * FUN_0219e190(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 local_80;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  _swift_getObjectType();
  local_30 = param_3;
  local_28 = param_1;
  local_20 = param_2;
  _swift_bridgeObjectRetain();
  if (param_2 == 0) {
    local_80 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(param_2);
    local_80 = param_1;
  }
  puVar1 = local_40;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__026a2600,local_80,param_3);
  (*(code *)PTR__objc_release_02578630)(local_80);
  (*(code *)PTR__objc_retain_02578638)(puVar1);
  (*(code *)PTR__objc_release_02578630)(param_3);
  _swift_bridgeObjectRelease(param_2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return puVar1;
}

