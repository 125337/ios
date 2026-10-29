@interface WCFinderLiveFeedContentVM : WCFinderFeedContentVM
{
    NSString * _sortID; // +0x8
    FinderLiveStreamCard * _liveStreamCard; // +0x10
    FinderLiveRelatedExtInfo * _relatedExtInfo; // +0x18
    NSString * _objectWording; // +0x20
    NSArray * _cardFeedArray; // +0x28
    FinderBannerExtInfo * _bannerExtInfo; // +0x30
}
- (id)initWithLiveStreamCard:(id)arg1 scene:(int)arg2 dataScene:(id)arg3;
- (void)setupWithLiveCard:(id)arg1;
- (void)setupContentDatas:(id)arg1;
- (id)sortID;
- (void)setSortID:(id)arg1;
- (id)liveStreamCard;
- (void)setLiveStreamCard:(id)arg1;
- (id)relatedExtInfo;
- (void)setRelatedExtInfo:(id)arg1;
- (id)objectWording;
- (void)setObjectWording:(id)arg1;
- (id)cardFeedArray;
- (void)setCardFeedArray:(id)arg1;
- (id)bannerExtInfo;
- (void)setBannerExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

