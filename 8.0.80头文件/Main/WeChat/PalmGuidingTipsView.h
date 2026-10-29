@interface PalmGuidingTipsView : MMUIView
{
    BOOL _needFlippedLeft; // +0x8
    int _currentTipCode; // +0xc
    UIView * _imageBgView; // +0x10
    PAGView * _pagView; // +0x18
    UIImageView * _tipsImageView; // +0x20
    MMLoadingIndicatorView * _loadingIndicator; // +0x28
    UILabel * _tipsLabel; // +0x30
    unsigned long long _currentHandType; // +0x38
    NSString * _currentTipText; // +0x40
}
- (id)initWithTipCode:(int)arg1 tipText:(id)arg2 handType:(unsigned long long)arg3;
- (void)updateWithTipCode:(int)arg1 tipText:(id)arg2 handType:(unsigned long long)arg3;
- (void)updateHandType:(unsigned long long)arg1;
- (void)updateView;
- (void)onlyShowPagView;
- (void)onlyShowTipsImageView;
- (void)onlyShowLoadingImageView;
- (void)showPagView:(id)arg1;
- (void)updatePagView;
- (id)imageBgView;
- (void)setImageBgView:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)tipsImageView;
- (void)setTipsImageView:(id)arg1;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (int)currentTipCode;
- (void)setCurrentTipCode:(int)arg1;
- (unsigned long long)currentHandType;
- (void)setCurrentHandType:(unsigned long long)arg1;
- (id)currentTipText;
- (void)setCurrentTipText:(id)arg1;
- (BOOL)needFlippedLeft;
- (void)setNeedFlippedLeft:(BOOL)arg1;
- (void).cxx_destruct;
@end
