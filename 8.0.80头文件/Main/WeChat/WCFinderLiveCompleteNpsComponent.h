@interface WCFinderLiveCompleteNpsComponent : NSObject <WCFinderWebCompleteComponent, WCFinderLiveCompleteNpsHosting>
{
    BOOL _isAudience; // +0x8
    BOOL _npsMounted; // +0x9
    BOOL _npsSurveySubmitted; // +0xa
    WCFinderLiveCompleteNpsRenderer * _renderer; // +0x10
    WCFinderWebCompleteViewController * _webVC; // +0x18
    MMFinderLiveTask * _liveTask; // +0x20
    FinderJumpInfo * _npsSurveyJumpInfo; // +0x28
    MMLiteAppView * _npsLiteAppView; // +0x30
}
- (id)componentIdentifier;
- (void)onWebVCDidAppear;
- (double)npsHostViewWidth;
- (BOOL)npsHostInsertSameLayerView:(id)arg1;
- (void)npsHostRemoveSameLayerView;
- (void)npsHostDidChangePlaceholderHeight:(double)arg1;
- (void)npsHostHidePlaceholder;
- (void)npsHostShowDoneToastWithText:(id)arg1;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (id)webVC;
- (void)setWebVC:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (BOOL)isAudience;
- (void)setIsAudience:(BOOL)arg1;
- (id)npsSurveyJumpInfo;
- (void)setNpsSurveyJumpInfo:(id)arg1;
- (id)npsLiteAppView;
- (void)setNpsLiteAppView:(id)arg1;
- (BOOL)npsMounted;
- (void)setNpsMounted:(BOOL)arg1;
- (BOOL)npsSurveySubmitted;
- (void)setNpsSurveySubmitted:(BOOL)arg1;
- (void).cxx_destruct;
@end
