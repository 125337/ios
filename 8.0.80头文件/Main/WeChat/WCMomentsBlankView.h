@interface WCMomentsBlankView : UIView <ILinkEventExt>
{
    RichTextView * _tipsTextView; // +0x8
    NSString * _richText; // +0x10
    MMUILabel * _tipsLabel; // +0x18
    NSAttributedString * _attributedText; // +0x20
}
+ (id)createTipsTextView;
+ (id)createTipsLabel;
- (id)initWithFrame:(CGRect)arg1;
- (id)tipsTextView;
- (void)loadTipsTextView;
- (void)setRichText:(id)arg1;
- (id)tipsLabel;
- (void)loadTipsLabel;
- (void)setAttributedText:(id)arg1;
- (void)displayTipsView:(id)arg1;
- (void)layoutSubviews;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)setTipsTextView:(id)arg1;
- (id)richText;
- (void)setTipsLabel:(id)arg1;
- (id)attributedText;
- (void).cxx_destruct;
@end
