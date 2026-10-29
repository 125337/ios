@interface WCFinderInteractionCommentRecordContentView : UIView <UIContentView>
{
    UILabel * _feedTypeTag; // +0x8
    WCFinderInteractionCommentRecordConfiguration * _appliedConfiguration; // +0x10
    UILabel * _dateLabel; // +0x18
    WCFinderRichTextView * _commentLabel; // +0x20
    UIView * _quoteIndicator; // +0x28
    WCFinderRichTextView * _quoteContentLabel; // +0x30
    UIImageView * _thumbImage; // +0x38
    UIView * _separator; // +0x40
}
+ (double)cellHeightWithConfiguration:(id)arg1 containerWidth:(double)arg2;
- (id)initWithConfiguration:(id)arg1;
- (void)_setupUI;
- (void)_setupLayout;
- (void)layoutSubviews;
- (void)_applyConfiguration:(id)arg1;
- (void)_updateUI;
- (void)_updateLayout;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (id)dateLabel;
- (id)commentLabel;
- (id)quoteIndicator;
- (id)quoteContentLabel;
- (id)thumbImage;
- (id)separator;
- (id)feedTypeTag;
- (void)setFeedTypeTag:(id)arg1;
- (id)appliedConfiguration;
- (void)setAppliedConfiguration:(id)arg1;
- (void)setDateLabel:(id)arg1;
- (void)setCommentLabel:(id)arg1;
- (void)setQuoteIndicator:(id)arg1;
- (void)setQuoteContentLabel:(id)arg1;
- (void)setThumbImage:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void).cxx_destruct;
@end
