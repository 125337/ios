@interface VoipForceStartObject : NSObject
{
    BOOL _m_hasStart; // +0x8
    BOOL _canStartInUnactive; // +0x9
    id /* block */ _m_block; // +0x10
    NSRecursiveLock * _m_lock; // +0x18
}
- (id)init;
- (void)updateBlock:(id /* block */)arg1;
- (void)dealloc;
- (BOOL)start;
- (void)whenDidActive;
- (void)internalStart;
- (id /* block */)m_block;
- (void)setM_block:(id /* block */)arg1;
- (id)m_lock;
- (void)setM_lock:(id)arg1;
- (BOOL)m_hasStart;
- (void)setM_hasStart:(BOOL)arg1;
- (BOOL)canStartInUnactive;
- (void)setCanStartInUnactive:(BOOL)arg1;
- (void).cxx_destruct;
@end
