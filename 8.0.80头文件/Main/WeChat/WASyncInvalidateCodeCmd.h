@interface WASyncInvalidateCodeCmd : WASyncBaseCmd <PBCoding>
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_cmdType;
+ (void)PBArrayAdd_squence;
+ (void)PBArrayAdd_reportId;
+ (void)PBArrayAdd_receiveCmdTimeStamp;
+ (void)initialize;
- (id)getPBPropertyTable;
@end
