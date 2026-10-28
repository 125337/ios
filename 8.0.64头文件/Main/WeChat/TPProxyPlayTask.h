@interface TPProxyPlayTask : NSObject
{
    int _playId; // +0x8
    long long _definitionId; // +0x10
    NSString * _playUrl; // +0x18
}
- (long long)definitionId;
- (void)setDefinitionId:(long long)arg1;
- (int)playId;
- (void)setPlayId:(int)arg1;
- (id)playUrl;
- (void)setPlayUrl:(id)arg1;
- (void).cxx_destruct;
@end
