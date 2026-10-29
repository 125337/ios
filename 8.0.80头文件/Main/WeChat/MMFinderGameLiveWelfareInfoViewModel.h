@interface MMFinderGameLiveWelfareInfoViewModel : NSObject
{
    BOOL _showView; // +0x8
    BOOL _needNoRelaunch; // +0x9
    unsigned long long _status; // +0x10
    id <MMFinderGameLiveWelfareInfoViewModelDelegate> _delegate; // +0x18
    NSArray * _welfareTaskList; // +0x20
    NSString * _gameWelfareWebImageURL; // +0x28
    NSString * _gameWelfareWebImageWording; // +0x30
    NSString * _gameWelfareReportExtInfo; // +0x38
    GameWelfareInfo * _welfareInfo; // +0x40
    unsigned long long _currentServerTs; // +0x48
}
- (id)initWithWelfareInfo:(id)arg1;
- (void)refreshStatus;
- (void)updateStatus:(id)arg1;
- (void)openGameLiveWelfareInfoDetailView;
- (void)preloadGameLiveWelfareInfoDetailView;
- (void)startGameLiveWelfareInfoTaskAnimation;
- (void)setWelfareInfo:(id)arg1;
- (id)gameWelfareId;
- (void)onAppTaskDidEnterBackground:(id)arg1 mode:(long long)arg2;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)welfareTaskList;
- (id)gameWelfareWebImageURL;
- (void)setGameWelfareWebImageURL:(id)arg1;
- (id)gameWelfareWebImageWording;
- (void)setGameWelfareWebImageWording:(id)arg1;
- (id)gameWelfareReportExtInfo;
- (void)setGameWelfareReportExtInfo:(id)arg1;
- (BOOL)isShowView;
- (void)setShowView:(BOOL)arg1;
- (id)welfareInfo;
- (unsigned long long)currentServerTs;
- (void)setCurrentServerTs:(unsigned long long)arg1;
- (BOOL)needNoRelaunch;
- (void)setNeedNoRelaunch:(BOOL)arg1;
- (void).cxx_destruct;
@end
