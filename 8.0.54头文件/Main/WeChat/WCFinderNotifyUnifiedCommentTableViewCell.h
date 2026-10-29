@interface WCFinderNotifyUnifiedCommentTableViewCell : WCFinderNotifyUnifiedTableViewCell
{
    RichTextView * _contentTextView; // +0x8
    MMUIButton * _commentDeleteLabel; // +0x10
}
+ (double)getHeightWithViewModel:(id)arg1 width:(double)arg2;
- (void)setUpUI;
- (void)setUpViewLayout;
- (void)prepareForReuse;
- (void)updateNofiyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (id)commentDeleteLabel;
- (void)setCommentDeleteLabel:(id)arg1;
- (void).cxx_destruct;
@end

