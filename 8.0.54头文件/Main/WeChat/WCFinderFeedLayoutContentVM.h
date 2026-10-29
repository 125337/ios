@interface WCFinderFeedLayoutContentVM : WCFinderFeedContentVM
{
    BOOL _continueFlag; // +0x8
    BOOL _isRefreshing; // +0x9
    BOOL _hasMoreColumns; // +0xa
    BOOL _waittingRefresh; // +0xb
    BOOL _preLoadRefresh; // +0xc
    NSString * _sortID; // +0x10
    id <WCFinderFeedLayoutContentVMDelegate> _delegate; // +0x18
    NSString * _titleWording; // +0x20
    NSString * _linkWording; // +0x28
    NSArray * _cardFeedArray; // +0x30
    NSData * _cardBuffer; // +0x38
    NSData * _lastBuffer; // +0x40
    unsigned long long _fetchScene; // +0x48
    NSString * _endWording; // +0x50
    NSString * _secondTitle; // +0x58
    unsigned long long _totalObjectCount; // +0x60
    FinderStreamCard * _streamCard; // +0x68
    FinderStreamTxtCard * _textCard; // +0x70
    unsigned long long _dividerType; // +0x78
    NSString * _iconUrl; // +0x80
    unsigned long long _exposeBeginTime; // +0x88
    NSMutableSet * _exposeTidSet; // +0x90
    NSString * _layoutID; // +0x98
}
+ (BOOL)validDivider:(id)arg1;
- (id)exposeTidSet;
- (id)initWithDivider:(id)arg1 scene:(int)arg2 dataScene:(id)arg3;
- (id)initWithStreamCard:(id)arg1 scene:(int)arg2 dataScene:(id)arg3;
- (id)initWithSnSLiveList:(int)arg1 dataScene:(id)arg2;
- (void)setupWithCard:(id)arg1;
- (void)setupContentDatas:(id)arg1;
- (id)initWithDataItem:(id)arg1 dataItemArray:(id)arg2 lastBuffer:(id)arg3 continueFlag:(BOOL)arg4 scene:(int)arg5 dataScene:(id)arg6 titleWording:(id)arg7;
- (id)contentTid;
- (id)sortID;
- (unsigned long long)mediaType;
- (unsigned long long)rowForContent;
- (BOOL)isLayoutFeed;
- (void)removeCardBufferAtIndex:(unsigned long long)arg1;
- (id)currentDisplayMediaInfo;
- (BOOL)isFeedContainVideo;
- (void)setIsRefreshing:(BOOL)arg1;
- (void)setSortID:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleWording;
- (void)setTitleWording:(id)arg1;
- (id)linkWording;
- (void)setLinkWording:(id)arg1;
- (id)cardFeedArray;
- (void)setCardFeedArray:(id)arg1;
- (id)cardBuffer;
- (void)setCardBuffer:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (unsigned long long)fetchScene;
- (void)setFetchScene:(unsigned long long)arg1;
- (id)endWording;
- (void)setEndWording:(id)arg1;
- (id)secondTitle;
- (void)setSecondTitle:(id)arg1;
- (BOOL)isRefreshing;
- (BOOL)hasMoreColumns;
- (void)setHasMoreColumns:(BOOL)arg1;
- (unsigned long long)totalObjectCount;
- (void)setTotalObjectCount:(unsigned long long)arg1;
- (id)streamCard;
- (void)setStreamCard:(id)arg1;
- (id)textCard;
- (void)setTextCard:(id)arg1;
- (unsigned long long)dividerType;
- (void)setDividerType:(unsigned long long)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (unsigned long long)exposeBeginTime;
- (void)setExposeBeginTime:(unsigned long long)arg1;
- (void)setExposeTidSet:(id)arg1;
- (id)layoutID;
- (void)setLayoutID:(id)arg1;
- (BOOL)waittingRefresh;
- (void)setWaittingRefresh:(BOOL)arg1;
- (BOOL)preLoadRefresh;
- (void)setPreLoadRefresh:(BOOL)arg1;
- (void).cxx_destruct;
@end

