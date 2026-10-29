@interface CameraScanCodesMarkDotInfo : NSObject
{
    unsigned int _codeVersion; // +0x8
    NSData * _codeRawData; // +0x10
    NSString * _codeDecodedString; // +0x18
    NSString * _codeCharSet; // +0x20
    NSString * _codeTypeName; // +0x28
    unsigned long long _index; // +0x30
    unsigned long long _yunyingType; // +0x38
    UIImage * _oriImage; // +0x40
    __CVBuffer * _imageBuffer; // +0x48
    NSRecursiveLock * _lock; // +0x50
    CGPoint _center; // +0x58
    CGRect _rect; // +0x68
}
+ (id)copy:(id)arg1 newCenter:(CGPoint)arg2;
- (id)init;
- (void)setImageBuffer:(__CVBuffer *)arg1;
- (void)releaseImageBuffer;
- (void)dealloc;
- (id)codeRawData;
- (void)setCodeRawData:(id)arg1;
- (id)codeDecodedString;
- (void)setCodeDecodedString:(id)arg1;
- (id)codeCharSet;
- (void)setCodeCharSet:(id)arg1;
- (id)codeTypeName;
- (void)setCodeTypeName:(id)arg1;
- (unsigned int)codeVersion;
- (void)setCodeVersion:(unsigned int)arg1;
- (CGPoint)center;
- (void)setCenter:(CGPoint)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (unsigned long long)yunyingType;
- (void)setYunyingType:(unsigned long long)arg1;
- (id)oriImage;
- (void)setOriImage:(id)arg1;
- (__CVBuffer *)imageBuffer;
- (CGRect)rect;
- (void)setRect:(CGRect)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
