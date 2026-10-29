@interface MMMusicVideoTransitionModel : MMObject
{
    NSString * _transitionEffectId; // +0x8
    NSString * _transitionName; // +0x10
    NSString * _transitionPreviewPath; // +0x18
    NSString * _transitionPagPath; // +0x20
}
- (id)description;
- (BOOL)isValid;
- (unsigned long long)toMVStatTransitionForReport;
- (id)transitionEffectId;
- (void)setTransitionEffectId:(id)arg1;
- (id)transitionName;
- (void)setTransitionName:(id)arg1;
- (id)transitionPreviewPath;
- (void)setTransitionPreviewPath:(id)arg1;
- (id)transitionPagPath;
- (void)setTransitionPagPath:(id)arg1;
- (void).cxx_destruct;
@end

