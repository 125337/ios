@interface MMFinderLiveConnectMicTeamPkFooterActionView : UICollectionReusableView
{
    BOOL _isApplicant; // +0x8
    id /* block */ _pkBlock; // +0x10
    id /* block */ _quitMicBlock; // +0x18
    MMLiveIconButton * _pkButton; // +0x20
    UIButton * _closeMicButton; // +0x28
    UILabel * _waitPkStartLabel; // +0x30
    MMFinderLiveConnectMicPKInfo * _pkInfo; // +0x38
}
+ (id)cellIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)update:(id)arg1 isApplicant:(BOOL)arg2;
- (void)initViews;
- (void)layoutSubviews;
- (void)onPkAction;
- (void)onCloseMic;
- (id /* block */)pkBlock;
- (void)setPkBlock:(id /* block */)arg1;
- (id /* block */)quitMicBlock;
- (void)setQuitMicBlock:(id /* block */)arg1;
- (id)pkButton;
- (void)setPkButton:(id)arg1;
- (id)closeMicButton;
- (void)setCloseMicButton:(id)arg1;
- (id)waitPkStartLabel;
- (void)setWaitPkStartLabel:(id)arg1;
- (id)pkInfo;
- (void)setPkInfo:(id)arg1;
- (BOOL)isApplicant;
- (void)setIsApplicant:(BOOL)arg1;
- (void).cxx_destruct;
@end
