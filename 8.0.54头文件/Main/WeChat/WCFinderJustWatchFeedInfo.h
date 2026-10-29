@interface WCFinderJustWatchFeedInfo : NSObject
{
    unsigned long long _type; // +0x8
    NSString * _tid; // +0x10
    NSString * _maskTips; // +0x18
    NSString * _fullMaskTips; // +0x20
    UIImage * _maskIcon; // +0x28
    NSString * _scrollGuideTips; // +0x30
    NSString * _fullScrollGuideTips; // +0x38
    NSString * _sessionBuffer; // +0x40
    FinderPoiInteractionInfo * _fromPoiInteraction; // +0x48
}
+ (id)infoWithFeedTid:(id)arg1 sessionBuffer:(id)arg2;
+ (id)feedInfoForPoiInteraction:(id)arg1;
- (void)fillFeedUDFKVInfo:(id)arg1 forFeed:(id)arg2 isWatching:(BOOL)arg3;
- (void)fillPageReportInfo:(id)arg1;
- (id)init;
- (id)fullMaskTips;
- (id)fullScrollGuideTips;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)maskTips;
- (void)setMaskTips:(id)arg1;
- (void)setFullMaskTips:(id)arg1;
- (id)maskIcon;
- (void)setMaskIcon:(id)arg1;
- (id)scrollGuideTips;
- (void)setScrollGuideTips:(id)arg1;
- (void)setFullScrollGuideTips:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id)fromPoiInteraction;
- (void)setFromPoiInteraction:(id)arg1;
- (void).cxx_destruct;
@end

