@interface WCFinderLiveStreamRequestModel : NSObject
{
    int _fromScene; // +0x8
    int _commentScene; // +0xc
    NSData * _lastBuffer; // +0x10
    double _longitude; // +0x18
    double _latitude; // +0x20
    FinderClientStatus * _clientStatus; // +0x28
    FinderLiveClientStatus * _liveClientStatus; // +0x30
    unsigned long long _pullType; // +0x38
    NSMutableArray * _readStats; // +0x40
    NSMutableArray * _markUnreadList; // +0x48
    NSString * _fromSceneStr; // +0x50
    FinderLbsTabTipsInfo * _tabTipsInfo; // +0x58
    NSString * _byPass; // +0x60
    FinderLiveBeforeJoinLiveRoomStatus * _beforeJoinLiveStatus; // +0x68
    unsigned long long _containerId; // +0x70
    unsigned long long _relatedObjectId; // +0x78
    NSMutableArray * _containerContext; // +0x80
    WCFinderLiveTabInfo * _liveTabInfo; // +0x88
    unsigned long long _cacheDurationInSeconds; // +0x90
    WCFinderRedDotCtrlInfo * _ctrlInfo; // +0x98
}
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
- (id)fromSceneStr;
- (void)setFromSceneStr:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)tabTipsInfo;
- (void)setTabTipsInfo:(id)arg1;
- (id)byPass;
- (void)setByPass:(id)arg1;
- (id)beforeJoinLiveStatus;
- (void)setBeforeJoinLiveStatus:(id)arg1;
- (unsigned long long)containerId;
- (void)setContainerId:(unsigned long long)arg1;
- (unsigned long long)relatedObjectId;
- (void)setRelatedObjectId:(unsigned long long)arg1;
- (id)containerContext;
- (void)setContainerContext:(id)arg1;
- (id)liveTabInfo;
- (void)setLiveTabInfo:(id)arg1;
- (unsigned long long)cacheDurationInSeconds;
- (void)setCacheDurationInSeconds:(unsigned long long)arg1;
- (id)ctrlInfo;
- (void)setCtrlInfo:(id)arg1;
- (void).cxx_destruct;
@end

