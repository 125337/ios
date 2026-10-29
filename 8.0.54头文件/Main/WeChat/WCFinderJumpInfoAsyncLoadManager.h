@interface WCFinderJumpInfoAsyncLoadManager : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _records; // +0x8
}
- (id)init;
- (void)fetchJumpInfoStylesWithDataItem:(id)arg1 jumpInfo:(id)arg2 asyncLoadInfoScene:(int)arg3 commentScene:(int)arg4 config:(id)arg5 successHandler:(id /* block */)arg6 failureHandler:(id /* block */)arg7;
- (id)stylesIdentifierForStyles:(id)arg1;
- (void)notifyDidFetchJumpInfoStylesWithRecord:(id)arg1 updated:(BOOL)arg2;
- (id)recordForTid:(id)arg1;
- (id)getOrCreateRecordForTid:(id)arg1;
- (void)resetRecordForTid:(id)arg1;
- (void).cxx_destruct;
@end

