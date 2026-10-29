@interface MMLiveReplaySubscriptionPageSheetView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    BOOL _isAnchor; // +0x8
    long long _subscribeState; // +0x10
    id /* block */ _subscriptionDidChangeBlock; // +0x18
    UIScrollView * _dialogView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _descLabel; // +0x30
    UIButton * _subscribeButton; // +0x38
    unsigned long long _objectId; // +0x40
    unsigned long long _liveId; // +0x48
    NSString * _finderUsername; // +0x50
    unsigned long long _subscribedCount; // +0x58
}
- (id)initWithObjectId:(unsigned long long)arg1 liveId:(unsigned long long)arg2 finderUsername:(id)arg3 subscribeState:(long long)arg4;
- (id)initWithObjectId:(unsigned long long)arg1 isAnchor:(BOOL)arg2 subscribedCount:(unsigned long long)arg3;
- (void)setupUI;
- (void)setupPageSheetConfig;
- (void)updateTitleLabel;
- (void)updateButtonTitle;
- (void)pageSheetDidRotation;
- (void)show;
- (void)refreshReplaySubscriptionStatus;
- (void)layoutContentView;
- (double)realHeight;
- (double)currentHeight;
- (void)onSubscribeButtonTapped;
- (long long)subscribeState;
- (void)setSubscribeState:(long long)arg1;
- (id /* block */)subscriptionDidChangeBlock;
- (void)setSubscriptionDidChangeBlock:(id /* block */)arg1;
- (id)dialogView;
- (void)setDialogView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)subscribeButton;
- (void)setSubscribeButton:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (BOOL)isAnchor;
- (void)setIsAnchor:(BOOL)arg1;
- (unsigned long long)subscribedCount;
- (void)setSubscribedCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
