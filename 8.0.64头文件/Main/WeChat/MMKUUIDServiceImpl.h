@interface MMKUUIDServiceImpl : NSObject <MMKUUIDService>
- (id)getUuid;
- (BOOL)adbEnable;
- (BOOL)developmentSettingEnable;
- (id)getOaid;
- (BOOL)isWechatClient;
- (id)getExtendInfo;
@end
