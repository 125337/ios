// FUN_000f77f0 @ 000f77f0

void FUN_000f77f0(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_000f9590();
  _WCRefineChatPositionFeatureAllowed();
  if (((uVar1 & 1) != 0) && ((DAT_028c8458._1_1_ & 1) != 0)) {
    FUN_00101628(param_1);
  }
  FUN_000f8ec0(param_1,0);
  FUN_001008e0(param_1);
  _objc_setAssociatedObject(param_1,DAT_026df8b8,0,1);
  (*DAT_028c83f8)(param_1,param_2,param_3 & 1);
  return;
}

