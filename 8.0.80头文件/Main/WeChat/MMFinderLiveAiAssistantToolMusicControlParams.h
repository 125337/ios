@interface MMFinderLiveAiAssistantToolMusicControlParams : MMFinderLiveAiAssistantToolParams
{
    NSString * _action; // +0x8
    NSNumber * _delta; // +0x10
    NSNumber * _songId; // +0x18
    NSString * _listenId; // +0x20
    NSNumber * _toIndex; // +0x28
    NSArray * _songs; // +0x30
}
+ (id)fieldOptions;
- (id)action;
- (void)setAction:(id)arg1;
- (id)delta;
- (void)setDelta:(id)arg1;
- (id)songId;
- (void)setSongId:(id)arg1;
- (id)listenId;
- (void)setListenId:(id)arg1;
- (id)toIndex;
- (void)setToIndex:(id)arg1;
- (id)songs;
- (void)setSongs:(id)arg1;
- (void).cxx_destruct;
@end
