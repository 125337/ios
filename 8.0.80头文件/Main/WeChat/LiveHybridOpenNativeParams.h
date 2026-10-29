@interface LiveHybridOpenNativeParams : NSObject
{
    long long _type; // +0x8
    LiveHybridOpenNativeProfile * _openProfile; // +0x10
    LiveHybridOpenNativeLiveRoom * _openLiveRoom; // +0x18
    LiveHybridOpenNativeVideo * _openVideo; // +0x20
    LiveHybridOpenNativeAllNotices * _openAllNotices; // +0x28
    LiveHybridOpenNativeReplay * _openReplay; // +0x30
    long long _commentScene; // +0x38
}
+ (id)makeWithType:(long long)arg1 openProfile:(id)arg2 openLiveRoom:(id)arg3 openVideo:(id)arg4 openAllNotices:(id)arg5 openReplay:(id)arg6 commentScene:(long long)arg7;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)openProfile;
- (void)setOpenProfile:(id)arg1;
- (id)openLiveRoom;
- (void)setOpenLiveRoom:(id)arg1;
- (id)openVideo;
- (void)setOpenVideo:(id)arg1;
- (id)openAllNotices;
- (void)setOpenAllNotices:(id)arg1;
- (id)openReplay;
- (void)setOpenReplay:(id)arg1;
- (long long)commentScene;
- (void)setCommentScene:(long long)arg1;
- (void).cxx_destruct;
@end
