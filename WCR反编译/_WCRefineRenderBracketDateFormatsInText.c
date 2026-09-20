// _WCRefineRenderBracketDateFormatsInText @ 00f205a8

void _WCRefineRenderBracketDateFormatsInText(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_18;
  _WCRefineRenderDateFormatsInText(local_18,local_20);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

