@interface PageSheetBarButtonContext : NSObject
{
    NSObject * _oTarget; // +0x8
    SEL _oSelector; // +0x10
    unsigned long long _eStyle; // +0x18
    double _fMaxWidth; // +0x20
    UIColor * _oColor; // +0x28
    UIFont * _oFont; // +0x30
    NSString * _oTitle; // +0x38
    NSString * _nsImgName; // +0x40
    NSString * _oAccessibilityStr; // +0x48
}
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id /* block */)style;
- (id /* block */)maxWidth;
- (id /* block */)color;
- (id /* block */)font;
- (id /* block */)title;
- (id /* block */)imgName;
- (id /* block */)accessibilityStr;
- (id)genButtonItem;
- (id)oTarget;
- (void)setOTarget:(id)arg1;
- (SEL)oSelector;
- (void)setOSelector:(SEL)arg1;
- (unsigned long long)eStyle;
- (void)setEStyle:(unsigned long long)arg1;
- (double)fMaxWidth;
- (void)setFMaxWidth:(double)arg1;
- (id)oColor;
- (void)setOColor:(id)arg1;
- (id)oFont;
- (void)setOFont:(id)arg1;
- (id)oTitle;
- (void)setOTitle:(id)arg1;
- (id)nsImgName;
- (void)setNsImgName:(id)arg1;
- (id)oAccessibilityStr;
- (void)setOAccessibilityStr:(id)arg1;
- (void).cxx_destruct;
@end

