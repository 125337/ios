@interface QMCStyleLayerMerger : NSObject
+ (id)merge:(id)arg1 layer2:(id)arg2;
+ (id)mergeNormalStateWithFinalBase:(id)arg1 preprocessedNormalState:(id)arg2 itemNormal:(id)arg3;
+ (id)mergeSelectedStateWithFinalBase:(id)arg1 preprocessedSelectedState:(id)arg2 itemSelected:(id)arg3;
+ (id)mergeToLightDark:(id)arg1;
+ (id)mergeShallow:(id)arg1 override:(id)arg2;
+ (id)mergeJsonDataToTheme:(id)arg1 jsonDataObj:(id)arg2;
+ (id)mergeBaseToTarget:(id)arg1 target:(id)arg2;
+ (id)mergeThemeObject:(id)arg1 target:(id)arg2;
@end
