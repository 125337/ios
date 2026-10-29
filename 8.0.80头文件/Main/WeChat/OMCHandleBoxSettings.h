@interface OMCHandleBoxSettings : NSObject
{
    XMSHandleBoxSettings _backingSettings; // +0x8
}
- (id)initWithBackingSettings:(const void *)arg1;
- (id)normalizedHandleBoxSettingsWithSize:(CGSize)arg1;
- (id)denormalizedHandleBoxSettingsWithSize:(CGSize)arg1;
- (BOOL)isVisible;
- (CGPoint)position;
- (CGPoint)center;
- (CGVector)scale;
- (double)rotation;
- (CGSize)contentSize;
- (UIEdgeInsets)edgeInsets;
- (unsigned int)enabledButtonIDBits;
- (BOOL)isNormalized;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
