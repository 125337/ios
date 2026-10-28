@interface WCFinderPhotoProgressBar : UIView
{
    id <WCFinderPhotoProgressBarDelegate> _delegate; // +0x8
    WCFinderPhotoProgressBarInitParams * _params; // +0x10
    unsigned long long _numberOfBars; // +0x18
    NSMutableArray * _backgroundBars; // +0x20
    NSMutableArray * _fillBars; // +0x28
    NSMutableArray * _progressValues; // +0x30
    unsigned long long _currentIndex; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 numberOfBars:(unsigned long long)arg2 params:(id)arg3;
- (void)setupUI;
- (void)clearSubviews;
- (void)updateNumberOfBars:(unsigned long long)arg1;
- (void)updateProgressAtIndex:(long long)arg1 progress:(double)arg2;
- (void)_setProgress:(double)arg1 atIndex:(long long)arg2;
- (void)_setProgress:(double)arg1 atIndex:(long long)arg2 animated:(BOOL)arg3 duration:(double)arg4;
- (void)_createProgressBarAtIndex:(long long)arg1;
- (void)layoutSubviews;
- (void)layoutProgressBars;
- (void)handleTapGesture:(id)arg1;
- (id)backgroundBars;
- (id)fillBars;
- (id)progressValues;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (unsigned long long)numberOfBars;
- (void)setNumberOfBars:(unsigned long long)arg1;
- (void)setBackgroundBars:(id)arg1;
- (void)setFillBars:(id)arg1;
- (void)setProgressValues:(id)arg1;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
