@interface EditImageReport : NSObject
+ (void)EditImageReportClickBehavior:(unsigned int)arg1 fromScene:(unsigned int)arg2;
+ (void)EditImageReportSingleSendBehavior:(id)arg1 isOriginal:(unsigned int)arg2 fromScene:(unsigned int)arg3;
+ (void)EditImageReportOverallSendingEditedImage:(unsigned int)arg1 withAllImage:(unsigned int)arg2 fromScene:(unsigned int)arg3 toScene:(unsigned int)arg4;
+ (void)EditImageReportEmotionUsed:(id)arg1;
+ (void)EditImageReportLongPressSendNotEdit;
+ (void)EditImageReportVeryLongImageEdit;
+ (void)EditImageReportNilImageInLoadOriginalImage;
+ (void)EditImageReportExceedWaitTimeInRenderingImage;
+ (void)EditImageReportCannotReadColorPointMap;
+ (void)EditImageReportDonotHaveDelegateSelector;
+ (void)EditImageReportCannotFindColorInColorBar;
@end

