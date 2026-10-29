@interface TingPlayerStateMachine : NSObject
{
    int _status; // +0x8
    NSArray * _routes; // +0x10
}
- (id)init;
- (void)onEvent:(int)arg1;
- (void)onEvent:(int)arg1 userInfo:(id)arg2;
- (void)reset;
- (int)status;
- (void)setStatus:(int)arg1;
- (id)routes;
- (void)setRoutes:(id)arg1;
- (void).cxx_destruct;
@end
