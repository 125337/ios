@interface MMNexusPageMetadata : NSObject
{
    BOOL _preloadable; // +0x8
    BOOL _doNotDecrypt; // +0x9
    NSString * _pageId; // +0x10
    NSString * _udrResourceName; // +0x18
    double _defaultHeightRatio; // +0x20
    NSArray * _allowedEvents; // +0x28
    NSString * _displayName; // +0x30
}
+ (id)metadataWithPageId:(id)arg1;
- (id)pageId;
- (void)setPageId:(id)arg1;
- (id)udrResourceName;
- (void)setUdrResourceName:(id)arg1;
- (double)defaultHeightRatio;
- (void)setDefaultHeightRatio:(double)arg1;
- (BOOL)preloadable;
- (void)setPreloadable:(BOOL)arg1;
- (id)allowedEvents;
- (void)setAllowedEvents:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (BOOL)doNotDecrypt;
- (void)setDoNotDecrypt:(BOOL)arg1;
- (void).cxx_destruct;
@end
