// FUN_017abfa0 @ 017abfa0

undefined1 *
FUN_017abfa0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint local_7c;
  undefined1 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  puVar2 = local_18;
  pcVar1 = DAT_028e4190;
  (*(code *)PTR__objc_retain_02578638)();
  (*pcVar1)(puVar2,local_20,local_28,local_30);
  local_7c = 0;
  local_38 = puVar2;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_7c = (uint)puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  if ((local_7c & 1) != 0) {
    puVar2 = local_38;
    FUN_017b772c(local_38,"_bIsScanFromAlbumImage");
    *puVar2 = 0;
  }
  puVar2 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return puVar2;
}

