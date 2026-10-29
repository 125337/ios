@interface MMLiveRewardQuotaSheetView : MMPageSheetBaseView <UIGestureRecognizerDelegate, ILinkEventExt>
{
    BOOL _wecoinBalanceUpdated; // +0x8
    BOOL _needFaceVerify; // +0x9
    id <MMLiveRewardQuotaSheetViewDelegate> _operationDelegate; // +0x10
    NSString * _consumeQuotaVerifyUrl; // +0x18
    NSString * _secverifyId; // +0x20
    MMFinderLiveRewardGiftItem * _giftItem; // +0x28
    FinderLiveRewardGiftExtInfo * _rewardExtInfo; // +0x30
    long long _currentBalance; // +0x38
    unsigned long long _rewardQuota; // +0x40
    unsigned long long _sourceSendMoreBubbleHost; // +0x48
    id /* block */ _confirmedCallback; // +0x50
    UIView * _contentView; // +0x58
    UILabel * _titleLabel; // +0x60
    MMUILabel * _descLabel; // +0x68
    RichTextView * _settingGuideLabel; // +0x70
    UIVisualEffectView * _visualEfView; // +0x78
    MMUIButton * _actionButton; // +0x80
    MMUIButton * _cancelButton; // +0x88
    MMFinderLiveTaskId * _taskId; // +0x90
}
- (id)initWithTaskId:(id)arg1 rewardQuota:(unsigned long long)arg2 giftItem:(id)arg3 rewardExtInfo:(id)arg4 currentBalance:(long long)arg5 wecoinBalanceUpdated:(BOOL)arg6 needFaceVerify:(BOOL)arg7 consumeQuotaVerifyUrl:(id)arg8 secverifyId:(id)arg9 sourceSendMoreBubbleHost:(unsigned long long)arg10 confirmedCallback:(id /* block */)arg11;
- (void)dealloc;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)hidePageSheet;
- (void)showPageSheet;
- (void)showWithAnimated:(BOOL)arg1;
- (id)title;
- (id)desc;
- (id)settingGuide;
- (id)actionButtonText;
- (id)cancelButtonText;
- (BOOL)faceVerify;
- (id)liveTask;
- (void)onActionButtonClicked;
- (void)onClickCancelButton:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)audienceLogReporter;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)consumeQuotaVerifyUrl;
- (void)setConsumeQuotaVerifyUrl:(id)arg1;
- (id)secverifyId;
- (void)setSecverifyId:(id)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (id)rewardExtInfo;
- (void)setRewardExtInfo:(id)arg1;
- (long long)currentBalance;
- (void)setCurrentBalance:(long long)arg1;
- (BOOL)wecoinBalanceUpdated;
- (void)setWecoinBalanceUpdated:(BOOL)arg1;
- (unsigned long long)rewardQuota;
- (void)setRewardQuota:(unsigned long long)arg1;
- (unsigned long long)sourceSendMoreBubbleHost;
- (void)setSourceSendMoreBubbleHost:(unsigned long long)arg1;
- (id /* block */)confirmedCallback;
- (void)setConfirmedCallback:(id /* block */)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)settingGuideLabel;
- (void)setSettingGuideLabel:(id)arg1;
- (id)visualEfView;
- (void)setVisualEfView:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)needFaceVerify;
- (void)setNeedFaceVerify:(BOOL)arg1;
- (void).cxx_destruct;
@end

