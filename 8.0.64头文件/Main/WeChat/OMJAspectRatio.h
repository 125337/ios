@interface OMJAspectRatio : NSObject
{
    XMFAspectRatio _backingAspectRatio; // +0x8
}
+ (id)fromBackingAspectRatio:(const void *)arg1;
+ (id)fromType:(unsigned long long)arg1;
+ (id)fromWidth:(int)arg1 height:(int)arg2;
+ (id)loadFromData:(id)arg1;
- (id)initWithBackingAspectRatio:(const void *)arg1;
- (unsigned long long)aspectRatioType;
- (int)width;
- (int)height;
- (double)doubleValue;
- (BOOL)isValid;
- (id)toString;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)saveToData;
- (XMFAspectRatio)backingAspectRatio;
- (void)setBackingAspectRatio:(XMFAspectRatio)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
