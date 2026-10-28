@interface OpenImContactWordingResource : NSObject <PBCoding>
{
    unsigned int _updateTime; // +0x8
    NSString * _language; // +0x10
    NSString * _content; // +0x18
    NSString * _pinyin; // +0x20
    NSString * _quanpin; // +0x28
}
+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_language;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_pinyin;
+ (void)PBArrayAdd_quanpin;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)pinyin;
- (void)setPinyin:(id)arg1;
- (id)quanpin;
- (void)setQuanpin:(id)arg1;
- (void).cxx_destruct;
@end
