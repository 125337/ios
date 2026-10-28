@interface WCFinderMinimizePlayInfo : NSObject
{
    BOOL _allowPlay; // +0x8
    BOOL _mediaIsMute; // +0x9
    NSString * _forbidenPlayToast; // +0x10
    NSMutableDictionary * _extInfo; // +0x18
    UIView<WCFinderMinimizeContentViewProtocol> * _contentView; // +0x20
    UIView * _minimizeAnimatingView; // +0x28
    long long _infoState; // +0x30
    long long _infoPlayType; // +0x38
    WCFinderDataItem * _dataItem; // +0x40
    double _playProgress; // +0x48
    double _playbackTime; // +0x50
    WCFinderContextIdToken * _contextToken; // +0x58
}
- (id)extInfo;
- (id)description;
- (int)commentScene;
- (BOOL)allowPlay;
- (void)setAllowPlay:(BOOL)arg1;
- (id)forbidenPlayToast;
- (void)setForbidenPlayToast:(id)arg1;
- (void)setExtInfo:(id)arg1;
- (BOOL)mediaIsMute;
- (void)setMediaIsMute:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)minimizeAnimatingView;
- (void)setMinimizeAnimatingView:(id)arg1;
- (long long)infoState;
- (void)setInfoState:(long long)arg1;
- (long long)infoPlayType;
- (void)setInfoPlayType:(long long)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (double)playProgress;
- (void)setPlayProgress:(double)arg1;
- (double)playbackTime;
- (void)setPlaybackTime:(double)arg1;
- (id)contextToken;
- (void)setContextToken:(id)arg1;
- (void).cxx_destruct;
@end
