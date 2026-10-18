// FUN_002306b4 @0x2306b4


void FUN_002306b4(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  

  uVar1 = _objc_getClass("NSBundle");

  _MSHookMessageEx(uVar1,"objectForInfoDictionaryKey:",FUN_002307ac,&DAT_003eb100);

  uVar1 = _objc_getClass("CADisplayLink");

  uVar2 = _object_getClass();

  _MSHookMessageEx(uVar2,"displayLinkWithTarget:selector:",FUN_00230894,&DAT_003eb108);

  _MSHookMessageEx(uVar1,"setPreferredFramesPerSecond:",FUN_002308e0,&DAT_003eb110);

  _MSHookMessageEx(uVar1,"setPreferredFrameRateRange:",FUN_00230938,&DAT_003eb118);

  uVar1 = _objc_getClass("UIWindow");

  _MSHookMessageEx(uVar1,"makeKeyAndVisible",FUN_002309b0,&DAT_003eb120);

  _MSHookMessageEx(uVar1,"setHidden:",FUN_00230a08,&DAT_003eb128);

  return;

}




