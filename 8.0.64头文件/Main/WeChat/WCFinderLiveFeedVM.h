@interface WCFinderLiveFeedVM : NSObject
{
    BOOL _enterLiveRoom; // +0x8
    BOOL _hasEnteredLive; // +0x9
    NSString * _channelExtra; // +0x10
    unsigned long long _landScapeEnterType; // +0x18
    unsigned long long _landscapeStartTimeInMs; // +0x20
    WCFinderDataItem * _dataItem; // +0x28
    NSString * _sessionExtraKey; // +0x30
    MMFinderLiveFeedDataLogic * _feedDataLogic; // +0x38
}
- (id)initWithDataItem:(id)arg1 sessionExtraKey:(id)arg2;
- (id)toLiveContentVM;
- (id)liveInfo;
- (void)bindFeedDataLogic:(id)arg1;
- (void)reportClickRotateToPortrait;
- (void)reportLandscapeStart;
- (void)reportLandscapeEnd;
- (BOOL)enterLiveRoom;
- (void)setEnterLiveRoom:(BOOL)arg1;
- (id)channelExtra;
- (void)setChannelExtra:(id)arg1;
- (BOOL)hasEnteredLive;
- (void)setHasEnteredLive:(BOOL)arg1;
- (unsigned long long)landScapeEnterType;
- (void)setLandScapeEnterType:(unsigned long long)arg1;
- (unsigned long long)landscapeStartTimeInMs;
- (void)setLandscapeStartTimeInMs:(unsigned long long)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)sessionExtraKey;
- (void)setSessionExtraKey:(id)arg1;
- (id)feedDataLogic;
- (void)setFeedDataLogic:(id)arg1;
- (void).cxx_destruct;
@end
