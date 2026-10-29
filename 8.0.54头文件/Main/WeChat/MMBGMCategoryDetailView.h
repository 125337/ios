@interface MMBGMCategoryDetailView : MMUIView <MMBGMSelectedTabManagerDelegate>
{
    id <MMBGMCategoryDetailViewDelegate> _delegate; // +0x8
    MMBGMSelectedTabManager * _tabMgr; // +0x10
    MMBGMCategoryDetailTabViewModel * _viewModel; // +0x18
    MMBGMPanelPublishContext * _publishContext; // +0x20
    MMBGMSelectedConfig * _panelConfig; // +0x28
    MMUIButton * _closeButton; // +0x30
    UILabel * _titleLabel; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupDataReport;
- (id)genReportDict;
- (void)setup;
- (void)updateWithBGMCategory:(id)arg1;
- (id)currentSelectedMusicData;
- (void)onClickCloseButton:(id)arg1;
- (void)bgmSelectedTabManager:(id)arg1 didSelectedMusic:(id)arg2 atIndex:(unsigned long long)arg3 isTriggerByTap:(BOOL)arg4;
- (id)bgmSelectedTabManagerGetCurrentMusicData;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tabMgr;
- (void)setTabMgr:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)publishContext;
- (void)setPublishContext:(id)arg1;
- (id)panelConfig;
- (void)setPanelConfig:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

