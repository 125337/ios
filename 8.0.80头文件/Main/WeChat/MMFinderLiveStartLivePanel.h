@interface MMFinderLiveStartLivePanel : MMPageSheetBaseView
{
    BOOL _keepDataForDismiss; // +0x8
    UIView * _activeRenderTargetView; // +0x10
    MMLiveTaskId * _taskId; // +0x18
    id <MMFinderLiveStartLivePanelDelegate> _delegate; // +0x20
    WCFinderContact * _selfContact; // +0x28
    MMFinderLiveControlButtonItem * _cameraItem; // +0x30
    MMFinderLiveControlButtonItem * _beautyItem; // +0x38
    MMWebImageView * _anchorCoverImageView; // +0x40
    UIView * _videoCoverView; // +0x48
    WCFinderHeadImageView * _avatorImageView; // +0x50
    RichTextView * _nicknameTV; // +0x58
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x60
    MMFinderLiveControlButtonCell * _beautyCell; // +0x68
    MMFinderLiveControlButtonCell * _cameraCell; // +0x70
    UIView * _backgroundView; // +0x78
    UILabel * _titleLabel; // +0x80
    UILabel * _descLabel; // +0x88
    UIButton * _leaveBtn; // +0x90
    UIButton * _startBtn; // +0x98
}
- (id)initWithTaskId:(id)arg1 activeRenderTargetView:(id)arg2 delegate:(id)arg3;
- (void)setupPageSheetConfig;
- (void)updateFinderContact;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutVideoCoverView;
- (void)showWithAnimated:(BOOL)arg1;
- (id)cameraItem;
- (id)beautyItem;
- (void)updateCells;
- (id)backgroundView;
- (id)anchorCoverImageView;
- (id)titleLabel;
- (id)descLabel;
- (id)leaveBtn;
- (id)startBtn;
- (id)videoCoverView;
- (id)avatorImageView;
- (id)nicknameTV;
- (id)beautyCell;
- (id)cameraCell;
- (id)liveTask;
- (void)onClickedLeave;
- (void)onClickedStart;
- (void)onClickBeauty;
- (void)onClickCamera;
- (void)pageSheetDidDismiss;
- (id)activeRenderTargetView;
- (void)setActiveRenderTargetView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selfContact;
- (void)setSelfContact:(id)arg1;
- (void)setCameraItem:(id)arg1;
- (void)setBeautyItem:(id)arg1;
- (void)setAnchorCoverImageView:(id)arg1;
- (void)setVideoCoverView:(id)arg1;
- (void)setAvatorImageView:(id)arg1;
- (void)setNicknameTV:(id)arg1;
- (id)authInfoIconView;
- (void)setAuthInfoIconView:(id)arg1;
- (void)setBeautyCell:(id)arg1;
- (void)setCameraCell:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setLeaveBtn:(id)arg1;
- (void)setStartBtn:(id)arg1;
- (BOOL)keepDataForDismiss;
- (void)setKeepDataForDismiss:(BOOL)arg1;
- (void).cxx_destruct;
@end
