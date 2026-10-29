@interface WCFinderNativeDramaFeedViewModel : NSObject <WCFinderNativeDramaListDataProviderDelegate, WCFinderFeedListViewDataSource>
{
    int _sourceCommentScene; // +0x8
    NSString * _sourceContentTid; // +0x10
    NSDictionary * _sourceReportInfo; // +0x18
    id <WCFinderNativeDramaFeedViewModelDelegate> _delegate; // +0x20
    unsigned long long _enterEpisodeID; // +0x28
    WCFinderNativeDramaFeedJSParams * _jsParams; // +0x30
    FinderNativeDramaSessionInfo * _nativeDramaSessionInfo; // +0x38
    WCFinderNativeDramaPromotionDataProvider * _promotionDataProvider; // +0x40
    NSMutableSet * _viewedPromotions; // +0x48
    WCFinderFeedContentVM * _destinationEpisode; // +0x50
    double _currentPlayRate; // +0x58
    unsigned long long _destinationEpisodeID; // +0x60
    WCFinderNativeDramaListDataProvider * _dramaDataProvider; // +0x68
    WCFinderNativeDramaFeedStream * _stream; // +0x70
    NSString * _sourceObjectSessionBuffer; // +0x78
}
- (id)initWithParams:(id)arg1;
- (void)_setupDramaDataProviderWithInfo:(id)arg1 nativeDramaSessionInfo:(id)arg2;
- (int)commentScene;
- (BOOL)isDramaFeed:(id)arg1;
- (id)completionReminderInfoForContentVM:(id)arg1;
- (id)interestGuideBubbleInfoForContentVM:(id)arg1;
- (BOOL)isNextFeedAdAfterContentVM:(id)arg1;
- (BOOL)hasMoreInDirection:(unsigned long long)arg1;
- (void)fetchWithDirection:(unsigned long long)arg1;
- (void)fetchWithDramaID:(unsigned long long)arg1 episodesID:(unsigned long long)arg2;
- (void)clearAllDrama;
- (BOOL)containsDramaWithIdentifier:(unsigned long long)arg1;
- (void)updateWithDramaInfo:(id)arg1 targetEpisodeID:(unsigned long long)arg2;
- (void)fetchPromotionIfNeed:(id)arg1 shouldInsert:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)adGatingInfoForContentVM:(id)arg1;
- (id)adGatingForContentVM:(id)arg1;
- (id)promotionIdentifierForContentVM:(id)arg1;
- (id)bottomPromotion;
- (BOOL)shouldDisabledFeedInteractive:(long long)arg1;
- (long long)indexForEpisodeID:(unsigned long long)arg1;
- (id)contentVMForEpisodeID:(id)arg1;
- (id)contentVMForIndex:(long long)arg1;
- (void)changeFocusIndex:(long long)arg1 tid:(id)arg2;
- (void)_updateFeedWithDiff:(id)arg1;
- (id)enterJumpModeFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)exitJumpMode;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (void)dataProvider:(id)arg1 didFetchDrama:(unsigned long long)arg2 contentVMs:(id)arg3 targetEpisodeID:(unsigned long long)arg4 direction:(unsigned long long)arg5;
- (void)dataProvider:(id)arg1 didFetchDrama:(unsigned long long)arg2 cacheContentVM:(id)arg3;
- (void)dataProviderDidGetError:(id)arg1;
- (id)playingInfo;
- (id)feed;
- (unsigned long long)state;
- (void)setDestinationEpisode:(id)arg1;
- (void)setCurrentPlayRate:(double)arg1;
- (id)sourceContentTid;
- (void)setSourceContentTid:(id)arg1;
- (int)sourceCommentScene;
- (void)setSourceCommentScene:(int)arg1;
- (id)sourceReportInfo;
- (void)setSourceReportInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)enterEpisodeID;
- (void)setEnterEpisodeID:(unsigned long long)arg1;
- (id)jsParams;
- (void)setJsParams:(id)arg1;
- (id)nativeDramaSessionInfo;
- (void)setNativeDramaSessionInfo:(id)arg1;
- (id)promotionDataProvider;
- (void)setPromotionDataProvider:(id)arg1;
- (id)viewedPromotions;
- (void)setViewedPromotions:(id)arg1;
- (id)destinationEpisode;
- (double)currentPlayRate;
- (unsigned long long)destinationEpisodeID;
- (void)setDestinationEpisodeID:(unsigned long long)arg1;
- (id)dramaDataProvider;
- (void)setDramaDataProvider:(id)arg1;
- (id)stream;
- (void)setStream:(id)arg1;
- (id)sourceObjectSessionBuffer;
- (void)setSourceObjectSessionBuffer:(id)arg1;
- (void).cxx_destruct;
@end
