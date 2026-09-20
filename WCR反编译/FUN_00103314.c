// FUN_00103314 @ 00103314

void FUN_00103314(undefined8 param_1)

{
  long *plVar1;
  long local_18;
  
  plVar1 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar1,param_1);
  if (((local_18 != 0) && (_WCRefineChatPositionFeatureAllowed(), ((ulong)plVar1 & 1) != 0)) &&
     (FUN_000f915c(), ((ulong)plVar1 & 1) != 0)) {
    FUN_000f8ec0(local_18,1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

