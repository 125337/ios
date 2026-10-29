@interface WAReportJSErrorItem : WAReportBaseItem
{
    unsigned int _developerMarkedScene; // +0x8
    NSString * _name; // +0x10
    NSString * _desc; // +0x18
    NSString * _stack; // +0x20
    NSString * _strPublibCustomVersion; // +0x28
    NSString * _strPublibUpdateTime; // +0x30
    unsigned long long _launchStage; // +0x38
}
- (void)makeSafeString;
- (id)reportString;
- (id)name;
- (void)setName:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)stack;
- (void)setStack:(id)arg1;
- (unsigned int)developerMarkedScene;
- (void)setDeveloperMarkedScene:(unsigned int)arg1;
- (id)strPublibCustomVersion;
- (void)setStrPublibCustomVersion:(id)arg1;
- (id)strPublibUpdateTime;
- (void)setStrPublibUpdateTime:(id)arg1;
- (unsigned long long)launchStage;
- (void)setLaunchStage:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

