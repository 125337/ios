@interface MMFinderLiveFansGroupJoinSuperfanPanel : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate>
{
    id /* block */ _onJoinSuperfanCallback; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    MMLiveHalfScreenTitleBarView * _titleBarView; // +0x18
    MMUIButton * _introductionButton; // +0x20
    UIView * _contentView; // +0x28
    UILabel * _titleLabel; // +0x30
    UILabel * _priceDescLabel; // +0x38
    UILabel * _rightsDetailLabel; // +0x40
    UIImageView * _wecoinImageView; // +0x48
    UIView * _lineView; // +0x50
    MMUIButton * _joinButton; // +0x58
    unsigned long long _openScene; // +0x60
}
- (id)initWithTaskId:(id)arg1 openScene:(unsigned long long)arg2;
- (void)setupPageSheetConfig;
- (void)initUI;
- (void)layoutSubviews;
- (double)contentWidth;
- (double)contentHeight;
- (void)pageSheetWillAppear;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)onIntroductionButtonClicked;
- (void)onJoinButtonClicked;
- (void)gotoDetailPage;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (id)liveTask;
- (void)reportPanelExpose;
- (void)reportJoinButtonClick;
- (id)audienceLogReporter;
- (id /* block */)onJoinSuperfanCallback;
- (void)setOnJoinSuperfanCallback:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)titleBarView;
- (void)setTitleBarView:(id)arg1;
- (id)introductionButton;
- (void)setIntroductionButton:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)priceDescLabel;
- (void)setPriceDescLabel:(id)arg1;
- (id)rightsDetailLabel;
- (void)setRightsDetailLabel:(id)arg1;
- (id)wecoinImageView;
- (void)setWecoinImageView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)joinButton;
- (void)setJoinButton:(id)arg1;
- (unsigned long long)openScene;
- (void)setOpenScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
