@interface MMLiveKTVLeaveGuideView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, MMFinderLiveMgrExt, MMLiveTaskMgrExt>
{
    unsigned int _scene; // +0x8
    id /* block */ _ktvLeaveGuideBlock; // +0x10
    id /* block */ _ktvMinimizeLiveGuideBlock; // +0x18
    id /* block */ _ktvReturnGuideBlock; // +0x20
    MMFinderLiveTaskId * _taskId; // +0x28
    MMWebImageView * _micImageView; // +0x30
    MMUILabel * _titleLabel; // +0x38
    UIButton * _returnBtn; // +0x40
    UIButton * _leaveBtn; // +0x48
    MMUILabel * _minimizeLabel; // +0x50
}
- (id)initWithTaskId:(id)arg1 scene:(unsigned int)arg2;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)pageSheetDidRotation;
- (void)setupUI;
- (void)layoutUI;
- (void)showWithAnimated:(BOOL)arg1;
- (void)updateDetailViewHeight;
- (id)liveTask;
- (unsigned long long)reportStatus;
- (unsigned long long)reportScene;
- (void)onClickedLeave;
- (void)onClickedReturn;
- (void)onClickedMinimize;
- (void)onClearForExitLiveWithLiveTask:(id)arg1;
- (id /* block */)ktvLeaveGuideBlock;
- (void)setKtvLeaveGuideBlock:(id /* block */)arg1;
- (id /* block */)ktvMinimizeLiveGuideBlock;
- (void)setKtvMinimizeLiveGuideBlock:(id /* block */)arg1;
- (id /* block */)ktvReturnGuideBlock;
- (void)setKtvReturnGuideBlock:(id /* block */)arg1;
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

