@interface DiscoverEntranceSettingConfig : NSObject
{
    NSString * _title; // +0x8
    UIImage * _iconImage; // +0x10
    NSMutableArray * _switchInfos; // +0x18
    NSMutableArray * _extSwitchInfos; // +0x20
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id)switchInfos;
- (void)setSwitchInfos:(id)arg1;
- (id)extSwitchInfos;
- (void)setExtSwitchInfos:(id)arg1;
- (void).cxx_destruct;
@end

