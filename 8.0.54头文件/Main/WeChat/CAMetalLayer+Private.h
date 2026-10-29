@interface CAMetalLayer (Private)
- (void)setWantsEDR:(BOOL)arg1;
- (id)createEDRMetadataWithMinLuminance:(float)arg1 maxLuminance:(float)arg2 opticalOutputScale:(float)arg3;
- (id)createHLGMetadata;
- (void)setEDR:(id)arg1;
@end

