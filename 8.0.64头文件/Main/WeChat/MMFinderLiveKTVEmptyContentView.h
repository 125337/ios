@interface MMFinderLiveKTVEmptyContentView : MMFinderLiveKTVBaseView <MMFinderLiveKTVUIExt, MMFinderLiveKTVLogicExt>
{
    id /* block */ _clickActionBlock; // +0x8
    MMUILabel * _titleLabel; // +0x10
    UIImageView * _iconView; // +0x18
    MMUIButton * _actionButton; // +0x20
    NSString * _ktvThemeResourceFetchSessionToken; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateActionButtonText:(BOOL)arg1;
- (void)onLiveTask:(id)arg1 audienceConnectingMicStatusChanged:(BOOL)arg2;
- (void)onLiveKTVModeChanged:(BOOL)arg1 taskId:(id)arg2;
- (id)liveTask;
- (void)onActionButtonClicked;
- (void)onLiveKTVMainWidgetColorUpdate:(id)arg1 taskId:(id)arg2;
- (id /* block */)clickActionBlock;
- (void)setClickActionBlock:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)ktvThemeResourceFetchSessionToken;
- (void)setKtvThemeResourceFetchSessionToken:(id)arg1;
- (void).cxx_destruct;
@end
