@interface NewUserGuideLogic : NSObject
{
    NSMutableDictionary * m_dicCurrentTips; // +0x8
    NewUserGuideConfig * m_config; // +0x10
}
+ (id)getConfigPath;
+ (id)loadConfig;
+ (void)removeConfig;
+ (void)saveConfig:(id)arg1;
+ (void)setReg;
+ (void)createNewUserGuide;
+ (void)loadNewUserGuide;
+ (void)removeNewUserGuide;
+ (id)shareLogic;
- (BOOL)showShakeRedDot;
- (void)removeShakeRedDot;
- (BOOL)showNearByRedDot;
- (void)removeNearByRedDot;
- (id)getConfig;
- (id)initWithConfig:(id)arg1;
- (void)removeTip:(unsigned long long)arg1;
- (BOOL)existTip:(unsigned long long)arg1;
- (BOOL)checkEnd;
- (void)makeAnimate:(id)arg1;
- (id)makeTip:(id)arg1 Left:(BOOL)arg2 Top:(BOOL)arg3 closeSel:(SEL)arg4 target:(id)arg5;
- (void)showMainFrameTip:(id)arg1 frame:(CGRect)arg2 sel:(SEL)arg3 target:(id)arg4;
- (void)removeMainFrameTip:(BOOL)arg1;
- (void)showContactsTip:(id)arg1 frame:(CGRect)arg2 sel:(SEL)arg3 target:(id)arg4;
- (void)removeContactsTip:(BOOL)arg1;
- (void)showVoiceTip:(id)arg1 frame:(CGRect)arg2 sel:(SEL)arg3 target:(id)arg4;
- (void)removeVoiceTip:(BOOL)arg1;
- (void)showVoipAndPhoneTip:(id)arg1 frame:(CGRect)arg2 sel:(SEL)arg3 target:(id)arg4;
- (void)removeVoipAndPhoneTip:(BOOL)arg1;
- (void).cxx_destruct;
@end
