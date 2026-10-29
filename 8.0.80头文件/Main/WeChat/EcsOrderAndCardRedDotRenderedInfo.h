@interface EcsOrderAndCardRedDotRenderedInfo : NSObject
{
    NSString * _tipsUuid; // +0x8
    NSString * _path; // +0x10
    NSString * _title; // +0x18
    unsigned long long _redDotType; // +0x20
}
- (id)tipsUuid;
- (void)setTipsUuid:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned long long)redDotType;
- (void)setRedDotType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
