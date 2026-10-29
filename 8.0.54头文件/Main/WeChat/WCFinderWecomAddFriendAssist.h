@interface WCFinderWecomAddFriendAssist : NSObject <PBMessageObserverDelegate>
{
    MMUIViewController * _vc; // +0x8
    WCFinderOpenIMInfo * _info; // +0x10
    NSString * _failTip; // +0x18
}
+ (id)openOpenImContactInfo:(id)arg1 openIMInfo:(id)arg2 storeByVC:(id)arg3 failTip:(id)arg4;
+ (id)openOpenImContactInfo:(id)arg1 storeByVC:(id)arg2 failTip:(id)arg3;
+ (id)openOpenImContactInfo:(id)arg1 storeByVC:(id)arg2;
- (void)startSearchCGI:(id)arg1 openIMInfo:(id)arg2;
- (void)handleSearchOpenIMContactResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onContactSearchLogicDone:(id)arg1 FromScene:(unsigned int)arg2;
- (void)onContactSearchLogicFail:(id)arg1;
- (void)removeFromDisposeBag;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)failTip;
- (void)setFailTip:(id)arg1;
- (void).cxx_destruct;
@end

