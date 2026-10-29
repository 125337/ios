@interface CallFrame : NSObject
{
    NSString * _functionName; // +0x8
    NSString * _scriptId; // +0x10
    NSString * _url; // +0x18
    NSNumber * _lineNumber; // +0x20
    NSNumber * _columnNumber; // +0x28
}
- (id)dictKey;
- (id)functionName;
- (void)setFunctionName:(id)arg1;
- (id)scriptId;
- (void)setScriptId:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)lineNumber;
- (void)setLineNumber:(id)arg1;
- (id)columnNumber;
- (void)setColumnNumber:(id)arg1;
- (void).cxx_destruct;
@end
