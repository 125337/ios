@interface ImageTranslateDetectInfo : NSObject
{
    BOOL _isResultOK; // +0x8
    unsigned int _result; // +0xc
    unsigned int _targetRate; // +0x10
}
+ (id)genDetectInfoWithResultError;
- (BOOL)isResultOK;
- (void)setIsResultOK:(BOOL)arg1;
- (unsigned int)result;
- (void)setResult:(unsigned int)arg1;
- (unsigned int)targetRate;
- (void)setTargetRate:(unsigned int)arg1;
@end
