@interface MMAnimatedImageDecodeConfig : NSObject
{
    BOOL _isSupportAPNG; // +0x8
    BOOL _shouldShowWxamMark; // +0x9
    unsigned int _maxWidth; // +0xc
    NSString * _cpKey; // +0x10
}
+ (id)defaultConfigWithMaxWidthLimit;
+ (id)defaultConfigWithoutMaxWidthLimit;
+ (void)updateMaxWidth:(unsigned int)arg1;
- (id)init;
- (void)ignoreMaxWidthLimit;
- (void)setMaxWidth:(unsigned int)arg1;
- (BOOL)isSupportAPNG;
- (void)setIsSupportAPNG:(BOOL)arg1;
- (id)cpKey;
- (void)setCpKey:(id)arg1;
- (unsigned int)maxWidth;
- (BOOL)shouldShowWxamMark;
- (void)setShouldShowWxamMark:(BOOL)arg1;
- (void).cxx_destruct;
@end
