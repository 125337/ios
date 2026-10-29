@interface MJVocalEnhancementQueueItem : NSObject
{
    NSString * _audioID; // +0x8
    NSString * _roleID; // +0x10
    id /* block */ _completionHandler; // +0x18
}
+ (id)vocalEnhancementItemWithAudioID:(id)arg1 roleID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithAudioID:(id)arg1 roleID:(id)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)audioID;
- (id)roleID;
- (id /* block */)completionHandler;
- (void).cxx_destruct;
@end
