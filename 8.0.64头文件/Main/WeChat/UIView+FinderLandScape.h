@interface UIView (FinderLandScape)
+ (id)finderviewTableStateKey;
+ (id)finderViewLandScapeStateKey;
+ (id)finderViewPortialStateKey;
- (id)viewTable;
- (BOOL)isHiddenInLandScape;
- (void)setIsHiddenInLandScape:(BOOL)arg1;
- (BOOL)isHiddenInPortrait;
- (void)setIsHiddenInPortrait:(BOOL)arg1;
- (void)configView:(id)arg1 landScapeStateIsHidden:(BOOL)arg2;
- (void)updateConfigViewHiddenState:(BOOL)arg1;
- (void)setToLandScape;
- (void)restoreToPortraitState;
@end
