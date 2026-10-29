@interface WCFinderPersonalCenterSectionDefine : NSObject
{
    NSString * _sectionTitle; // +0x8
    unsigned long long _style; // +0x10
    double _headerHeight; // +0x18
    SEL _onDisplayBlock; // +0x20
}
+ (id)defineWithTitle:(id)arg1 style:(unsigned long long)arg2;
- (id)sectionTitle;
- (void)setSectionTitle:(id)arg1;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (double)headerHeight;
- (void)setHeaderHeight:(double)arg1;
- (SEL)onDisplayBlock;
- (void)setOnDisplayBlock:(SEL)arg1;
- (void).cxx_destruct;
@end
