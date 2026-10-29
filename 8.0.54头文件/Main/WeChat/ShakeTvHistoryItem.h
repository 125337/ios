@interface ShakeTvHistoryItem : MMObject <PBCoding>
{
    unsigned int _createTime; // +0x8
    NSString * _iconUrl; // +0x10
    NSString * _title; // +0x18
    NSString * _desc; // +0x20
    NSString * _brandUserName; // +0x28
    NSString * _deeplinkJumpUrl; // +0x30
}
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_brandUserName;
+ (void)PBArrayAdd_deeplinkJumpUrl;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)brandUserName;
- (void)setBrandUserName:(id)arg1;
- (id)deeplinkJumpUrl;
- (void)setDeeplinkJumpUrl:(id)arg1;
- (void).cxx_destruct;
@end

