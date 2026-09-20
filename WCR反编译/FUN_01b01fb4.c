// FUN_01b01fb4 @ 01b01fb4

double FUN_01b01fb4(double param_1,undefined8 param_2)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  ulong local_20;
  double local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_homeAvatarStripAvatarSize_026a23f0);
  dVar2 = param_1;
  FUN_01b01eac(local_20);
  dVar2 = dVar2 + param_1;
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_homeAvatarStripShowRemark_026a2438);
  local_18 = dVar2;
  if ((uVar1 & 1) != 0) {
    dVar3 = dVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_homeAvatarStripNameSpacing_026a2400);
    local_18 = dVar2 + dVar3 + 14.0;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

