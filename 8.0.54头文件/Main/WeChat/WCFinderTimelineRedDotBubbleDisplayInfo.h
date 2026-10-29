@interface WCFinderTimelineRedDotBubbleDisplayInfo : NSObject
{
    FinderTipsShowInfo * _showInfo; // +0x8
    double _showSeconds; // +0x10
    long long _category; // +0x18
    WCFinderRedDotCtrlInfo * _findEntryRedCtrlInfo; // +0x20
}
+ (id)infoWithShowInfo:(id)arg1 ctrlInfo:(id)arg2 category:(long long)arg3 showSeconds:(double)arg4;
- (id)showInfo;
- (void)setShowInfo:(id)arg1;
- (double)showSeconds;
- (void)setShowSeconds:(double)arg1;
- (long long)category;
- (void)setCategory:(long long)arg1;
- (id)findEntryRedCtrlInfo;
- (void)setFindEntryRedCtrlInfo:(id)arg1;
- (void).cxx_destruct;
@end

