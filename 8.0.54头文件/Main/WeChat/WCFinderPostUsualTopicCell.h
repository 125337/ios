@interface WCFinderPostUsualTopicCell : WCFinderTableViewCell
{
    RichTextView * _topicTextView; // +0x8
    MMUILabel * _useCountLabel; // +0x10
}
+ (id)createRichTextView;
+ (id)createLabel;
+ (double)getUsualTopicHeight;
- (id)topicTextView;
- (id)useCountLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateCellWithTopicInfo:(id)arg1;
- (void)layoutElements;
- (void)setTopicTextView:(id)arg1;
- (void)setUseCountLabel:(id)arg1;
- (void).cxx_destruct;
@end

