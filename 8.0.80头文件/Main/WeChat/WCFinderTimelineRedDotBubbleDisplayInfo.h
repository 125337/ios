@interface WCFinderTimelineRedDotBubbleDisplayInfo : NSObject
{
    FinderTipsShowInfo * _showInfo; // +0x8
    unsigned long long _objectId; // +0x10
    NSString * _tipsID; // +0x18
    double _showSeconds; // +0x20
    long long _bubbleType; // +0x28
    WCFinderRedDotCtrlInfo * _findEntryRedCtrlInfo; // +0x30
}
+ (id)infoWithShowInfo:(id)arg1 ctrlInfo:(id)arg2 bubbleType:(long long)arg3 showSeconds:(double)arg4;
- (id)showInfo;
- (void)setShowInfo:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)tipsID;
- (void)setTipsID:(id)arg1;
- (double)showSeconds;
- (void)setShowSeconds:(double)arg1;
- (long long)bubbleType;
- (void)setBubbleType:(long long)arg1;
- (id)findEntryRedCtrlInfo;
- (void)setFindEntryRedCtrlInfo:(id)arg1;
- (void).cxx_destruct;
@end
