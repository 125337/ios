@interface EmoticonCustomCreatePreProcessConfig : NSObject
{
    unsigned long long _autoSizeCrop; // +0x8
    CGRect _cropFrame; // +0x10
}
- (id)init;
- (unsigned long long)autoSizeCrop;
- (void)setAutoSizeCrop:(unsigned long long)arg1;
- (CGRect)cropFrame;
- (void)setCropFrame:(CGRect)arg1;
@end

