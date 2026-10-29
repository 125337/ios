@interface WCFinderProfilePreloadParams : NSObject
{
    BOOL _showBizIdentifier; // +0x8
    int _reportScene; // +0xc
    int _enterType; // +0x10
    NSString * _username; // +0x18
    NSString * _bizUsername; // +0x20
    NSString * _feedTid; // +0x28
    FinderUserPageReqPreload * _preload; // +0x30
}
- (id)username;
- (void)setUsername:(id)arg1;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (BOOL)showBizIdentifier;
- (void)setShowBizIdentifier:(BOOL)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (id)feedTid;
- (void)setFeedTid:(id)arg1;
- (int)enterType;
- (void)setEnterType:(int)arg1;
- (id)preload;
- (void)setPreload:(id)arg1;
- (void).cxx_destruct;
@end
