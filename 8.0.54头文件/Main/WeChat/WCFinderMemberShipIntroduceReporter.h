@interface WCFinderMemberShipIntroduceReporter : NSObject
{
    BOOL _stopReport; // +0x8
    int _scene; // +0xc
    WCFinderMembershipIntroduceViewModel * _viewModel; // +0x10
    WCFinderLiveAudienceNoticeReporter * _liveReporter; // +0x18
    NSMutableSet * _reportedElements; // +0x20
    NSMutableDictionary * _elementReportAction; // +0x28
}
- (id)initWithCommentScene:(int)arg1;
- (void)initDefaultData;
- (void)initElementReportActions;
- (void)recardElement:(unsigned int)arg1 expose:(BOOL)arg2;
- (void)cleanAll;
- (void)exposeElementAgain;
- (BOOL)stopReport;
- (void)setStopReport:(BOOL)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)liveReporter;
- (void)setLiveReporter:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)reportedElements;
- (void)setReportedElements:(id)arg1;
- (id)elementReportAction;
- (void)setElementReportAction:(id)arg1;
- (void).cxx_destruct;
@end

