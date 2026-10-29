@interface MMFinderLiveGiftWallIntroSheet : MMPageSheetBaseView <MMFinderLiveGiftResourceMgrExt>
{
    int _showSource; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    id <MMFinderLiveGiftWallIntroSheetDelegate> _delegate; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _detailLabel; // +0x28
    UIScrollView * _scrollContentView; // +0x30
    UIImageView * _introImageView; // +0x38
    MMUIButton * _cancelButton; // +0x40
    MMUIButton * _confirmButton; // +0x48
    UIView * _bottomBackgroundView; // +0x50
    UIView * _gradientBackgroundView; // +0x58
    CAGradientLayer * _gradientLayer; // +0x60
    MMFinderLiveRewardGiftItem * _giftItem; // +0x68
    MMWebImageView * _headImageView; // +0x70
    UIView * _topOneUserView; // +0x78
    CAGradientLayer * _topOneUserGradientLayer; // +0x80
    MMWebImageView * _giftImageView; // +0x88
}
+ (id)showWithTaskId:(id)arg1 gift:(id)arg2 delegate:(id)arg3;
- (id)initWithTaskId:(id)arg1 gift:(id)arg2 delegate:(id)arg3;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (double)contentHeight;
- (id)liveTask;
- (BOOL)userFinderStyle;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 resType:(long long)arg2 productId:(id)arg3 downloadUrl:(id)arg4;
- (id)currentContactHeadURL;
- (void)confirmAction;
- (void)cancelAction;
- (void)onClickGiftImageView;
- (id)titleLabel;
- (id)detailLabel;
- (id)introImageView;
- (id)scrollContentView;
- (id)confirmButton;
- (id)cancelButton;
- (id)giftImageView;
- (id)headImageView;
- (id)topOneUserView;
- (id)gradientBackgroundView;
- (id)bottomBackgroundView;
- (id)audienceLogReporter;
- (int)showSource;
- (void)setShowSource:(int)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setScrollContentView:(id)arg1;
- (void)setIntroImageView:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setBottomBackgroundView:(id)arg1;
- (void)setGradientBackgroundView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setTopOneUserView:(id)arg1;
- (id)topOneUserGradientLayer;
- (void)setTopOneUserGradientLayer:(id)arg1;
- (void)setGiftImageView:(id)arg1;
- (void).cxx_destruct;
@end
