@interface MMLiveLeaveMicGuideView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, MMFinderLiveMgrExt, MMLiveTaskMgrExt>
{
    unsigned int _scene; // +0x8
    id /* block */ _leaveMicBlock; // +0x10
    id /* block */ _minimizeLiveBlock; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    MMWebImageView * _micImageView; // +0x28
    MMUILabel * _titleLabel; // +0x30
    UIButton * _returnBtn; // +0x38
    UIButton * _leaveBtn; // +0x40
    MMUILabel * _minimizeLabel; // +0x48
}
- (id)initWithTaskId:(id)arg1 scene:(unsigned int)arg2;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)pageSheetDidRotation;
- (void)setupUI;
- (void)layoutUI;
- (void)showWithAnimated:(BOOL)arg1;
- (void)updateDetailViewHeight;
- (unsigned long long)reportStyle;
- (id)liveTask;
- (unsigned long long)reportStatus;
- (unsigned long long)reportScene;
- (void)onClickedLeave;
- (void)onClickedReturn;
- (void)onClickedMinimize;
- (void)onClearForExitLiveWithLiveTask:(id)arg1;
- (id /* block */)leaveMicBlock;
- (void)setLeaveMicBlock:(id /* block */)arg1;
- (id /* block */)minimizeLiveBlock;
- (void)setMinimizeLiveBlock:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)micImageView;
- (void)setMicImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)returnBtn;
- (void)setReturnBtn:(id)arg1;
- (id)leaveBtn;
- (void)setLeaveBtn:(id)arg1;
- (id)minimizeLabel;
- (void)setMinimizeLabel:(id)arg1;
- (void).cxx_destruct;
@end
