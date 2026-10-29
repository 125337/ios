@interface _TtC6WeChat25BrandProfileMenuViewModel : NSObject
{
    void * delegate; // +0x8
    double menuWidth; // +0x10
     _menuItems; // +0x0
}
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)generateView;
- (double)menuWidth;
- (void)setMenuWidth:(double)arg1;
- (id)filterButtonList:(id)arg1 isForceButtonHidden:(BOOL)arg2;
- (void)updateWithButtonList:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
