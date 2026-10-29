@interface MMFinderLiveFeedNoticeDetailBindItemContentView : UIView
{
    int _reportScene; // +0x8
    FinderLiveNoticeInfo * _notice; // +0x10
    WCFinderContact * _anchor; // +0x18
}
+ (BOOL)shouldDisplayWithAnchor:(id)arg1 notice:(id)arg2;
- (void)updateWithAnchor:(id)arg1 notice:(id)arg2;
- (id)notice;
- (void)setNotice:(id)arg1;
- (id)anchor;
- (void)setAnchor:(id)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (void).cxx_destruct;
@end
