@interface WCAdFinderFollowLogic : WCAdvertiseOperationLogicBase <WCAdHalfScreenContainerViewDelegate>
{
    int _source; // +0x8
    id <WCAdFinderFollowLogicDelegate> _delegate; // +0x10
    WCAdFinderFollowInfo * _adFinderFollowInfo; // +0x18
    WCAdvertiseInfo * _adData; // +0x20
    NSString * _snsId; // +0x28
    NSString * _btnTitle; // +0x30
    NSString * _friendFollowCountFormat; // +0x38
    NSString * _feedCountFormat; // +0x40
    WCAdHalfScreenContainerBaseView * _halfScreenView; // +0x48
}
- (id)initWithFinderFollowInfo:(id)arg1 adData:(id)arg2 snsId:(id)arg3 btnTitle:(id)arg4 source:(int)arg5;
- (void)start;
- (void)checkFollowingState;
- (BOOL)isFollowing;
- (void)checkFollowingStateFromLocal;
- (void)checkFollowingStateFromServer;
- (id)genTipsContent;
- (BOOL)isFinderFollowing:(id)arg1;
- (void)onConfirmButtonClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)adFinderFollowInfo;
- (void)setAdFinderFollowInfo:(id)arg1;
- (id)adData;
- (void)setAdData:(id)arg1;
- (id)snsId;
- (void)setSnsId:(id)arg1;
- (id)btnTitle;
- (void)setBtnTitle:(id)arg1;
- (int)source;
- (void)setSource:(int)arg1;
- (id)friendFollowCountFormat;
- (void)setFriendFollowCountFormat:(id)arg1;
- (id)feedCountFormat;
- (void)setFeedCountFormat:(id)arg1;
- (id)halfScreenView;
- (void)setHalfScreenView:(id)arg1;
- (void).cxx_destruct;
@end
