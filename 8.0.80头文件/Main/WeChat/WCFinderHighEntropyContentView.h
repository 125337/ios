@interface WCFinderHighEntropyContentView : UIView <WCFinderFeedContentTextClickActionDelegate>
{
    id <WCFinderHighEntropyContentViewDelegate> _delegate; // +0x8
    WCFinderFullScrollTextView * _textView; // +0x10
    WCFinderFeedContentVM * _currentContentVM; // +0x18
}
+ (double)viewHeightWithContentVM:(id)arg1 maxWidth:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureWithContentVM:(id)arg1 maxWidth:(double)arg2;
- (void)configureWithContentVM:(id)arg1 maxWidth:(double)arg2 unExpandLineNum:(unsigned long long)arg3;
- (void)configureIfNeededWithContentVM:(id)arg1 maxWidth:(double)arg2;
- (BOOL)isContentTruncated;
- (BOOL)getCollapsedExpandActionFrame:(CGRect *)arg1 inView:(id)arg2;
- (void)updateSuffixMaskForSeparateTrailingIfNeeded;
- (BOOL)shouldExpandInPlaceWithTextView:(id)arg1;
- (void)notifyExpandInPlace;
- (void)notifyClickContent;
- (void)notifyCollapseInPlace;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(BOOL)arg2 isTouchExpand:(BOOL)arg3;
- (void)onFeedContentTextView:(id)arg1 clickText:(id)arg2 withRect:(CGRect)arg3;
- (void)onFeedContentTextView:(id)arg1 clickTopicText:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)currentContentVM;
- (void)setCurrentContentVM:(id)arg1;
- (void).cxx_destruct;
@end
