@interface MMFinderLiveControlButtonItem : NSObject
{
    BOOL _enabled; // +0x8
    NSString * _title; // +0x10
    NSString * _iconName; // +0x18
}
- (id)init;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
