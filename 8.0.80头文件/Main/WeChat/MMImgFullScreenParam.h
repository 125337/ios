@interface MMImgFullScreenParam : NSObject
{
    BOOL _muted; // +0x8
    BOOL _bNeedEdit; // +0x9
    BOOL _bEditMode; // +0xa
    BOOL _shouldAutoResizingSafeArea; // +0xb
    int _ocrTransSource; // +0xc
    unsigned long long _scene; // +0x10
    MMImgDataLogic * _dataLogic; // +0x18
    id <MMImgFullScreenViewControllerDelegate> _delegate; // +0x20
    unsigned long long _transitioningStyle; // +0x28
    double _videoInitialTime; // +0x30
    NSArray * _scanCodePrefixBlackList; // +0x38
    MMImgFullScreenReporter * _reporter; // +0x40
    NSDictionary * _historyMenuReportInfo; // +0x48
    UIColor * _customBackgroundColor; // +0x50
    CGRect _originFrame; // +0x58
}
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)scene;
- (id)dataLogic;
- (void)setDataLogic:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)transitioningStyle;
- (void)setTransitioningStyle:(unsigned long long)arg1;
- (CGRect)originFrame;
- (void)setOriginFrame:(CGRect)arg1;
- (BOOL)muted;
- (void)setMuted:(BOOL)arg1;
- (double)videoInitialTime;
- (void)setVideoInitialTime:(double)arg1;
- (BOOL)bNeedEdit;
- (void)setBNeedEdit:(BOOL)arg1;
- (BOOL)bEditMode;
- (void)setBEditMode:(BOOL)arg1;
- (int)ocrTransSource;
- (void)setOcrTransSource:(int)arg1;
- (id)scanCodePrefixBlackList;
- (void)setScanCodePrefixBlackList:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)historyMenuReportInfo;
- (void)setHistoryMenuReportInfo:(id)arg1;
- (BOOL)shouldAutoResizingSafeArea;
- (void)setShouldAutoResizingSafeArea:(BOOL)arg1;
- (id)customBackgroundColor;
- (void)setCustomBackgroundColor:(id)arg1;
- (void).cxx_destruct;
@end
