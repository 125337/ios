@interface MJFaceRecognitionInfo : NSObject <PBCoding, NSCopying>
{
    unsigned long long _isEnable; // +0x8
    unsigned long long _minFaceFramePercent; // +0x10
    NSString * _captureBlockTipsWording; // +0x18
    NSString * _photoBlockTipsWording; // +0x20
}
+ (void)PBArrayAdd_isEnable;
+ (void)PBArrayAdd_minFaceFramePercent;
+ (void)PBArrayAdd_captureBlockTipsWording;
+ (void)PBArrayAdd_photoBlockTipsWording;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithFaceRecognitionInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (unsigned long long)isEnable;
- (void)setIsEnable:(unsigned long long)arg1;
- (unsigned long long)minFaceFramePercent;
- (void)setMinFaceFramePercent:(unsigned long long)arg1;
- (id)captureBlockTipsWording;
- (void)setCaptureBlockTipsWording:(id)arg1;
- (id)photoBlockTipsWording;
- (void)setPhotoBlockTipsWording:(id)arg1;
- (void).cxx_destruct;
@end
