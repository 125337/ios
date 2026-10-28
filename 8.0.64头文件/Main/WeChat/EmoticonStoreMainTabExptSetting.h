@interface EmoticonStoreMainTabExptSetting : NSObject
{
    int _type; // +0x8
    NSString * _tabWording; // +0x10
    NSString * _listWording; // +0x18
}
+ (id)savePath;
- (id)initWithJsonString:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)tabWording;
- (void)setTabWording:(id)arg1;
- (id)listWording;
- (void)setListWording:(id)arg1;
- (void).cxx_destruct;
@end
