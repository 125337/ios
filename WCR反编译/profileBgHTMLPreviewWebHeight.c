// profileBgHTMLPreviewWebHeight @ 01cd3f78

/* Function Stack Size: 0x10 bytes */

double WCRefineProfileCardBeautifyViewController::profileBgHTMLPreviewWebHeight
                 (ID param_1,SEL param_2)

{
  double in_d2;
  double local_a8;
  double local_a0;
  double local_98;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_98 = in_d2;
  if (in_d2 < 220.0) {
    local_98 = 220.0;
  }
  local_a0 = local_98 - 32.0;
  if (local_a0 < 1.0) {
    local_a0 = 1.0;
  }
  _WCRefineProfileBgHTMLResolvedHeight();
  local_a8 = local_a0;
  if (local_a0 <= 1.0) {
    local_a8 = 211.0;
  }
  return local_a8;
}

