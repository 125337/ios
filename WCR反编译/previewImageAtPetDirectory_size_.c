// previewImageAtPetDirectory:size: @ 022029a8

/* Function Stack Size: 0x20 bytes */

ID WCRSuperFloatPetPlayer::previewImageAtPetDirectory_size_
             (ID param_1,SEL param_2,ID param_3,double param_4)

{
  ID IVar1;
  
  _swift_getObjCClassMetadata();
  (*(code *)PTR__objc_retain_02578638)(param_3);
  IVar1 = param_3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  (*(code *)PTR__objc_release_02578630)(param_3);
  _swift_getObjCClassMetadata(param_1);
  __s8WCRefine22WCRSuperFloatPetPlayerC12previewImage02atD9Directory4sizeSo7UIImageCSgSS_12CoreGraphics7CGFloatVtFZ
            (param_4,IVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

