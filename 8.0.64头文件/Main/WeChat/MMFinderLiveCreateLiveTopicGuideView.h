@interface MMFinderLiveCreateLiveTopicGuideView : UIView <UITextViewDelegate>
{
    BOOL _isCurrentContentValid; // +0x8
    BOOL _shouldForceEndEditing; // +0x9
    id <MMFinderLiveCreateLiveTopicGuideViewDelegate> _delegate; // +0x10
    MMTextView * _topicTextView; // +0x18
    MMUILabel * _limitTipsView; // +0x20
    NSString * _placeHolder; // +0x28
    long long _maxTitleLength; // +0x30
    NSString * _customAccessibilityLabel; // +0x38
}
- (id)initWithPlaceHolder:(id)arg1 maxTitleLength:(long long)arg2 customAccessibilityLabel:(id)arg3;
- (void)initTopicTextView;
- (void)initLimitTipsView;
- (void)layoutSubviews;
- (void)layoutTopicTextView;
- (void)layoutLimitTipsView;
- (void)tryStartEditing;
- (void)tryFinishEditingForce:(BOOL)arg1;
- (void)reset;
- (long long)getLengthFromContent:(id)arg1;
- (double)getLimitTipsViewHeight;
- (double)getTopAndBottomPadding;
- (void)updateLimitTipsViewContent;
- (void)updateIsCurrentContentValid;
- (void)checkContentHeightChanged;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textViewShouldEndEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (double)contentHeight;
- (id)topicTitle;
- (id)limitedTopicTitle;
- (void)setIsCurrentContentValid:(BOOL)arg1;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isCurrentContentValid;
- (id)topicTextView;
- (void)setTopicTextView:(id)arg1;
- (id)limitTipsView;
- (void)setLimitTipsView:(id)arg1;
- (id)placeHolder;
- (void)setPlaceHolder:(id)arg1;
- (long long)maxTitleLength;
- (void)setMaxTitleLength:(long long)arg1;
- (id)customAccessibilityLabel;
- (void)setCustomAccessibilityLabel:(id)arg1;
- (BOOL)shouldForceEndEditing;
- (void)setShouldForceEndEditing:(BOOL)arg1;
- (void).cxx_destruct;
@end
