@interface KvReportAction22138 : NSObject
{
    int _innerVersion; // +0x8
    unsigned int _actionCode; // +0xc
    int _result; // +0x10
    NSString * _actionName; // +0x18
    NSString * _actionExt; // +0x20
    NSString * _resultExt; // +0x28
    long long _commentScene; // +0x30
    NSString * _snn; // +0x38
    long long _cost; // +0x40
    long long _actionTime; // +0x48
}
+ (id)action;
- (void)perform;
- (int)innerVersion;
- (void)setInnerVersion:(int)arg1;
- (unsigned int)actionCode;
- (void)setActionCode:(unsigned int)arg1;
- (id)actionName;
- (void)setActionName:(id)arg1;
- (id)actionExt;
- (void)setActionExt:(id)arg1;
- (int)result;
- (void)setResult:(int)arg1;
- (id)resultExt;
- (void)setResultExt:(id)arg1;
- (long long)commentScene;
- (void)setCommentScene:(long long)arg1;
- (id)snn;
- (void)setSnn:(id)arg1;
- (long long)cost;
- (void)setCost:(long long)arg1;
- (long long)actionTime;
- (void)setActionTime:(long long)arg1;
- (void).cxx_destruct;
@end
