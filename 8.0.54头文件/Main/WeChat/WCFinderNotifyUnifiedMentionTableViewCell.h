@interface WCFinderNotifyUnifiedMentionTableViewCell : WCFinderNotifyUnifiedTableViewCell
{
    RichTextView * _contentTextView; // +0x8
}
+ (double)getHeightWithViewModel:(id)arg1 width:(double)arg2;
- (void)setUpUI;
- (void)setUpViewLayout;
- (void)prepareForReuse;
- (void)updateNofiyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (double)contentBottomOffset;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (void).cxx_destruct;
@end

