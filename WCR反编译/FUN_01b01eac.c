// FUN_01b01eac @ 01b01eac

double FUN_01b01eac(double param_1,undefined8 param_2)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  double local_60;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_homeAvatarStripAvatarSize_026a23f0);
  dVar2 = param_1;
  FUN_01af4580(local_18);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_homeAvatarStripShowUnread_026a2430);
  dVar3 = 4.0;
  if ((uVar1 & 1) == 0) {
    dVar3 = 2.0;
  }
  local_60 = (param_1 * dVar2 - param_1) * 0.5;
  if (local_60 <= 0.0) {
    local_60 = 0.0;
  }
  _objc_storeStrong((uint)uVar1 & 1,&local_18,0);
  return dVar3 + local_60;
}

