@interface WCFinderPersonalCenterCameraActionHandle : NSObject <WCFinderPostMgrDelegate, WCFinderPersonalCenterCameraActionHandle>
{
    BOOL _report19943; // +0x8
    NSString * _refObjectId; // +0x10
    NSString * _username; // +0x18
    WCFinderPostMgrParamsModel * _postParams; // +0x20
    WCFinderPostMgr * _postMgr; // +0x28
    UIViewController * _ownerVC; // +0x30
}
- (id)initWithCommentScene:(int)arg1 postEnterScene:(unsigned long long)arg2 username:(id)arg3;
- (void)onPostActionViewClickCamera:(id)arg1;
- (void)onPostActionFinish;
- (id)refObjectId;
- (void)setRefObjectId:(id)arg1;
- (BOOL)report19943;
- (void)setReport19943:(BOOL)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)postParams;
- (void)setPostParams:(id)arg1;
- (id)postMgr;
- (void)setPostMgr:(id)arg1;
- (id)ownerVC;
- (void)setOwnerVC:(id)arg1;
- (void).cxx_destruct;
@end
