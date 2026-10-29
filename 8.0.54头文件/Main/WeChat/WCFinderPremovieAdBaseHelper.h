@interface WCFinderPremovieAdBaseHelper : NSObject
{
    BOOL _isReadyToShow; // +0x8
    BOOL _shouldCloseAfterFeedback; // +0x9
    id <WCFinderPremovieAdHelperDelegate> _delegate; // +0x10
    FinderAdPreMovieAdInfo * _premovieInfo; // +0x18
    NSString * _cardId; // +0x20
    NSString * _playId; // +0x28
    unsigned long long _startExposeTimestamp; // +0x30
    CGRect _containerFrame; // +0x38
}
- (id)initWithPremovieInfo:(id)arg1;
- (void)updateWithMultiMediaCell:(id)arg1;
- (id)genPremovieView:(id)arg1;
- (void)clearCache;
- (void)showPremovieAd;
- (void)resumePremovieAd;
- (void)pausePremovieAd;
- (void)closePremovieAd;
- (id)reportDictWithReportScene:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)premovieInfo;
- (void)setPremovieInfo:(id)arg1;
- (BOOL)isReadyToShow;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (id)playId;
- (void)setPlayId:(id)arg1;
- (CGRect)containerFrame;
- (void)setContainerFrame:(CGRect)arg1;
- (BOOL)shouldCloseAfterFeedback;
- (void)setShouldCloseAfterFeedback:(BOOL)arg1;
- (unsigned long long)startExposeTimestamp;
- (void)setStartExposeTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

