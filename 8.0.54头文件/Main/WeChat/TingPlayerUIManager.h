@interface TingPlayerUIManager : NSObject <TingFlowPlayerNotification>
{
    TingItem * _autoResumeFailItem; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)markAutoResumeFailItem:(id)arg1;
- (void)flowPlayer:(id)arg1 onPlayingItemReplaced:(id)arg2;
- (void)flowPlayer:(id)arg1 onItemLoaded:(id)arg2;
- (void)applicationDidBecomeActive;
- (id)autoResumeFailItem;
- (void)setAutoResumeFailItem:(id)arg1;
- (void).cxx_destruct;
@end

