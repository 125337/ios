@interface WCFinderCoverDataHelper : NSObject
+ (id)buildOpenCoverVCParamsFromPostSession:(id)arg1 style:(unsigned long long)arg2;
+ (void)fillCropInfoToMediaInfoByCropRectModel:(id)arg1 modeStyle:(int)arg2 sourceType:(int)arg3 coverImage:(id)arg4 fullCoverImage:(id)arg5 coverTimeStamp:(double)arg6 targetSize:(CGSize)arg7 editTextWidgets:(id)arg8 style:(unsigned long long)arg9 toPostSession:(id)arg10;
+ (id)getSavePathWithImage:(id)arg1 targetSize:(CGSize)arg2 chooseTime:(double)arg3;
@end

