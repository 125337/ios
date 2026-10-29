@interface EmoticonRecommendSectionConfig : NSObject
{
    BOOL _enableRecommendSection; // +0x8
    BOOL _useLocalModel; // +0x9
}
- (id)init;
- (BOOL)enableRecommendSection;
- (void)setEnableRecommendSection:(BOOL)arg1;
- (BOOL)useLocalModel;
- (void)setUseLocalModel:(BOOL)arg1;
@end
