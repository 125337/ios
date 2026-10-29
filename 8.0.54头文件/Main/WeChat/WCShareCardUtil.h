@interface WCShareCardUtil : MMObject
+ (id)getUserWCShareCardRootDir;
+ (id)getWCShareCardSyncInfoPath;
+ (id)getWCShareCardDBPath;
+ (id)getWCShareCardLayoutCache;
+ (id)getWCNewShareCardLayoutCache;
+ (id)getUserNickname:(id)arg1;
+ (id)getUserRemarkname:(id)arg1;
+ (void)openShareCardEntrance;
+ (BOOL)hasOpenShareCardEntrance;
+ (BOOL)GetWCShareCardSyncInfoFileIsExist;
+ (id)genStrokeLine:(CGRect)arg1 withColor:(CGColor *)arg2;
+ (id)genLabelWithFontSize:(double)arg1 text:(id)arg2 textColor:(id)arg3 x:(double)arg4 y:(double)arg5 maxWidth:(double)arg6 superView:(id)arg7;
+ (id)genLabelWithFont:(id)arg1 text:(id)arg2 textColor:(id)arg3 x:(double)arg4 y:(double)arg5 maxWidth:(double)arg6 superView:(id)arg7;
+ (id)genButtonWithFontSize:(double)arg1 text:(id)arg2 textColor:(id)arg3 x:(double)arg4 y:(double)arg5 maxWidth:(double)arg6 superView:(id)arg7;
@end

