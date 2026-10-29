@interface WCFinderPostHelper : NSObject <WCFinderPostMgrDelegate>
{
    WCFinderPostMgr * _postMgr; // +0x8
    NSObject * _owner; // +0x10
    WCFinderPostMgrDelegateProxy * _vcDelegate; // +0x18
}
+ (void)showPostActionSheet:(id)arg1 params:(id)arg2;
- (void)onPostActionFinish;
- (void)onPostHandleBusinessActionPostVC:(id)arg1 postSession:(id)arg2;
- (id)postMgr;
- (void)setPostMgr:(id)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;
- (id)vcDelegate;
- (void)setVcDelegate:(id)arg1;
- (void).cxx_destruct;
@end

