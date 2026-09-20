// _WCRNameplateViewIsProtected @ 010d5f74

byte _WCRNameplateViewIsProtected(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar1;
  local_30 = 0;
  do {
    if (local_28 == 0 || 7 < local_30) {
      local_11 = 0;
LAB_010d608c:
      _objc_storeStrong(&local_28);
      _objc_storeStrong(&local_20,0);
      return local_11 & 1;
    }
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
    _WCRNameplateOwnsTag();
    if ((uVar1 & 1) != 0) {
      local_11 = 1;
      goto LAB_010d608c;
    }
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_28 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_30 = local_30 + 1;
  } while( true );
}

