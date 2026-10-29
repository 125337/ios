@interface MMOpenVoiceRecordManager : MMUserService <MMServiceProtocol>
- (void)saveRecordItem:(id)arg1;
- (id)getRoomIdList:(id)arg1;
- (id)getRecordItemWithAppId:(id)arg1 roomId:(long long)arg2;
@end
