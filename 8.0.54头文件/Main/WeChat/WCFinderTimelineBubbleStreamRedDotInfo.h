@interface WCFinderTimelineBubbleStreamRedDotInfo : NSObject
{
    FinderSyncTipsShowInfo * _streamShowInfo; // +0x8
    DelayBubble * _finderDeleyBubble; // +0x10
    WCFinderRedDotCtrlInfo * _findEntryRedCtrlInfo; // +0x18
}
+ (id)infoWithShowInfo:(id)arg1 ctrlInfo:(id)arg2;
- (id)streamShowInfo;
- (void)setStreamShowInfo:(id)arg1;
- (id)finderDeleyBubble;
- (void)setFinderDeleyBubble:(id)arg1;
- (id)findEntryRedCtrlInfo;
- (void)setFindEntryRedCtrlInfo:(id)arg1;
- (void).cxx_destruct;
@end

