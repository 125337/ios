@interface MMFinderLiveAudioRoomLocationGuideView : MMPageSheetBaseView
{
    id /* block */ _actionBlock; // +0x8
    id /* block */ _dismissBlock; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    MMUILabel * _titleLabel; // +0x20
    UIView * _squareView; // +0x28
    UIButton * _confirmBtn; // +0x30
    UIButton * _cancelBtn; // +0x38
    UIView * _anchorCircle; // +0x40
    MMUIImageView * _anchorImage; // +0x48
    UIView * _locationContainerView; // +0x50
    MMUIImageView * _locationIconView; // +0x58
    UILabel * _locationLabel; // +0x60
    NSMutableArray * _circles; // +0x68
}
- (id)initWithTaskId:(id)arg1;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)setupUI;
- (id)createCircleView:(BOOL)arg1;
- (void)layoutUI;
- (void)showWithAnimated:(BOOL)arg1;
- (void)dealloc;
- (id)liveTask;
- (void)onClickedConfirm;
- (void)onClickedCancel;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)squareView;
- (void)setSquareView:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (id)anchorCircle;
- (void)setAnchorCircle:(id)arg1;
- (id)anchorImage;
- (void)setAnchorImage:(id)arg1;
- (id)locationContainerView;
- (void)setLocationContainerView:(id)arg1;
- (id)locationIconView;
- (void)setLocationIconView:(id)arg1;
- (id)locationLabel;
- (void)setLocationLabel:(id)arg1;
- (id)circles;
- (void)setCircles:(id)arg1;
- (void).cxx_destruct;
@end
