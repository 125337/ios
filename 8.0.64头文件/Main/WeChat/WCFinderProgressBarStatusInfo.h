@interface WCFinderProgressBarStatusInfo : NSObject
{
    BOOL _isLoading; // +0x8
    BOOL _isVideoPause; // +0x9
    BOOL _isManual; // +0xa
    BOOL _showProgressBar; // +0xb
    double _maxPlayProgress; // +0x10
    double _currentPlayProgress; // +0x18
}
- (id)description;
- (id)copy;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)isVideoPause;
- (void)setIsVideoPause:(BOOL)arg1;
- (BOOL)isManual;
- (void)setIsManual:(BOOL)arg1;
- (double)maxPlayProgress;
- (void)setMaxPlayProgress:(double)arg1;
- (double)currentPlayProgress;
- (void)setCurrentPlayProgress:(double)arg1;
- (BOOL)isShowProgressBar;
- (void)setShowProgressBar:(BOOL)arg1;
@end
