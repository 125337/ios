@interface WCFinderNativeDramaIAAFeedViewControllerParams : NSObject
{
    int _previousCommentScene; // +0x8
    unsigned long long _dramaID; // +0x10
    NSArray * _lockEpisodes; // +0x18
    WCFinderNativeDramaPromotionDataService * _nativeDramaDataService; // +0x20
}
- (unsigned long long)dramaID;
- (void)setDramaID:(unsigned long long)arg1;
- (id)lockEpisodes;
- (void)setLockEpisodes:(id)arg1;
- (id)nativeDramaDataService;
- (void)setNativeDramaDataService:(id)arg1;
- (int)previousCommentScene;
- (void)setPreviousCommentScene:(int)arg1;
- (void).cxx_destruct;
@end
