@interface WCFinderLiveStreamElementModel : NSObject
{
    int _style; // +0x8
    unsigned long long _layoutId; // +0x10
    WCFinderDataItem * _dataItem; // +0x18
    NSString * _h5Url; // +0x20
    WCFinderLiveStreamNoticeCard * _noticeCard; // +0x28
    NSMutableArray * _relateLivingDataItems; // +0x30
    WCFinderLiveStreamJumpModel * _jumpModel; // +0x38
    FinderBannerExtInfo * _bannerExtInfo; // +0x40
    FinderLiveRelatedExtInfo * _relatedExtInfo; // +0x48
    NSString * _objectWording; // +0x50
    FinderAdExtInfo * _adExtInfo; // +0x58
    FinderLiveCardHighlightTag * _highlightTag; // +0x60
    WCFinderLiveAggregationCard * _aggregationCard; // +0x68
    WCFinderLiveThemeTag * _themeTag; // +0x70
    WCFinderLiveCardProductShowcase * _productShowcase; // +0x78
    FinderLiveStreamPlayTogetherInfo * _entertainmentInfo; // +0x80
    unsigned long long _subStyle; // +0x88
}
+ (id)finderLiveStreamElementModelFrom:(id)arg1;
- (unsigned long long)getExposeStartTs;
- (void)setExposeStartTs:(unsigned long long)arg1;
- (unsigned long long)getExposeValidRatioFirstStartTs;
- (void)setExposeValidRatioFirstStartTs:(unsigned long long)arg1;
- (unsigned long long)getExposeValidRatioStartTs;
- (void)setExposeValidRatioStartTs:(unsigned long long)arg1;
- (unsigned int)getExposeValidRatioTime;
- (void)setExposeValidRatioTime:(unsigned int)arg1;
- (unsigned long long)getAutoPlayStartTs;
- (void)setAutoPlayStartTs:(unsigned long long)arg1;
- (unsigned int)getAutoPlayTime;
- (void)setAutoPlayTime:(unsigned int)arg1;
- (void)resetExposeSession;
- (id)toFinderLiveStreamCard;
- (unsigned long long)layoutId;
- (void)setLayoutId:(unsigned long long)arg1;
- (int)style;
- (void)setStyle:(int)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)h5Url;
- (void)setH5Url:(id)arg1;
- (id)noticeCard;
- (void)setNoticeCard:(id)arg1;
- (id)relateLivingDataItems;
- (void)setRelateLivingDataItems:(id)arg1;
- (id)jumpModel;
- (void)setJumpModel:(id)arg1;
- (id)bannerExtInfo;
- (void)setBannerExtInfo:(id)arg1;
- (id)relatedExtInfo;
- (void)setRelatedExtInfo:(id)arg1;
- (id)objectWording;
- (void)setObjectWording:(id)arg1;
- (id)adExtInfo;
- (void)setAdExtInfo:(id)arg1;
- (id)highlightTag;
- (void)setHighlightTag:(id)arg1;
- (id)aggregationCard;
- (void)setAggregationCard:(id)arg1;
- (id)themeTag;
- (void)setThemeTag:(id)arg1;
- (id)productShowcase;
- (void)setProductShowcase:(id)arg1;
- (id)entertainmentInfo;
- (void)setEntertainmentInfo:(id)arg1;
- (unsigned long long)subStyle;
- (void)setSubStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

