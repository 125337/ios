@interface MMFinderEncodeHelper : NSObject
+ (BOOL)isIFrame:(opaqueCMSampleBuffer *)arg1;
+ (id)encodedDataFromSampleBuffer:(opaqueCMSampleBuffer *)arg1 isIFrame:(BOOL)arg2 isAnnexB:(BOOL)arg3 isHevc:(BOOL)arg4;
+ (id)parameterSetDataFromSampleBuffer:(opaqueCMSampleBuffer *)arg1 isAnnexB:(BOOL)arg2 isHevc:(BOOL)arg3;
@end

