@interface GCTextCollectionViewCell : GCChatBaseCell <ILinkEventExt>
{
    NSMutableDictionary * _linkJumpInfoDict; // +0x8
    RichTextView * _richTextView; // +0x10
    UILabel * _sysTitleLabel; // +0x18
}
+ (id)textLayoutInfoForTextCellModel:(id)arg1;
+ (id)centerTipTextLayoutWithMarginInsets:(UIEdgeInsets)arg1;
+ (void)onCalculatLayoutInfo:(id)arg1;
+ (CGSize)sizeForTextModel:(id)arg1 font:(id)arg2 outArrStyles:(id *)arg3;
+ (unsigned long long)parseTypeForContentModel:(id)arg1;
+ (id)getRichTextViewConfig:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)textCellModel;
- (void)configureWithCellModel:(id)arg1;
- (void)initRichTextView;
- (id)linkBlockForUrl:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)handleLongPressAt:(id)arg1;
- (id)linkJumpInfoDict;
- (void)setLinkJumpInfoDict:(id)arg1;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)sysTitleLabel;
- (void)setSysTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

