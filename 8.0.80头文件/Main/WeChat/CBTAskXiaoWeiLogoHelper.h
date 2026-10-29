@interface CBTAskXiaoWeiLogoHelper : NSObject
+ (id)askXiaoWeiLogoPAGPlayedKey;
+ (BOOL)hasPlayedAskXiaoWeiLogoPAG;
+ (void)markAskXiaoWeiLogoPAGPlayed;
+ (void)clearAskXiaoWeiLogoPAGPlayedFlag;
+ (void)applyAskXiaoWeiLogo:(id)arg1 withPAGNamed:(id)arg2;
+ (void)applyAskXiaoWeiLogoToMenuItem:(id)arg1 withPAGNamed:(id)arg2 darkPAGNamed:(id)arg3;
+ (void)applyAskXiaoWeiLogoToMenuItem:(id)arg1 withPAGNamed:(id)arg2 darkPAGNamed:(id)arg3 reportViewId:(id)arg4 reportParams:(id)arg5 reportRouteRule:(unsigned long long)arg6;
+ (id)makeAskXiaoWeiLogoViewWithBounds:(CGRect)arg1;
@end
