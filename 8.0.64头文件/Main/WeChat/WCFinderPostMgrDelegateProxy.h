@interface WCFinderPostMgrDelegateProxy : NSProxy <WCFinderPostMgrDelegate>
{
    NSObject<WCFinderPostMgrDelegate> * _originDelegate; // +0x8
    NSObject<WCFinderPostMgrDelegate> * _forwardDelegate; // +0x10
}
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)onPostActionFinish;
- (id)originDelegate;
- (void)setOriginDelegate:(id)arg1;
- (id)forwardDelegate;
- (void)setForwardDelegate:(id)arg1;
- (void).cxx_destruct;
@end
