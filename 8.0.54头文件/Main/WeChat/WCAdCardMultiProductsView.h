@interface WCAdCardMultiProductsView : WCAdCardMultiProductsBaseView <WCAdCardMultiProductsScreenDelegate>
{
    WCDataItem * _dataItem; // +0x20
    unsigned long long _currentScreenIndex; // +0x28
    WCAdCardMultiProductsScreenOneView * _screenOneView; // +0x30
    WCAdCardMultiProductsScreenTwoView * _screenTwoView; // +0x38
    ColorGradientView * _topGradientView; // +0x40
    ColorGradientView * _bottomGradientView; // +0x48
    ColorGradientView * _rightGradientView; // +0x50
    WCAdCardMultiProductsDisplayLink * _positionDisplayLink; // +0x58
}
+ (double)getHeightForDataItem:(id)arg1 maxWidth:(double)arg2;
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2;
- (void)dealloc;
- (void)generateScreens;
- (void)resizeSubviewsWithSize:(CGSize)arg1;
- (id)screenOneView;
- (id)screenTwoView;
- (id)topGradientView;
- (id)bottomGradientView;
- (id)rightGradientView;
- (id)generateGradientView;
- (void)showVerticalGradientViews;
- (void)showRightGradientView;
- (void)hideRightGradientView;
- (void)switchMultiProductsScreenWithIndex:(unsigned long long)arg1;
- (void)switchMultiProductsScreenToOne;
- (void)switchMultiProductsScreenToTwo;
- (id)positionDisplayLink;
- (void)terminateAnimations;
- (void)onMultiProductsScreenViewSaveCurrentCenterWith:(id)arg1;
- (void)onMultiProductsScreenViewRestorePrevioisCenterWith:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)currentScreenIndex;
- (void)setCurrentScreenIndex:(unsigned long long)arg1;
- (void)setScreenOneView:(id)arg1;
- (void)setScreenTwoView:(id)arg1;
- (void)setTopGradientView:(id)arg1;
- (void)setBottomGradientView:(id)arg1;
- (void)setRightGradientView:(id)arg1;
- (void)setPositionDisplayLink:(id)arg1;
- (void).cxx_destruct;
@end

