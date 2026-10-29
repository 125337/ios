@interface EditImageXiaoWeiEntryController : NSObject
{
    id <EditImageXiaoWeiEntryControllerDelegate> _delegate; // +0x8
    MMUIButton * _xiaoWeiBtn; // +0x10
    UIView * _bottomGradientView; // +0x18
    double _entryButtonMaxWidth; // +0x20
    UIView * _xiaoWeiBtnBgView; // +0x28
    UIView * _xiaoWeiBtnHighlightView; // +0x30
    UIView * _xiaoWeiLogoView; // +0x38
    UILabel * _xiaoWeiMainLabel; // +0x40
    CAGradientLayer * _bottomGradientLayer; // +0x48
    CAGradientLayer * _bottomGradientLayerTall; // +0x50
    UIView * _toolBarSeparatorLine; // +0x58
}
- (void)installSeparatorInBottomBar:(id)arg1 gradientInView:(id)arg2;
- (void)installGradientInView:(id)arg1 aboveScrollView:(id)arg2;
- (void)createEntryButtonIfNeeded;
- (void)attachEntryButtonToBottomBar:(id)arg1;
- (CGRect)entryButtonFrameInWindow;
- (void)onXiaoWeiBtnTouchDown:(id)arg1;
- (void)onXiaoWeiBtnTouchUp:(id)arg1;
- (void)setXiaoWeiBtnHighlighted:(BOOL)arg1;
- (void)onXiaoWeiButtonClicked:(id)arg1;
- (void)layoutEntryButtonWithToolbarAreaHeight:(double)arg1 actionBarAreaHeight:(double)arg2;
- (void)layoutSeparatorAtY:(double)arg1 width:(double)arg2 hidden:(BOOL)arg3;
- (void)layoutGradientWithHostSize:(CGSize)arg1 barHeight:(double)arg2 attrBarHeight:(double)arg3 toolBarOccupied:(BOOL)arg4;
- (void)hideBottomGradient;
- (void)setToolbarFadeAlpha:(double)arg1;
- (void)prepareBottomGradientForToolbarFade;
- (void)teardown;
- (void)applyXiaoWeiLabelLineHeight;
- (id)xiaoWeiAttributedText:(id)arg1 font:(id)arg2 color:(id)arg3 lineHeightMultiple:(double)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)xiaoWeiBtn;
- (void)setXiaoWeiBtn:(id)arg1;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg1;
- (double)entryButtonMaxWidth;
- (void)setEntryButtonMaxWidth:(double)arg1;
- (id)xiaoWeiBtnBgView;
- (void)setXiaoWeiBtnBgView:(id)arg1;
- (id)xiaoWeiBtnHighlightView;
- (void)setXiaoWeiBtnHighlightView:(id)arg1;
- (id)xiaoWeiLogoView;
- (void)setXiaoWeiLogoView:(id)arg1;
- (id)xiaoWeiMainLabel;
- (void)setXiaoWeiMainLabel:(id)arg1;
- (id)bottomGradientLayer;
- (void)setBottomGradientLayer:(id)arg1;
- (id)bottomGradientLayerTall;
- (void)setBottomGradientLayerTall:(id)arg1;
- (id)toolBarSeparatorLine;
- (void)setToolBarSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end
