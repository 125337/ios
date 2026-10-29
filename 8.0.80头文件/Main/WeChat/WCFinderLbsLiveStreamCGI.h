@interface WCFinderLbsLiveStreamCGI : WCFinderLiveBaseCgi
{
    int _fromScene; // +0x8
    int _commentScene; // +0xc
    id /* block */ _successful; // +0x10
    id /* block */ _failure; // +0x18
    NSData * _lastBuffer; // +0x20
    double _longitude; // +0x28
    double _latitude; // +0x30
    FinderClientStatus * _clientStatus; // +0x38
    FinderLiveClientStatus * _liveClientStatus; // +0x40
    unsigned long long _pullType; // +0x48
    NSMutableArray * _readStats; // +0x50
    NSMutableArray * _markUnreadList; // +0x58
    FinderLbsTabTipsInfo * _tabTipsInfo; // +0x60
    NSString * _byPass; // +0x68
    NSString * _jumpNavliveBufferEncode; // +0x70
    FinderLiveBeforeJoinLiveRoomStatus * _beforeJoinLiveStatus; // +0x78
    WCFinderLiveTabInfo * _liveTabInfo; // +0x80
    unsigned long long _relatedObjectId; // +0x88
    unsigned long long _cacheDurationInSeconds; // +0x90
}
+ (id)prefetchCacheHashKey:(int)arg1 tabId:(unsigned long long)arg2;
- (id)initWithLastBuffer:(id)arg1 longitude:(double)arg2 latitude:(double)arg3 clientStatus:(id)arg4 liveClientStatus:(id)arg5 pullType:(unsigned long long)arg6 readStats:(id)arg7 markUnreadList:(id)arg8 fromScene:(int)arg9 commentScene:(int)arg10 tabTipsInfo:(id)arg11 byPass:(id)arg12 beforeJoinLiveStatus:(id)arg13 relatedObjectId:(unsigned long long)arg14 liveTabInfo:(id)arg15 onlyFollowFeed:(BOOL)arg16 cacheDurationInSeconds:(unsigned long long)arg17 jumpNavliveBufferEncode:(id)arg18 successful:(id /* block */)arg19 failure:(id /* block */)arg20;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)reportPrefetch:(unsigned long long)arg1 request:(id)arg2;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (int)requestType;
- (id)cachedHashKey;
- (id)prefetchExtraData;
- (BOOL)isEqualWithRequest:(id)arg1 extraData:(id)arg2;
- (unsigned long long)cacheValidityPeriod:(id)arg1;
- (void)prefetchCacheWillBeDropped:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (id)clientStatus;
- (void)setClientStatus:(id)arg1;
- (id)liveClientStatus;
- (void)setLiveClientStatus:(id)arg1;
- (unsigned long long)pullType;
- (void)setPullType:(unsigned long long)arg1;
- (id)readStats;
- (void)setReadStats:(id)arg1;
- (id)markUnreadList;
- (void)setMarkUnreadList:(id)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)tabTipsInfo;
- (void)setTabTipsInfo:(id)arg1;
- (id)byPass;
- (void)setByPass:(id)arg1;
- (id)jumpNavliveBufferEncode;
- (void)setJumpNavliveBufferEncode:(id)arg1;
- (id)beforeJoinLiveStatus;
- (void)setBeforeJoinLiveStatus:(id)arg1;
- (id)liveTabInfo;
- (void)setLiveTabInfo:(id)arg1;
- (unsigned long long)relatedObjectId;
- (void)setRelatedObjectId:(unsigned long long)arg1;
- (unsigned long long)cacheDurationInSeconds;
- (void)setCacheDurationInSeconds:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
