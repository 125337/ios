@interface MMLiveKTVMinimizeContentView : UIView <MMFinderLiveKTVUIExt, MMFinderLiveKTVStateExt, MMLiveTaskMgrExt>
{
    MMLiveTaskId * _taskId; // +0x8
    unsigned long long _scene; // +0x10
    long long _currState; // +0x18
    UIImageView * _musicIconView; // +0x20
    MMLiveKtvUserView * _singerUserView; // +0x28
    MMUILabel * _stateLabel; // +0x30
    NSString * _ktvThemeResourceFetchSessionToken; // +0x38
    CGSize _selfSize; // +0x40
}
- (id)initWithTaskId:(id)arg1 Scene:(unsigned long long)arg2;
- (void)initDefaultDatas;
- (void)registerExtensions;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)createMusicIconView;
- (void)updateMusicIconHidden;
- (void)createSingerUserView;
- (void)updateSingerUserHidden;
- (void)createStateLabel;
- (void)updateStateLabelOrigin;
- (void)updateStateLabelText;
- (void)checkSelfSizeChanged;
- (void)onSelfSizeChanged;
- (double)mainSingerWidgetSizeValue;
- (id)stateLabelFont;
- (double)stateLabelTopMargin;
- (double)standardWidth;
- (double)currContentScale;
- (id)liveTask;
- (id)ktvBox;
- (void)onLiveKTVMainWidgetColorUpdate:(id)arg1 taskId:(id)arg2;
- (void)onLiveTask:(id)arg1 micUsersInfoChanged:(id)arg2;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singStateChanged:(long long)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerContactUpdated:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerVoicingChanged:(BOOL)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerUserIdChanged:(id)arg3;
- (void)updateSingerUserView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (long long)currState;
- (void)setCurrState:(long long)arg1;
- (CGSize)selfSize;
- (void)setSelfSize:(CGSize)arg1;
- (id)musicIconView;
- (void)setMusicIconView:(id)arg1;
- (id)singerUserView;
- (void)setSingerUserView:(id)arg1;
- (id)stateLabel;
- (void)setStateLabel:(id)arg1;
- (id)ktvThemeResourceFetchSessionToken;
- (void)setKtvThemeResourceFetchSessionToken:(id)arg1;
- (void).cxx_destruct;
@end
