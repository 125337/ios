@interface WCFinderUserPageParams : NSObject <NSCopying>
{
    BOOL _needFansCount; // +0x8
    BOOL _requestFansCount; // +0x9
    BOOL _isAuthor; // +0xa
    BOOL _fromNewTabList; // +0xb
    int _tabType; // +0xc
    int _sortType; // +0x10
    int _enterType; // +0x14
    int _commentScene; // +0x18
    float _longitude; // +0x1c
    float _latitude; // +0x20
    unsigned int _scene; // +0x24
    unsigned int _direction; // +0x28
    NSString * _username; // +0x30
    NSString * _bizUsername; // +0x38
    NSString * _pageMd5; // +0x40
    NSString * _refObjectId; // +0x48
    unsigned long long _maxTid; // +0x50
    NSData * _lastBuffer; // +0x58
    NSData * _upBuffer; // +0x60
    unsigned long long _reportScene; // +0x68
    unsigned long long _topicId; // +0x70
    unsigned long long _refLiveObjectId; // +0x78
    NSString * _liveNoticeId; // +0x80
    unsigned long long _fromCollectionID; // +0x88
    FinderUserPageReqPreload * _preloadBypass; // +0x90
    JsApiSourceInfo * _jsApiSourceInfo; // +0x98
    NSString * _preloadIgnoreTid; // +0xa0
    NSString * _openSDKAPPID; // +0xa8
    unsigned long long _cgiFlag; // +0xb0
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (id)pageMd5;
- (void)setPageMd5:(id)arg1;
- (id)refObjectId;
- (void)setRefObjectId:(id)arg1;
- (unsigned long long)maxTid;
- (void)setMaxTid:(unsigned long long)arg1;
- (BOOL)needFansCount;
- (void)setNeedFansCount:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)upBuffer;
- (void)setUpBuffer:(id)arg1;
- (unsigned long long)reportScene;
- (void)setReportScene:(unsigned long long)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (unsigned long long)topicId;
- (void)setTopicId:(unsigned long long)arg1;
- (int)sortType;
- (void)setSortType:(int)arg1;
- (int)enterType;
- (void)setEnterType:(int)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (float)longitude;
- (void)setLongitude:(float)arg1;
- (float)latitude;
- (void)setLatitude:(float)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned long long)refLiveObjectId;
- (void)setRefLiveObjectId:(unsigned long long)arg1;
- (id)liveNoticeId;
- (void)setLiveNoticeId:(id)arg1;
- (unsigned long long)fromCollectionID;
- (void)setFromCollectionID:(unsigned long long)arg1;
- (BOOL)requestFansCount;
- (void)setRequestFansCount:(BOOL)arg1;
- (BOOL)isAuthor;
- (void)setIsAuthor:(BOOL)arg1;
- (BOOL)fromNewTabList;
- (void)setFromNewTabList:(BOOL)arg1;
- (id)preloadBypass;
- (void)setPreloadBypass:(id)arg1;
- (id)jsApiSourceInfo;
- (void)setJsApiSourceInfo:(id)arg1;
- (id)preloadIgnoreTid;
- (void)setPreloadIgnoreTid:(id)arg1;
- (id)openSDKAPPID;
- (void)setOpenSDKAPPID:(id)arg1;
- (unsigned int)direction;
- (void)setDirection:(unsigned int)arg1;
- (unsigned long long)cgiFlag;
- (void)setCgiFlag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
