@interface _TtC9WeAppCore24WAMenuHeaderDishItemView : MMUIView <WARichTextViewHelperDelegate>
{
    id <_TtP9WeAppCore32WAMenuHeaderDishItemViewDelegate_> delegate; // +0x8
    double fontSize; // +0x10
     itemViews; // +0x18
     richTextHelpers; // +0x20
}
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)fontSize;
- (void)setFontSize:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithDishItemList:(id)arg1 linkText:(id)arg2;
- (void)onLinkClicked:(id)arg1 linkRect:(CGRect)arg2;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2;
- (void).cxx_destruct;
@end
