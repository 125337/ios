@interface FlutterActionBarConfig : NSObject
{
    NSNumber * _showPlatform; // +0x8
    FlutterActionBarTitleConfig * _titleConfig; // +0x10
    FlutterActionBarIconConfig * _leftItem; // +0x18
    FlutterActionBarIconConfig * _rightItem; // +0x20
}
+ (id)makeWithShowPlatform:(id)arg1 titleConfig:(id)arg2 leftItem:(id)arg3 rightItem:(id)arg4;
+ (id)fromMap:(id)arg1;
- (id)toMap;
- (id)showPlatform;
- (void)setShowPlatform:(id)arg1;
- (id)titleConfig;
- (void)setTitleConfig:(id)arg1;
- (id)leftItem;
- (void)setLeftItem:(id)arg1;
- (id)rightItem;
- (void)setRightItem:(id)arg1;
- (void).cxx_destruct;
@end
