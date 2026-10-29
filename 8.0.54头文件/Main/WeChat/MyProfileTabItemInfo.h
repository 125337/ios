@interface MyProfileTabItemInfo : NSObject
{
    NSString * _titleStr; // +0x8
    UIImage * _normalImage; // +0x10
    unsigned long long _tabType; // +0x18
}
- (id)titleStr;
- (void)setTitleStr:(id)arg1;
- (id)normalImage;
- (void)setNormalImage:(id)arg1;
- (unsigned long long)tabType;
- (void)setTabType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

