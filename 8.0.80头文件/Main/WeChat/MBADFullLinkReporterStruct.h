@interface MBADFullLinkReporterStruct : NSObject
{
    NSString * _bizName; // +0x8
    NSString * _bizScene; // +0x10
    NSString * _traceId; // +0x18
    NSString * _frameSetName; // +0x20
    NSString * _reportSource; // +0x28
    NSString * _action; // +0x30
    long long _actionTimestamp; // +0x38
    NSString * _extraJson; // +0x40
    NSString * _implType; // +0x48
}
- (id)toString;
- (id)bizName;
- (void)setBizName:(id)arg1;
- (id)bizScene;
- (void)setBizScene:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)frameSetName;
- (void)setFrameSetName:(id)arg1;
- (id)reportSource;
- (void)setReportSource:(id)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (long long)actionTimestamp;
- (void)setActionTimestamp:(long long)arg1;
- (id)extraJson;
- (void)setExtraJson:(id)arg1;
- (id)implType;
- (void)setImplType:(id)arg1;
- (void).cxx_destruct;
@end
