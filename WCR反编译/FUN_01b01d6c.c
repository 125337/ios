// FUN_01b01d6c @ 01b01d6c

double FUN_01b01d6c(double param_1,undefined8 param_2)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_58;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_homeAvatarStripAvatarSize_026a23f0);
  dVar2 = param_1;
  FUN_01af4580(local_18);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_homeAvatarStripShowRemark_026a2438);
  dVar3 = 14.0;
  if ((uVar1 & 1) == 0) {
    dVar3 = 0.0;
  }
  dVar4 = dVar3;
  FUN_01b03aa4((uint)uVar1 & 1,local_18);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_homeAvatarStripShowUnread_026a2430);
  dVar5 = 4.0;
  if ((uVar1 & 1) == 0) {
    dVar5 = 2.0;
  }
  if (dVar3 <= 0.0) {
    local_58 = 0.0;
  }
  else {
    local_58 = dVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_homeAvatarStripNameSpacing_026a2400);
  }
  _objc_storeStrong(&local_18,0);
  return dVar5 + param_1 * dVar2 + local_58 + dVar3 + dVar4;
}

