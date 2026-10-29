@interface WCAdDynamicFeedElementAutoSizeInfo : NSObject <NSCoding>
{
    BOOL _enabled; // +0x8
    NSArray * _properties; // +0x10
    WCAdDynamicFeedElementValue * _minSize; // +0x18
    WCAdDynamicFeedElementValue * _sizeStep; // +0x20
    WCAdDynamicFeedElementValue * _maxSize; // +0x28
    WCAdDynamicFeedElementValue * _maxSizeiOS; // +0x30
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)modelCustomTransformFromDictionary:(id)arg1 forConfigTag:(id)arg2;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (id)properties;
- (void)setProperties:(id)arg1;
- (id)minSize;
- (void)setMinSize:(id)arg1;
- (id)sizeStep;
- (void)setSizeStep:(id)arg1;
- (id)maxSize;
- (void)setMaxSize:(id)arg1;
- (id)maxSizeiOS;
- (void)setMaxSizeiOS:(id)arg1;
- (void).cxx_destruct;
@end
