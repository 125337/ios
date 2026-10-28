@interface ProfileNode : NSObject
{
    BOOL _hasParent; // +0x8
    BOOL _visited; // +0x9
    int _ID; // +0xc
    int _hitCount; // +0x10
    CallFrame * _callFrame; // +0x18
    NSMutableSet * _children; // +0x20
}
- (id)init;
- (int)ID;
- (void)setID:(int)arg1;
- (id)callFrame;
- (void)setCallFrame:(id)arg1;
- (int)hitCount;
- (void)setHitCount:(int)arg1;
- (id)children;
- (void)setChildren:(id)arg1;
- (BOOL)hasParent;
- (void)setHasParent:(BOOL)arg1;
- (BOOL)visited;
- (void)setVisited:(BOOL)arg1;
- (void).cxx_destruct;
@end
