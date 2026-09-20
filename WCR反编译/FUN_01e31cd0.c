// FUN_01e31cd0 @ 01e31cd0

/* WARNING: Type propagation algorithm not settling */

void FUN_01e31cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30 [3];
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_30[1] = 0;
  local_30[2] = param_2;
  _objc_storeStrong(local_30 + 1,param_3);
  local_30[0] = -1;
  local_38 = 0xffffffffffffffff;
  FUN_01e37c4c(local_30[2],&cf_wcr_sf_catalog_add_,local_30,&local_38);
  local_40 = 0;
  local_50 = 0;
  lVar1 = local_30[0];
  FUN_01e38038(local_30[0],local_38,&local_50);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_40,local_50);
  local_48 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_addCatalogItem_appName__026c63a8,lVar1,local_40);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(local_30 + 1,0);
  _objc_storeStrong(&local_18,0);
  return;
}

