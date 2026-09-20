// FUN_001462cc @ 001462cc

undefined8 FUN_001462cc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_2;
  _objc_storeStrong(&local_38);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
  dVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
  if (dVar1 <= param_1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
    dVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
    if (param_1 <= dVar2) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
      dVar3 = dVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
      if (dVar1 <= dVar2) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
        if (dVar1 <= dVar3) {
          local_28 = 0;
        }
        else {
          local_28 = 1;
        }
      }
      else {
        local_28 = 0xffffffffffffffff;
      }
    }
    else {
      local_28 = 1;
    }
  }
  else {
    local_28 = 0xffffffffffffffff;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return local_28;
}

