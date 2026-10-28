@interface MMFinderLiveMemberTipsFullScreenView : MMFinderLiveForbidJoinLiveFullScreenView
{
    BOOL _isShow; // +0x8
    BOOL _isAppear; // +0x9
    unsigned int _requestActionSeq; // +0xc
    id /* block */ _confirmCallback; // +0x10
    unsigned long long _memberShipPayCoinNum; // +0x18
    UIView * _parentView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 liveTask:(id)arg2;
- (id)getConfirmButtonText;
- (id)getConfirmtButtonImg;
- (void)onConfirm;
- (void)showInView:(id)arg1;
- (void)dismiss;
- (void)updateConfirmButtonTitleAndImage;
- (void)onConfirmButtonClicked;
- (id)tipsLabelText;
- (void)checkIsMemberShipWithAnchor;
- (void)notifyAppear;
- (void)notifyDisappear;
- (void)setMemberShipPayCoinNum:(unsigned long long)arg1;
- (id /* block */)confirmCallback;
- (void)setConfirmCallback:(id /* block */)arg1;
- (unsigned long long)memberShipPayCoinNum;
- (BOOL)isShow;
- (void)setIsShow:(BOOL)arg1;
- (id)parentView;
- (void)setParentView:(id)arg1;
- (BOOL)isAppear;
- (void)setIsAppear:(BOOL)arg1;
- (unsigned int)requestActionSeq;
- (void)setRequestActionSeq:(unsigned int)arg1;
- (void).cxx_destruct;
@end
