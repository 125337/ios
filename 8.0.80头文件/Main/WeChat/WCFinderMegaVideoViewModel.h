@interface WCFinderMegaVideoViewModel : NSObject <ForwardMessageLogicDelegate, MMScrollActionSheetDelegate, WCCommitViewResultDelegate>
{
    UIViewController<WCFinderMegaVideoViewModelDelegate> * _context; // +0x8
    ForwardMessageLogicController * _shareLogic; // +0x10
    NSMutableDictionary * _playerCache; // +0x18
}
- (id)initWithContext:(id)arg1;
- (void)dealloc;
- (id)likeToggle:(id)arg1;
- (id)favToggle:(id)arg1 sourceType:(int)arg2;
- (id)megaVideoForId:(unsigned long long)arg1;
- (id)deleteVideoById:(id)arg1 nonceId:(id)arg2 videoId:(id)arg3;
- (void)changePlayRate;
- (BOOL)isAuthorView;
- (void)showToast:(id)arg1;
- (int)commentScene;
- (id)interactCountString:(unsigned long long)arg1;
- (void)routeToAuthorByVideo:(id)arg1;
- (void)reportVideo:(id)arg1;
- (void)onMore:(id)arg1;
- (id)actionSheetItemFor:(id)arg1;
- (void)showShareFailForPrivate:(id)arg1;
- (void)shareVideo:(id)arg1;
- (void)shareToFriend:(id)arg1 type:(unsigned long long)arg2;
- (void)shareToMoment:(id)arg1 type:(unsigned long long)arg2;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)stashPlayer:(id)arg1 forUrl:(id)arg2;
- (id)unstashPlayerForUrl:(id)arg1;
- (id)stashedPlayerForUrl:(id)arg1;
- (void)removeAllStashedPlayer;
- (id)context;
- (void)setContext:(id)arg1;
- (id)shareLogic;
- (void)setShareLogic:(id)arg1;
- (id)playerCache;
- (void)setPlayerCache:(id)arg1;
- (void).cxx_destruct;
@end
