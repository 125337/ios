@interface MMFinderLiveAiAssistantToolFieldOption : NSObject
{
    BOOL _required; // +0x8
    int _min; // +0xc
    int _max; // +0x10
    NSString * _name; // +0x18
    NSString * _desc; // +0x20
    NSArray * _enumValues; // +0x28
    NSString * _defaultValue; // +0x30
    NSString * _format; // +0x38
}
+ (id)field:(id)arg1 required:(BOOL)arg2 desc:(id)arg3;
- (id)name;
- (void)setName:(id)arg1;
- (BOOL)required;
- (void)setRequired:(BOOL)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)enumValues;
- (void)setEnumValues:(id)arg1;
- (id)defaultValue;
- (void)setDefaultValue:(id)arg1;
- (int)min;
- (void)setMin:(int)arg1;
- (int)max;
- (void)setMax:(int)arg1;
- (id)format;
- (void)setFormat:(id)arg1;
- (void).cxx_destruct;
@end
