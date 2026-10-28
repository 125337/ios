@interface MMFinderLiveShopVIPWidgetView : UIView
{
    BOOL _isWeakState; // +0x8
    PAGFile * _enterPAG; // +0x10
    PAGFile * _preWeakenPAG; // +0x18
    id /* block */ _onClicked; // +0x20
    PAGView * _pagView; // +0x28
    UIView * _shadowView; // +0x30
    UILabel * _textView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onTap;
- (void)willEnterContainer;
- (void)prepareToNormalState;
- (void)layoutSubviews;
- (void)willToNormalState;
- (id)enterPAG;
- (void)setEnterPAG:(id)arg1;
- (id)preWeakenPAG;
- (void)setPreWeakenPAG:(id)arg1;
- (id /* block */)onClicked;
- (void)setOnClicked:(id /* block */)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)shadowView;
- (void)setShadowView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (BOOL)isWeakState;
- (void)setIsWeakState:(BOOL)arg1;
- (void).cxx_destruct;
@end
