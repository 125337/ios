@interface MMFinderLiveAudioRoomConnectMicView : MMPageSheetBaseView
{
    BOOL _isLocationAuthorized; // +0x8
    id /* block */ _onClickedConnectMic; // +0x10
    id /* block */ _dismissBlock; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    MMUIImageView * _callImageView; // +0x28
    MMUILabel * _callLabel; // +0x30
    RichTextView * _showLocationView; // +0x38
    MMUILabel * _showLocationLabel; // +0x40
    UIButton * _connectMicBtn; // +0x48
}
- (id)initWithTaskId:(id)arg1 isLocationAuthorized:(BOOL)arg2;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)setupUI;
- (void)layoutUI;
- (void)showWithAnimated:(BOOL)arg1;
- (void)dealloc;
- (id)liveTask;
- (id)locationWording;
- (void)setIsLocationAuthorized:(BOOL)arg1;
- (id)audienceLogReporter;
- (void)onClickedBtn;
- (void)onClickedShowLocation;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id /* block */)onClickedConnectMic;
- (void)setOnClickedConnectMic:(id /* block */)arg1;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isLocationAuthorized;
- (id)callImageView;
- (void)setCallImageView:(id)arg1;
- (id)callLabel;
- (void)setCallLabel:(id)arg1;
- (id)showLocationView;
- (void)setShowLocationView:(id)arg1;
- (id)showLocationLabel;
- (void)setShowLocationLabel:(id)arg1;
- (id)connectMicBtn;
- (void)setConnectMicBtn:(id)arg1;
- (void).cxx_destruct;
@end

