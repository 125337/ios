@interface MBADConversionContext : NSObject
{
    NSString * _implType; // +0x8
    NSString * _bizName; // +0x10
    NSString * _bizScene; // +0x18
    NSString * _traceId; // +0x20
    NSString * _frameSetName; // +0x28
    NSString * _uxInfo; // +0x30
}
+ (id)contextFromDict:(id)arg1;
- (id)implType;
- (id)bizName;
- (id)bizScene;
- (id)traceId;
- (id)frameSetName;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (void).cxx_destruct;
@end
