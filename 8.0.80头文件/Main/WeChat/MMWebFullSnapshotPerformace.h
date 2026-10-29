@interface MMWebFullSnapshotPerformace : NSObject
{
    BOOL _isCompress; // +0x8
    BOOL _cropByLimitHeight; // +0x9
    unsigned int _freeMemInKB; // +0xc
    unsigned int _predictImageMemInKB; // +0x10
    unsigned int _realImageMemInKB; // +0x14
    double _scale; // +0x18
    unsigned long long _costTime; // +0x20
    CGSize _originContentSize; // +0x28
    CGSize _contentSize; // +0x38
    CGSize _imageSize; // +0x48
}
- (id)description;
- (unsigned int)freeMemInKB;
- (void)setFreeMemInKB:(unsigned int)arg1;
- (unsigned int)predictImageMemInKB;
- (void)setPredictImageMemInKB:(unsigned int)arg1;
- (unsigned int)realImageMemInKB;
- (void)setRealImageMemInKB:(unsigned int)arg1;
- (CGSize)originContentSize;
- (void)setOriginContentSize:(CGSize)arg1;
- (CGSize)contentSize;
- (void)setContentSize:(CGSize)arg1;
- (CGSize)imageSize;
- (void)setImageSize:(CGSize)arg1;
- (BOOL)isCompress;
- (void)setIsCompress:(BOOL)arg1;
- (BOOL)cropByLimitHeight;
- (void)setCropByLimitHeight:(BOOL)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
- (unsigned long long)costTime;
- (void)setCostTime:(unsigned long long)arg1;
@end
