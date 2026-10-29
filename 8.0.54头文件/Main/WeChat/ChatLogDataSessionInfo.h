@interface ChatLogDataSessionInfo : NSObject <PBCoding>
{
    ChatLogSessionItemInfo * _sessionItem; // +0x8
    long long _videoDirMTime; // +0x10
    long long _audioDirMTime; // +0x18
    long long _imageDirMTime; // +0x20
    long long _wxamDirMTime; // +0x28
    long long _vcodeDirMTime; // +0x30
    long long _appDirMTime; // +0x38
    long long _groupDirMTime; // +0x40
}
+ (void)PBArrayAdd_sessionItem;
+ (void)PBArrayAdd_videoDirMTime;
+ (void)PBArrayAdd_audioDirMTime;
+ (void)PBArrayAdd_imageDirMTime;
+ (void)PBArrayAdd_wxamDirMTime;
+ (void)PBArrayAdd_vcodeDirMTime;
+ (void)PBArrayAdd_appDirMTime;
+ (void)PBArrayAdd_groupDirMTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)sessionItem;
- (void)setSessionItem:(id)arg1;
- (long long)videoDirMTime;
- (void)setVideoDirMTime:(long long)arg1;
- (long long)audioDirMTime;
- (void)setAudioDirMTime:(long long)arg1;
- (long long)imageDirMTime;
- (void)setImageDirMTime:(long long)arg1;
- (long long)wxamDirMTime;
- (void)setWxamDirMTime:(long long)arg1;
- (long long)vcodeDirMTime;
- (void)setVcodeDirMTime:(long long)arg1;
- (long long)appDirMTime;
- (void)setAppDirMTime:(long long)arg1;
- (long long)groupDirMTime;
- (void)setGroupDirMTime:(long long)arg1;
- (void).cxx_destruct;
@end

