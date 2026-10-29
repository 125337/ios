@interface MMMusicVCOpenParams : NSObject <PBCoding>
{
    BOOL _forbidShowMinimizeWhenExitVC; // +0x8
    int _commentScene; // +0xc
    MMMusicInfo * _musicInfo; // +0x10
    MMMusicShareItem * _shareItem; // +0x18
    unsigned long long _scene; // +0x20
    NSString * _sceneID; // +0x28
    NSString * _sessionID; // +0x30
    NSString * _sceneNote; // +0x38
}
+ (void)PBArrayAdd_musicInfo;
+ (void)PBArrayAdd_shareItem;
+ (void)initialize;
- (unsigned long long)MMMusicStatistics_scene;
- (id)getPBPropertyTable;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)shareItem;
- (void)setShareItem:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)sceneID;
- (void)setSceneID:(id)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (BOOL)forbidShowMinimizeWhenExitVC;
- (void)setForbidShowMinimizeWhenExitVC:(BOOL)arg1;
- (void).cxx_destruct;
@end

