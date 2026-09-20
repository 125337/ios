// FUN_009c43ac @ 009c43ac

byte FUN_009c43ac(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  byte local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_68;
  ulong local_58;
  ulong local_48;
  ulong local_28;
  long local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  uVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_providerID);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_90 = 0;
  if ((uVar7 & 1) != 0) {
    local_48 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_apiKey);
    _objc_retainAutoreleasedReturnValue();
    bVar5 = true;
    uVar7 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_90 = 0;
    if ((uVar7 & 1) != 0) {
      local_58 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_baseURL);
      _objc_retainAutoreleasedReturnValue();
      bVar4 = true;
      local_68 = local_58;
      FUN_009c3b08();
      _objc_retainAutoreleasedReturnValue();
      bVar3 = true;
      local_78 = *(undefined8 *)(param_1 + 0x30);
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_baseURL_026aade8);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_88 = local_78;
      FUN_009c3b08();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      uVar7 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8);
      local_90 = (byte)uVar7;
    }
  }
  local_11 = local_90 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if (bVar4) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if (bVar5) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(uVar6);
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

