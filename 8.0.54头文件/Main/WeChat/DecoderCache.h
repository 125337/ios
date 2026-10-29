@interface DecoderCache : NSObject <NSCopying, NSMutableCopying>
{
    int _currentId; // +0x8
    NSMutableDictionary * _decoderMap; // +0x10
    NSObject<OS_dispatch_queue> * _syncQueue; // +0x18
}
+ (id)instance;
+ (id)allocWithZone:(_NSZone *)arg1;
- (int)generateId;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)mutableCopyWithZone:(_NSZone *)arg1;
- (id)decoderMap;
- (void)setDecoderMap:(id)arg1;
- (int)currentId;
- (void)setCurrentId:(int)arg1;
- (id)syncQueue;
- (void)setSyncQueue:(id)arg1;
- (void).cxx_destruct;
@end

