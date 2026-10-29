@interface TPAVPlayerCommonUtils : NSObject
{
    NSMutableDictionary * _playbackStateNames; // +0x8
    NSMutableDictionary * _loadStateNames; // +0x10
    NSMutableDictionary * _seekSourceNames; // +0x18
}
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (id)makePlaybackStateName:(long long)arg1;
- (id)makeLoadStateName:(long long)arg1;
- (id)makeSeekSourceName:(long long)arg1;
- (void).cxx_destruct;
@end

