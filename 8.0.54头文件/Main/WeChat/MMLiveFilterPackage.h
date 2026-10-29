@interface MMLiveFilterPackage : NSObject
{
    NSMutableArray * _items; // +0x8
    MMLiveBeautyBadgeCollection * _badges; // +0x10
}
+ (id)filterPackageInResourcePackage:(id)arg1;
+ (id)filterPackageInLocalDirectory:(id)arg1 withConfigurationPath:(id)arg2;
- (id)items;
- (void)setItems:(id)arg1;
- (id)badges;
- (void)setBadges:(id)arg1;
- (void).cxx_destruct;
@end

