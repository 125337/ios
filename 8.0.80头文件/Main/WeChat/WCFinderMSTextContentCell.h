@interface WCFinderMSTextContentCell : WCFinderMSActivityBaseCell <RichTextLayoutDelegate, ILinkEventExt>
{
    RichTextView * _textView; // +0x8
    UILabel * _closureLabel; // +0x10
}
+ (id)cellIdentifier;
+ (CGSize)calculateDisplaySize:(CGSize)arg1 forVM:(id)arg2 cellIdentifier:(id)arg3 showSceneIntroduce:(BOOL)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)onContentVMChanged;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onClickClosure;
- (void)onLongPress:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)closureLabel;
- (void)setClosureLabel:(id)arg1;
- (void).cxx_destruct;
@end
