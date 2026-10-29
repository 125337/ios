@interface LVMinimizeContext : NSObject
{
    BOOL _isPlayEndReported; // +0x8
    BOOL _isPlayFinished; // +0x9
    id <ILVMinimizeContextModel> _viewModel; // +0x10
    WCFinderSimplePlayerView * _playerView; // +0x18
    LVMinimizeReportInfo * _reportInfo; // +0x20
}
- (id)reportInfo;
- (id)feedId;
- (BOOL)isFlutterPlayer;
- (id)description;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (void)setReportInfo:(id)arg1;
- (BOOL)isPlayEndReported;
- (void)setIsPlayEndReported:(BOOL)arg1;
- (BOOL)isPlayFinished;
- (void)setIsPlayFinished:(BOOL)arg1;
- (void).cxx_destruct;
@end

