@interface MMBizMenuInfo : NSObject
{
    unsigned int _uin; // +0x8
    unsigned int _interativeMode; // +0xc
    unsigned int _updateTime; // +0x10
    NSMutableArray * _arrMenu; // +0x18
    unsigned int _type; // +0x20
}
+ (id)svgImageNameForShowIconType:(unsigned long long)arg1;
- (id)init;
- (void)parseFromJsonDictionary:(id)arg1;
- (unsigned int)uin;
- (void)setUin:(unsigned int)arg1;
- (unsigned int)interactiveMode;
- (void)setInteractiveMode:(unsigned int)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (id)arrMenu;
- (void)setArrMenu:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

