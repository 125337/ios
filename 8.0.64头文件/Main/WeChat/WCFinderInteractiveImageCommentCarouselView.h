@interface WCFinderInteractiveImageCommentCarouselView : UIView
{
    id <WCFinderInteractiveImageCommentCarouselViewDelegate> _delegate; // +0x8
    WCFinderCommentEmoticonView * _emoticonView; // +0x10
    WCFinderCommentImageView * _imageView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _descLabel; // +0x28
    UIImageView * _iconView; // +0x30
    RichTextView * _textView; // +0x38
    WCFinderComment * _comment; // +0x40
    WCFinderInteractivePanelConfigParamsModel * _paramsModel; // +0x48
    double _carouselDuration; // +0x50
    double _carouselInterval; // +0x58
    unsigned long long _currentIndex; // +0x60
    id /* block */ _carouselNextMediaHidePreviousAnimatedBlock; // +0x68
    id /* block */ _carouselNextMediaHidePreviousCompletionBlock; // +0x70
    id /* block */ _carouselNextMediaShowNextAnimatedBlock; // +0x78
    id /* block */ _carouselNextMediaCompleBlock; // +0x80
    id /* block */ _carouselAllMediaAnimatedBlock; // +0x88
    id /* block */ _carouselAllMediaCompleBlock; // +0x90
}
+ (CGSize)iconSizeWithOvertType:(unsigned long long)arg1;
+ (unsigned long long)layoutTypeWithOvertType:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setup;
- (void)setupGesture;
- (void)setupData;
- (void)setupSubViews;
- (void)setupDataReport;
- (id)genReportDict;
- (void)resetToInitStateBeforeAnimation;
- (void)setCarouselNextMediaHidePreviousAnimationBlock:(id /* block */)arg1 hidePreviousCompletionBlock:(id /* block */)arg2 showNextAnimatedBlock:(id /* block */)arg3 showNextCompltionBlock:(id /* block */)arg4;
- (void)setCarouselAllMediaAnimatedBlock:(id /* block */)arg1 compltionBlock:(id /* block */)arg2;
- (void)resetData;
- (CGSize)updateWithParamsAndLayout:(id)arg1;
- (void)_updateWithComment:(id)arg1;
- (CGSize)_updateLayoutWithComment:(id)arg1;
- (CGSize)_updateWithCommentAndLayout:(id)arg1;
- (double)displayViewHorizontalMargin;
- (void)carouselNextMedia;
- (id)getCarouseCommentList;
- (id)getCarouseCommentAtIndex:(unsigned long long)arg1;
- (id)getCurrentComment;
- (void)onTap:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)paramsModel;
- (void)setParamsModel:(id)arg1;
- (double)carouselDuration;
- (double)carouselInterval;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (id /* block */)carouselNextMediaHidePreviousAnimatedBlock;
- (void)setCarouselNextMediaHidePreviousAnimatedBlock:(id /* block */)arg1;
- (id /* block */)carouselNextMediaHidePreviousCompletionBlock;
- (void)setCarouselNextMediaHidePreviousCompletionBlock:(id /* block */)arg1;
- (id /* block */)carouselNextMediaShowNextAnimatedBlock;
- (void)setCarouselNextMediaShowNextAnimatedBlock:(id /* block */)arg1;
- (id /* block */)carouselNextMediaCompleBlock;
- (void)setCarouselNextMediaCompleBlock:(id /* block */)arg1;
- (id /* block */)carouselAllMediaAnimatedBlock;
- (void)setCarouselAllMediaAnimatedBlock:(id /* block */)arg1;
- (id /* block */)carouselAllMediaCompleBlock;
- (void)setCarouselAllMediaCompleBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
