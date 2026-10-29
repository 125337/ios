@interface BrsResidentTemplateMsgScope : NSObject
{
    NSString * _username; // +0x8
    NSNumber * _hasSettingEntry; // +0x10
    NSNumber * _isGlobalRecv; // +0x18
    NSNumber * _isGlobalAutoNotify; // +0x20
    NSNumber * _serviceNormalMsgNotifyStatus; // +0x28
}
+ (id)makeWithUsername:(id)arg1 hasSettingEntry:(id)arg2 isGlobalRecv:(id)arg3 isGlobalAutoNotify:(id)arg4 serviceNormalMsgNotifyStatus:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)hasSettingEntry;
- (void)setHasSettingEntry:(id)arg1;
- (id)isGlobalRecv;
- (void)setIsGlobalRecv:(id)arg1;
- (id)isGlobalAutoNotify;
- (void)setIsGlobalAutoNotify:(id)arg1;
- (id)serviceNormalMsgNotifyStatus;
- (void)setServiceNormalMsgNotifyStatus:(id)arg1;
- (void).cxx_destruct;
@end
