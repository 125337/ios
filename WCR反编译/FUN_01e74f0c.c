// FUN_01e74f0c @ 01e74f0c

double FUN_01e74f0c(double param_1,undefined8 param_2)

{
  double local_58;
  double local_50;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toDoCardScale_026a8970);
  local_50 = param_1;
  if (param_1 < DAT_02323c68) {
    local_50 = DAT_02323c68;
  }
  if (3.0 <= local_50) {
    local_58 = 3.0;
  }
  else {
    local_58 = local_50;
  }
  _objc_storeStrong(&local_18,0);
  return local_58;
}

