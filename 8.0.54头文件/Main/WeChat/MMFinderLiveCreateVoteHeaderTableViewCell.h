@interface MMFinderLiveCreateVoteHeaderTableViewCell : UITableViewCell <UITextViewDelegate>
{
    id <MMFinderLiveCreateVoteHeaderTableViewCellDelegate> _cellDelegate; // +0x8
    MMUIButton * _selectButton; // +0x10
    UIImageView * _selectArrowImageView; // +0x18
    MMTextView * _questionTextView; // +0x20
    UIView * _lineView; // +0x28
    UIView * _durationContainerView; // +0x30
    UILabel * _durationTitleLabel; // +0x38
    UILabel * _durationDescLabel; // +0x40
    UIImageView * _durationArrowImageView; // +0x48
}
+ (id)TEXTVIEW_FONT;
+ (id)reuseId;
+ (double)cellHeightWithQuestionText:(id)arg1 maxWidth:(double)arg2;
+ (double)textViewHeightWithQuestionText:(id)arg1 maxWidth:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configWithVoteItem:(id)arg1;
- (void)endEditing;
- (void)initUI;
- (void)layoutSubviews;
- (double)maxWidthForTextView;
- (double)expectedHeightForTextView;
- (void)didClickSelectButton;
- (void)didTapDurationSelect;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)selectButton;
- (void)setSelectButton:(id)arg1;
- (id)selectArrowImageView;
- (void)setSelectArrowImageView:(id)arg1;
- (id)questionTextView;
- (void)setQuestionTextView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)durationContainerView;
- (void)setDurationContainerView:(id)arg1;
- (id)durationTitleLabel;
- (void)setDurationTitleLabel:(id)arg1;
- (id)durationDescLabel;
- (void)setDurationDescLabel:(id)arg1;
- (id)durationArrowImageView;
- (void)setDurationArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end

