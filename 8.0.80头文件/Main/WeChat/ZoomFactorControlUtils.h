@interface ZoomFactorControlUtils : NSObject
+ (BOOL)isZoomFactorControlFunctionEnabled;
+ (void)zoomFactorButtonAddCircleShadow:(id)arg1;
+ (void)updateZoomFactorButton:(id)arg1 text:(id)arg2 fontSize:(double)arg3 color:(id)arg4 kernValue:(double)arg5;
+ (void)updateZoomFactorButton:(id)arg1 text:(id)arg2 fontSize:(double)arg3 color:(id)arg4;
+ (void)switchViewA:(id)arg1 toViewB:(id)arg2 animated:(BOOL)arg3 beginBlock:(id /* block */)arg4 endBlock:(id /* block */)arg5 completion:(id /* block */)arg6;
+ (void)zoomFactorButtonRemoveCircleShadow:(id)arg1;
+ (id)zoomFactorDisplayInitialText:(double)arg1;
+ (id)zoomFactorDisplaySelectedText:(double)arg1;
+ (id)powerScaleValueOfShortLineNumbers;
+ (id)parseJsonConfig:(id)arg1;
+ (id)getZoomFactorsForDevice:(id)arg1 fromConfig:(id)arg2;
+ (double)maxZoomFactorDisplayValue;
+ (id)avaliableDisplayVideoZoomFactors;
@end
