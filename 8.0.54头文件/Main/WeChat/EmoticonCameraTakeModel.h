@interface EmoticonCameraTakeModel : NSObject
{
    BOOL _needCheck; // +0x8
    BOOL _needAsyncCamerFollowCheck; // +0x9
    BOOL _needAsyncUpload; // +0xa
    unsigned long long _scene; // +0x10
    CMessageWrap * _msgWrap; // +0x18
    NSString * _lensId; // +0x20
    NSString * _username; // +0x28
    MMUIViewController * _viewController; // +0x30
}
- (id)init;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (BOOL)needCheck;
- (void)setNeedCheck:(BOOL)arg1;
- (BOOL)needAsyncCamerFollowCheck;
- (void)setNeedAsyncCamerFollowCheck:(BOOL)arg1;
- (BOOL)needAsyncUpload;
- (void)setNeedAsyncUpload:(BOOL)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)lensId;
- (void)setLensId:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end

