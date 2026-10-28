@interface UDRChatBotResFeatureService : IUdrBizFeature
+ (BOOL)loadIdConfig:(id)arg1;
+ (BOOL)loadStringConfig:(id)arg1;
+ (BOOL)loadSvgConfig:(id)arg1;
+ (BOOL)loadImageConfig:(id)arg1;
+ (BOOL)loadOptionsConfig:(id)arg1;
+ (BOOL)loadConfig;
+ (BOOL)isResExist;
+ (void)checkRes;
+ (id)getId:(id)arg1;
+ (id)getString:(id)arg1;
+ (id)getImage:(id)arg1;
+ (id)getSvg:(id)arg1 size:(CGSize)arg2 color:(id)arg3;
+ (double)getStandardLength;
+ (void)udrPostProcess:(id)arg1;
+ (id)parseConfigJson:(id)arg1;
- (id)getProjectId;
- (BOOL)addToPeriod;
- (void)postProcess:(id)arg1;
@end
