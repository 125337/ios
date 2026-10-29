@interface WCBrandWebUiUtil : NSObject
+ (id)genMMWebPresetUIFromMsgAppShareItem:(id)arg1 andUrl:(id)arg2;
+ (id)genMMWebPresetUIFromWCTimelineAppShareItem:(id)arg1 andUrl:(id)arg2;
+ (id)genMMWebPresetUIFromFavAppShareItem:(id)arg1 andUrl:(id)arg2;
+ (id)genMMWebPresetUIWithUrl:(id)arg1;
+ (id)genMMWebPresetUIFromIgnorableAppShareItem:(id)arg1 andUrl:(id)arg2;
+ (id)updateMPPagePresetUI:(id)arg1;
+ (id)genMMWebPresetUIWithItemShowType:(unsigned int)arg1 andUrl:(id)arg2;
+ (BOOL)canShowFullScreen:(unsigned int)arg1 andUrl:(id)arg2;
+ (BOOL)isInFullScreenUrlPrefixList:(id)arg1;
+ (BOOL)isYuanBaoURL:(id)arg1;
+ (id)updateYuanBaoMMWebPresetUI:(id)arg1;
@end
