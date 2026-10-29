@interface MMFinderRefSessionBufferKey : NSObject
{
    int _scene; // +0x8
    NSString * _tid; // +0x10
    NSString * _sessionExtraKey; // +0x18
}
+ (id)keyWithTid:(id)arg1 scene:(int)arg2 extraKey:(id)arg3;
- (id)tid;
- (void)setTid:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)sessionExtraKey;
- (void)setSessionExtraKey:(id)arg1;
- (void).cxx_destruct;
@end

