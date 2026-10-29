@interface WCStoryActionToolBarItem : NSObject
{
    BOOL _isDestructive; // +0x8
    NSString * _title; // +0x10
    NSString * _iconName; // +0x18
    id /* block */ _handler; // +0x20
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (BOOL)isDestructive;
- (void)setIsDestructive:(BOOL)arg1;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

