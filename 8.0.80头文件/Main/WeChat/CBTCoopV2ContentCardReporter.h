@interface CBTCoopV2ContentCardReporter : NSObject
+ (void)reportExposureWithViewModel:(id)arg1 target:(id)arg2 commonParamsOverride:(id)arg3;
+ (void)reportClickWithViewModel:(id)arg1 target:(id)arg2 clickTarget:(id)arg3 commonParamsOverride:(id)arg4;
+ (void)reportEvent:(id)arg1 viewModel:(id)arg2 target:(id)arg3 clickTarget:(id)arg4 commonParamsOverride:(id)arg5;
@end
