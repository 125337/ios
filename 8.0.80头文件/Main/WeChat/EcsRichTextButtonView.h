@interface EcsRichTextButtonView : UIControl
{
    EcsRichTextButtonViewModel * _dataVM; // +0x8
    EcsRichTextLabel * _label; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)setDataVM:(id)arg1;
- (id)dataVM;
- (id)label;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end
