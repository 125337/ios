// configureWithOrigin:actions:config: @ 021d76cc

/* Function Stack Size: 0x30 bytes */

void __thiscall
WCRSuperFloatFanMenuView::configureWithOrigin_actions_config_
          (WCRSuperFloatFanMenuView *this,ID param_1,SEL param_2,CGPoint param_3,ID param_4,
          ID param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 in_d0;
  undefined8 in_d1;
  
  dVar4 = param_3.field1_0x8;
  dVar3 = param_3.field0_0x0;
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_retain_02578638)(dVar4);
  (*(code *)PTR__objc_retain_02578638)(param_1);
  uVar1 = 0;
  FUN_021c9d78(0);
  dVar2 = dVar3;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(dVar3,uVar1);
  (*(code *)PTR__objc_release_02578630)(dVar3);
  dVar3 = dVar4;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (dVar4,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,PTR___sSSSHsWP_02578940);
  (*(code *)PTR__objc_release_02578630)(dVar4);
  __s8WCRefine24WCRSuperFloatFanMenuViewC9configure6origin7actions6configySo7CGPointV_SaySo12NSDictionaryCGSDySSypGtF
            (in_d0,in_d1,dVar2,dVar3);
  _swift_bridgeObjectRelease(dVar3);
  _swift_bridgeObjectRelease(dVar2);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

