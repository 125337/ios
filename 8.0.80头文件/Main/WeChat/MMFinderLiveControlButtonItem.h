@interface MMFinderLiveControlButtonItem : NSObject
{
    BOOL _dismissRedDotOnSelection; // +0x8
    BOOL _enabled; // +0x9
    NSString * _title; // +0x10
    NSString * _iconName; // +0x18
    NSString * _redDotPath; // +0x20
}
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (id)redDotPath;
- (void)setRedDotPath:(id)arg1;
- (BOOL)dismissRedDotOnSelection;
- (void)setDismissRedDotOnSelection:(BOOL)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
