@interface AHAPModel : NSObject
{
    long long _Version; // +0x8
    MetadataModel * _Metadata; // +0x10
    NSArray * _Pattern; // +0x18
}
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (long long)Version;
- (void)setVersion:(long long)arg1;
- (id)Metadata;
- (void)setMetadata:(id)arg1;
- (id)Pattern;
- (void)setPattern:(id)arg1;
- (void).cxx_destruct;
@end

