@interface MVVideoTransitionResourceConfigModel : MMObject
{
    BOOL _isShowInPanel; // +0x8
    NSString * _transitionId; // +0x10
    MVVideoTransitionResourceConfigModelName * _transitionName; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (id)transitionId;
- (void)setTransitionId:(id)arg1;
- (id)transitionName;
- (void)setTransitionName:(id)arg1;
- (BOOL)isShowInPanel;
- (void)setIsShowInPanel:(BOOL)arg1;
- (void).cxx_destruct;
@end

