// _WCRefineFinderSaveVideoToAlbumFromDataItem @ 002773b8

void _WCRefineFinderSaveVideoToAlbumFromDataItem(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_18;
  FUN_002774b0();
  _objc_retainAutoreleasedReturnValue();
  _WCRefineFinderSaveVideoToAlbumFromContentVM();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

