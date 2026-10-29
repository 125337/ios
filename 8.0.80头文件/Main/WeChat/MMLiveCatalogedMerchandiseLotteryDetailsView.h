@interface MMLiveCatalogedMerchandiseLotteryDetailsView : UIView <ILinkEventExt, MMLiveMulticastTimerSubscriber, MMFinderLiveFansGroupInfoExt>
{
    MMLiveCatalogedMerchandiseLotteryInfo * _lotteryInfo; // +0x8
    MMLiveMulticastTimerToken * _timerToken; // +0x10
    id <MMLiveCatalogedMerchandiseLotteryDetailsViewDelegate> _delegate; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    UIView * _containerView; // +0x28
    UIImageView * _backgroundImageView; // +0x30
    UILabel * _titleLabel; // +0x38
    UIView * _questDetailsContainerView; // +0x40
    UIImageView * _thumbnailView; // +0x48
    UIView * _detailsIndicatorView; // +0x50
    UILabel * _detailsIndicatorLabel; // +0x58
    UILabel * _nameLabel; // +0x60
    UILabel * _statusLabel; // +0x68
    UILabel * _countdownLabel; // +0x70
    UIButton * _primaryButton; // +0x78
    UILabel * _participatedLabel; // +0x80
    RichTextView * _disclaimerLabel; // +0x88
    UIView * _drawingDetailsContainerView; // +0x90
    UILabel * _drawingLiveRoomLabel; // +0x98
    UILabel * _drawingLabel; // +0xa0
    UIView * _drawingDetailsView; // +0xa8
    UILabel * _drawingDetailsLabel; // +0xb0
    UIImageView * _drawingDetailsRightChevronView; // +0xb8
}
- (id)initWithFrame:(CGRect)arg1 taskId:(id)arg2;
- (id)initWithTaskId:(id)arg1;
- (void)setLotteryInfo:(id)arg1;
- (void)setTimerToken:(id)arg1;
- (void)layoutSubviews;
- (void)onMerchandiseDetailsTapped;
- (void)onPrimaryButtonTapped;
- (void)onUnparticipatedDrawingDetailsButtonTapped;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onTimerWithToken:(id)arg1 tickedAtNominalTime:(struct)arg2;
- (void)onFansGroupStateChanged:(unsigned long long)arg1;
- (void)initializeComponents;
- (void)updateWithLotteryInfo:(id)arg1 serverTime:(unsigned long long)arg2 lotteryReplaced:(BOOL)arg3;
- (id)countdownStringWithTimeRemaining:(unsigned long long)arg1;
- (id)countdownTemplateForCurrentQuest;
- (BOOL)isFollowingAnchor;
- (id)liveTask;
- (id)lotteryInfo;
- (id)timerToken;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)questDetailsContainerView;
- (void)setQuestDetailsContainerView:(id)arg1;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)detailsIndicatorView;
- (void)setDetailsIndicatorView:(id)arg1;
- (id)detailsIndicatorLabel;
- (void)setDetailsIndicatorLabel:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg1;
- (id)countdownLabel;
- (void)setCountdownLabel:(id)arg1;
- (id)primaryButton;
- (void)setPrimaryButton:(id)arg1;
- (id)participatedLabel;
- (void)setParticipatedLabel:(id)arg1;
- (id)disclaimerLabel;
- (void)setDisclaimerLabel:(id)arg1;
- (id)drawingDetailsContainerView;
- (void)setDrawingDetailsContainerView:(id)arg1;
- (id)drawingLiveRoomLabel;
- (void)setDrawingLiveRoomLabel:(id)arg1;
- (id)drawingLabel;
- (void)setDrawingLabel:(id)arg1;
- (id)drawingDetailsView;
- (void)setDrawingDetailsView:(id)arg1;
- (id)drawingDetailsLabel;
- (void)setDrawingDetailsLabel:(id)arg1;
- (id)drawingDetailsRightChevronView;
- (void)setDrawingDetailsRightChevronView:(id)arg1;
- (void).cxx_destruct;
@end
