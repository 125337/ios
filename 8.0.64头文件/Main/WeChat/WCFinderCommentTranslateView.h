@interface WCFinderCommentTranslateView : UIView
{
    UILabel * _tipsLabel; // +0x8
    WCFinderAnimationLoadingView * _loadingView; // +0x10
    WCFinderFeedContentTextView * _translateView; // +0x18
    unsigned long long _translateType; // +0x20
}
+ (double)translateViewHeightWithContent:(id)arg1 type:(unsigned long long)arg2 maxWidth:(double)arg3;
+ (double)translateViewHeightWithComment:(id)arg1 maxWidth:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateTranslateComment:(id)arg1;
- (void)updateTranslateStyle:(unsigned long long)arg1 content:(id)arg2 source:(id)arg3;
- (void)layoutUI;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)translateView;
- (void)setTranslateView:(id)arg1;
- (unsigned long long)translateType;
- (void)setTranslateType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
