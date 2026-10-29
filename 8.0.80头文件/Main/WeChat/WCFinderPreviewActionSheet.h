@interface WCFinderPreviewActionSheet : MMScrollActionSheet
{
    CGSize _blankSize; // +0x8
    CGSize _topMediaSize; // +0x18
}
- (BOOL)isIpadCase;
- (BOOL)useCornerCancelButton;
- (void)dismissAnimated:(BOOL)arg1;
- (void)relayoutElements:(BOOL)arg1 fixedWidth:(double)arg2 duration:(double)arg3;
- (void)_calculateContainerCenter:(CGPoint *)arg1 to:(CGPoint *)arg2 constraintWidth:(double)arg3 parentView:(id)arg4;
- (void)onSubSceneSizeChangedFrom:(CGSize)arg1 to:(CGSize)arg2;
- (CGPoint)calculateSheetCenter:(id)arg1;
- (void)relayoutContainerView;
- (CGSize)blankSize;
- (void)setBlankSize:(CGSize)arg1;
- (CGSize)topMediaSize;
- (void)setTopMediaSize:(CGSize)arg1;
@end
