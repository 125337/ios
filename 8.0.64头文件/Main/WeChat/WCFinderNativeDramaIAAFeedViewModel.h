@interface WCFinderNativeDramaIAAFeedViewModel : NSObject
{
    id <WCFinderNativeDramaIAAFeedViewModelDelegate> _delegate; // +0x8
    WCFinderFeedContentVM * _contentVM; // +0x10
    unsigned long long _promotionState; // +0x18
    unsigned long long _unlockState; // +0x20
    WCFinderNativeDramaIAAFeedViewModelParams * _params; // +0x28
    WCFinderNativeDramaPromotionDataService * _nativeDramaDataService; // +0x30
    WCFinderNativeDramaIAAFeedEpisodeInfo * _currentEpisode; // +0x38
    NSMutableArray * _unlockEpisodes; // +0x40
    NSMutableArray * _lockEpisodes; // +0x48
    NSData * _IAALastBuffer; // +0x50
}
- (id)initWithParams:(id)arg1;
- (id)lastUnlockItem;
- (BOOL)haveNextUnLockItem;
- (void)setPromotionState:(unsigned long long)arg1;
- (void)setUnlockState:(unsigned long long)arg1;
- (id)adGatingInfo;
- (id)unlockToast;
- (void)loadNextUnlockItem;
- (void)prefetchPromotion;
- (void)unlockItem;
- (void)_updateFinderObjectWithEpisodeID:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (unsigned long long)promotionState;
- (unsigned long long)unlockState;
- (id)params;
- (void)setParams:(id)arg1;
- (id)nativeDramaDataService;
- (void)setNativeDramaDataService:(id)arg1;
- (id)currentEpisode;
- (void)setCurrentEpisode:(id)arg1;
- (id)unlockEpisodes;
- (void)setUnlockEpisodes:(id)arg1;
- (id)lockEpisodes;
- (void)setLockEpisodes:(id)arg1;
- (id)IAALastBuffer;
- (void)setIAALastBuffer:(id)arg1;
- (void).cxx_destruct;
@end
