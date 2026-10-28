@interface BrandMPVideoUtility : NSObject
+ (void)openBrandVideoPageWithOpenParam:(id)arg1 navigationController:(id)arg2 delegate:(id)arg3 eScene:(unsigned long long)arg4;
+ (void)openBrandVideoPageWithMsg:(id)arg1 navigationController:(id)arg2 delegate:(id)arg3 eScene:(unsigned long long)arg4 originRect:(CGRect)arg5 thumbImage:(id)arg6 preLoadThumbUrl:(id)arg7 videoInitialTime:(double)arg8;
+ (id)wcDataItemFromMsgWrap:(id)arg1 postSource:(unsigned int *)arg2;
+ (id)genVideoTempPathWithVid:(id)arg1;
+ (id)genVideoFormatPathWithVid:(id)arg1;
+ (BOOL)canShareTimeline;
@end
