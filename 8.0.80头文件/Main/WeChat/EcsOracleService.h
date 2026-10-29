@interface EcsOracleService : MMUserService <MMServiceProtocol>
{
    NSMapTable * _identifierViewMap; // +0x8
}
- (id)identifierViewMap;
- (id)sessionBuilder;
- (void)unbindFromView:(id)arg1;
- (void)bindGestureToView:(id)arg1;
- (id)getOrCreateGhostGestureOnView:(id)arg1;
- (void)setIdentifierViewMap:(id)arg1;
- (void).cxx_destruct;
@end
