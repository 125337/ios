@interface WCFinderMyTabFinderCardView : UIView
{
    id <WCFinderMyTabFinderCardViewDelegate> _delegate; // +0x8
    WCFinderPersonalCenterContactView * _contactView; // +0x10
    UIView * _arrangeBottomLine; // +0x18
    WCFinderPersonalCenterPostActionView * _actionView; // +0x20
    UIView * _postSeparatorLine; // +0x28
    WCFinderMyTabFinderCardWordingView * _wordingView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)makeBottomLine;
- (id)makePostSeparatorLine;
- (id)makeWordingView;
- (void)_layoutElements;
- (void)layoutSubviews;
- (BOOL)update:(id)arg1 wording:(id)arg2 reportInfo:(id)arg3 showInfo:(id)arg4;
- (void)setCameraHandle:(id)arg1;
- (id)cameraHandle;
- (void)setLiveHandle:(id)arg1;
- (id)liveHandle;
- (void)onTapWordingView;
- (void)_onClickContact;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contactView;
- (void)setContactView:(id)arg1;
- (id)arrangeBottomLine;
- (void)setArrangeBottomLine:(id)arg1;
- (id)actionView;
- (void)setActionView:(id)arg1;
- (id)postSeparatorLine;
- (void)setPostSeparatorLine:(id)arg1;
- (id)wordingView;
- (void)setWordingView:(id)arg1;
- (void).cxx_destruct;
@end
