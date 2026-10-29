@interface MMFinderLiveReplayPreviewResolutionRecordInfo : NSObject
{
    double _timeOffset; // +0x8
    CGSize _resolutionSize; // +0x10
    CGRect _contentFrame; // +0x20
    CGRect _contentNormalizeFrame; // +0x40
}
+ (id)createResolutionRecordWithTimeOffset:(double)arg1 resolutionSize:(CGSize)arg2 contentFrame:(CGRect)arg3;
+ (id)createResolutionRecordWithResolutionNode:(id)arg1 resolutionSize:(CGSize)arg2;
+ (BOOL)isSizeValid:(CGSize)arg1;
+ (CGRect)getContentFrameWithResolutionSize:(CGSize)arg1 contentNormalizeFrame:(CGRect)arg2;
+ (BOOL)isSize:(CGSize)arg1 whPercentSimilarTo:(CGSize)arg2;
- (BOOL)initResolutionSize:(CGSize)arg1;
- (BOOL)isValid;
- (void)createContentNormalizeFrame;
- (double)timeOffset;
- (void)setTimeOffset:(double)arg1;
- (CGSize)resolutionSize;
- (void)setResolutionSize:(CGSize)arg1;
- (CGRect)contentFrame;
- (void)setContentFrame:(CGRect)arg1;
- (CGRect)contentNormalizeFrame;
- (void)setContentNormalizeFrame:(CGRect)arg1;
@end

