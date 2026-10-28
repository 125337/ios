@interface WCFinderPersonalCenterCameraActionHandle : NSObject <WCFinderPostMgrDelegate, WCFinderPersonalCenterCameraActionHandle>
{
    NSString * _refObjectId; // +0x8
    NSString * _username; // +0x10
    WCFinderPostMgrParamsModel * _postParams; // +0x18
    WCFinderPostMgr * _postMgr; // +0x20
}
- (id)initWithCommentScene:(int)arg1 postEnterScene:(unsigned long long)arg2 username:(id)arg3;
- (void)onPostActionViewClickCamera:(id)arg1;
- (void)onPostActionFinish;
- (id)refObjectId;
- (void)setRefObjectId:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)postParams;
- (void)setPostParams:(id)arg1;
- (id)postMgr;
- (void)setPostMgr:(id)arg1;
- (void).cxx_destruct;
@end
