@interface WCFinderMoreHotContentBottomView : UITableViewHeaderFooterView <ILinkEventExt>
{
    id <WCFinderMoreHotContentBottomViewDelegate> _delegate; // +0x8
    RichTextView * _richTextView; // +0x10
    UIImageView * _arrowImageView; // +0x18
}
- (id)initWithReuseIdentifier:(id)arg1;
- (void)prepareForReuse;
- (void)updateContentView:(CGSize)arg1;
- (id)richTextView;
- (id)arrowImageView;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onClickMoreHotContent;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setRichTextView:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
