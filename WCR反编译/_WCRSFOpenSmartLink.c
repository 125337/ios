// _WCRSFOpenSmartLink @ 01637e84

void _WCRSFOpenSmartLink(undefined8 param_1)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  _WCRSFOpenURLSchemeTemplate(local_18);
  _objc_storeStrong(&local_18,0);
  return;
}

