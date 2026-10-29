@interface WCCanvasComponentNewScrollInfo : MMObject <NSCoding>
{
    WCCanvasComponentScrollGroupInfo * _componentGroupList; // +0x8
    NSString * _bgColorTheme; // +0x10
    double _bgColorAlpha; // +0x18
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)componentGroupList;
- (void)setComponentGroupList:(id)arg1;
- (id)bgColorTheme;
- (void)setBgColorTheme:(id)arg1;
- (double)bgColorAlpha;
- (void)setBgColorAlpha:(double)arg1;
- (void).cxx_destruct;
@end
