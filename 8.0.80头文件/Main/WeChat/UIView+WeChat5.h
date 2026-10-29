@interface UIView (WeChat5)
- (BOOL)ls_recursionShowSkeletonEffectWithConf:(id)arg1;
- (BOOL)ls_recursionHideSkeletonEffect;
- (long long)ls_addSkeletonEffectWithConf:(id)arg1;
- (long long)ls_removeSkeletonEffect;
- (void)ls_aopLayoutLayer;
- (void)ls_unaopLayoutLayer;
- (void)ls_aopTraitCollectionChange;
- (void)ls_unaopTraitCollectionChange;
- (void)ls_recursionLayoutSkeletonLayer;
- (void)willSkeletonableChangeFrom:(BOOL)arg1 to:(BOOL)arg2;
- (void)didSkeletonableChangeFrom:(BOOL)arg1 to:(BOOL)arg2;
@end
