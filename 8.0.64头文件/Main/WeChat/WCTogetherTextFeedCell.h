@interface WCTogetherTextFeedCell : WCTogetherBaseFeedCell
{
    RichTextView * _richTextView; // +0x8
}
+ (id)cellIdentifier;
+ (id)createRichTextView;
+ (double)heightForItemContentViewWithViewItem:(id)arg1 inTableView:(id)arg2;
- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)arg1;
- (void)loadItemContentView;
- (void)layoutItemContentView;
- (void)contentDidTap;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (void).cxx_destruct;
@end
