@interface WCFinderLiveGetLiveInfoParams : NSObject
{
    int _scene; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
    unsigned long long _liveID; // +0x18
    NSString * _finderUsername; // +0x20
    FinderGetLiveInfoReq_LiveADBypassInfo * _liveADByPassInfo; // +0x28
    FinderGetLiveInfoReq_FinderGetLiveInfoSceneNotificationInfo * _notificationInfo; // +0x30
}
+ (id)paramsWithDataItem:(id)arg1;
+ (id)paramsWithLiveID:(unsigned long long)arg1 finderUsername:(id)arg2;
- (void)setDataItem:(id)arg1;
- (id)dataItem;
- (unsigned long long)liveID;
- (void)setLiveID:(unsigned long long)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)liveADByPassInfo;
- (void)setLiveADByPassInfo:(id)arg1;
- (id)notificationInfo;
- (void)setNotificationInfo:(id)arg1;
- (void).cxx_destruct;
@end
