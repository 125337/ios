@interface MagicCardIndexSystemReporterStruct : NSObject
{
    NSString * _bizScene; // +0x8
    NSString * _bizSubScene; // +0x10
    long long _implType; // +0x18
    NSString * _action; // +0x20
    NSString * _extraJson; // +0x28
    NSString * _traceId; // +0x30
}
- (id)toString;
- (id)bizScene;
- (void)setBizScene:(id)arg1;
- (id)bizSubScene;
- (void)setBizSubScene:(id)arg1;
- (long long)implType;
- (void)setImplType:(long long)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (id)extraJson;
- (void)setExtraJson:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (void).cxx_destruct;
@end
