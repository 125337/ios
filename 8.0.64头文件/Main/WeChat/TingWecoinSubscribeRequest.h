@interface TingWecoinSubscribeRequest : NSObject
{
    FlutterStandardTypedData * _joinInfo; // +0x8
    NSString * _sessionId; // +0x10
    NSNumber * _tingScene; // +0x18
}
+ (id)makeWithJoinInfo:(id)arg1 sessionId:(id)arg2 tingScene:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)joinInfo;
- (void)setJoinInfo:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)tingScene;
- (void)setTingScene:(id)arg1;
- (void).cxx_destruct;
@end
