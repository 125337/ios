@interface WCAdInteractionContentView : MMUIView
{
    id <WCAdInteractionContentViewDelegate> _delegate; // +0x8
    WCAdInteractionResourceInfo * _resourceInfo; // +0x10
    NSMutableArray * _subContentViews; // +0x18
    CAGradientLayer * _gradientLayer; // +0x20
    unsigned long long _contentStatus; // +0x28
    UITapGestureRecognizer * _tapGesture; // +0x30
    UIPanGestureRecognizer * _panGesture; // +0x38
    WCStatTimerHelper * _contentTimeHelper; // +0x40
    WCAdInteractionReportInfo * _reportInfo; // +0x48
    WCAdInteractionReportDataHandler * _customReportHandler; // +0x50
    CGPoint _panInitialCenter; // +0x58
}
+ (id)fetchContentViewForResourceInfo:(id)arg1 frame:(CGRect)arg2 delegate:(id)arg3;
- (id)initWithFrame:(CGRect)arg1 resourceInfo:(id)arg2 delegate:(id)arg3;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)fetchResourceInfoWithResourceId:(id)arg1;
- (void)insertSubContentView:(id)arg1;
- (void)removeSubContentView:(id)arg1;
- (void)initializeContentView;
- (void)initializeGesture;
- (void)updateGestureWithActionInfo:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (id)fetchDeterminationInfo;
- (BOOL)canBeClicked;
- (BOOL)canBeInteractived;
- (id)tapGesture;
- (void)handleTap:(id)arg1;
- (void)fireTapEvent;
- (CGSize)calcAvailableAverageSize;
- (void)organizeSubContentViews;
- (id)fetchFontWithSize:(double)arg1 weight:(unsigned long long)arg2;
- (void)updateProgressWith:(double)arg1;
- (BOOL)activeContentViews;
- (BOOL)suspendContentViews;
- (BOOL)terminateContentViews;
- (BOOL)didContentViewTerminate;
- (void)pauseAllAnimations;
- (void)resumeAllAnimations;
- (id)contentTimeHelper;
- (id)reportInfo;
- (void)tryToReportContentAppear;
- (void)tryToReportContentDisappear;
- (void)fetchContentReportInfoIntoDict:(id)arg1;
- (void)tryToRecordCustomReportData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)resourceInfo;
- (void)setResourceInfo:(id)arg1;
- (id)subContentViews;
- (void)setSubContentViews:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (unsigned long long)contentStatus;
- (void)setContentStatus:(unsigned long long)arg1;
- (void)setTapGesture:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (CGPoint)panInitialCenter;
- (void)setPanInitialCenter:(CGPoint)arg1;
- (void)setContentTimeHelper:(id)arg1;
- (void)setReportInfo:(id)arg1;
- (id)customReportHandler;
- (void)setCustomReportHandler:(id)arg1;
- (void).cxx_destruct;
@end

