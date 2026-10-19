// ___50-[WCMYBImageBrowser_implementGetBaseInfoProtocol:]_block_invoke.46 @0x65c24

undefined1  [16]
___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_46
          (undefined1 param_1 [16],undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 local_58;
  long local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  ulong local_20;
  undefined8 uStack_18;
  
  local_38 = param_3;
  local_30 = param_4;
  local_28 = param_3;
  local_40 = _objc_loadWeakRetained(param_3 + 0x20);
  if (local_40 == 0) {
    uStack_18 = *(undefined8 *)(PTR__CGSizeZero_001108e0 + 8);
    local_20 = *(ulong *)PTR__CGSizeZero_001108e0;
  }
  else {
    _objc_msgSend_rotationHandler(local_40,local_58);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    local_20 = _objc_msgSend_containerSizeWithOrientation_(uVar1,local_58,local_30);
    uStack_18 = param_2;
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  _objc_storeStrong(&local_40,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_20;
  return auVar2;
}

