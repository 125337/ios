@interface JSConsoleLog : NSObject
{
    unsigned int _jsLogLevel; // +0x8
    NSString * _jsLogInfo; // +0x10
}
+ (id)extractLogInfo:(id)arg1;
- (id)init;
- (id)jsLogInfo;
- (void)setJsLogInfo:(id)arg1;
- (unsigned int)jsLogLevel;
- (void)setJsLogLevel:(unsigned int)arg1;
- (void).cxx_destruct;
@end

