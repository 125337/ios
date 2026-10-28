@interface VoipOpenglesMgr : MMRootService <MMServiceProtocol>
{
    BOOL _isApplicationStateActive; // +0x8
    NSMutableArray * m_openglesContextArray; // +0x10
}
- (void)updateContextsApplicationStateProperty;
- (void)cleanContexts;
- (void)whenDidActive;
- (void)whenGoingToResign;
- (void)removeContextThatMarkDeleted;
- (id)requestContext;
- (id)init;
- (void)dealloc;
- (id)m_openglesContextArray;
- (void)setM_openglesContextArray:(id)arg1;
- (BOOL)isApplicationStateActive;
- (void)setIsApplicationStateActive:(BOOL)arg1;
- (void).cxx_destruct;
@end
