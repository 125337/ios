@interface WCTimeLineTagView : UIView <MMImageLoaderObserver>
{
    NSArray * _dataArray; // +0x8
    UIColor * _tagDefaultBackgroundColor; // +0x10
    UIFont * _tagFont; // +0x18
    UIColor * _tagDefaultColor; // +0x20
    double _tagMargin; // +0x28
    NSMutableArray * _labelArray; // +0x30
}
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)setDataArray:(id)arg1;
- (void)setIconImage:(id)arg1 andUrl:(id)arg2;
- (void)setIconImageInner:(int)arg1;
- (void)setIconImage:(id)arg1 andIndex:(int)arg2 isForDark:(BOOL)arg3;
- (void)checkAndDownloadIcon;
- (void)downloadIconInner:(id)arg1 isForDark:(BOOL)arg2 andIndex:(int)arg3;
- (id)fetchUIColorAtIndex:(int)arg1 isForTagName:(BOOL)arg2;
- (id)fetchTagBgColorAtIndex:(int)arg1;
- (id)fetchTagNameColorAtIndex:(int)arg1;
- (id)fetchTagNameAtIndex:(int)arg1;
- (id)fetchUIImageAtIndex:(int)arg1;
- (id)fetchDefaultUIImage;
- (id)fetchIconUrl:(int)arg1 isForDark:(BOOL)arg2;
- (BOOL)isTagHasIcon:(int)arg1;
- (void)initLabelViews;
- (void)layoutSubviews;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)dataArray;
- (id)tagDefaultBackgroundColor;
- (void)setTagDefaultBackgroundColor:(id)arg1;
- (id)tagFont;
- (void)setTagFont:(id)arg1;
- (id)tagDefaultColor;
- (void)setTagDefaultColor:(id)arg1;
- (double)tagMargin;
- (void)setTagMargin:(double)arg1;
- (id)labelArray;
- (void)setLabelArray:(id)arg1;
- (void).cxx_destruct;
@end

