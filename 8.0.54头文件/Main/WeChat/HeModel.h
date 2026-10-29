@interface HeModel : NSObject
{
    HeMetadataModel * _Metadata; // +0x8
    NSArray * _Pattern; // +0x10
}
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (id)Metadata;
- (void)setMetadata:(id)arg1;
- (id)Pattern;
- (void)setPattern:(id)arg1;
- (void).cxx_destruct;
@end

