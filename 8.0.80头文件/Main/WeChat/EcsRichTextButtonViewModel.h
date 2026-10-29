@interface EcsRichTextButtonViewModel : NSObject
{
    EcsRichTextButton * _textButton; // +0x8
    EcsRichLabelViewModel * _labelVM; // +0x10
}
+ (id)createWithTextButton:(id)arg1;
- (id)initWithTextButton:(id)arg1;
- (void)setTextButton:(id)arg1;
- (CGSize)labelSize;
- (id)textButton;
- (id)labelVM;
- (void).cxx_destruct;
@end
