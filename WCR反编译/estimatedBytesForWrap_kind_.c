// estimatedBytesForWrap:kind: @ 00eafd5c

/* Function Stack Size: 0x20 bytes */

unsigned_long_long
WCRefineAutoDownloadQuotaHelper::estimatedBytesForWrap_kind_
          (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID IVar1;
  ulong local_78;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_78 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_localFileBytesForWrap_kind__0269da00,local_30,param_4);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_metadataBytesForWrap_kind__0269da08,local_30,param_4);
  if ((param_4 & 3) == 0) {
    local_18 = IVar1;
    if (local_78 != 0) {
      local_18 = local_78;
    }
  }
  else {
    if (local_78 < IVar1) {
      local_78 = IVar1;
    }
    local_18 = local_78;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

