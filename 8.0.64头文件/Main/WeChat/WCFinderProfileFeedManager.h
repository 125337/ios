@interface WCFinderProfileFeedManager : NSObject <WCFinderDataItemExt, WCFinderPostDataItemExt>
{
    id <WCFinderProfileFeedManagerDelegate> _delegate; // +0x8
    NSString * _username; // +0x10
    WCFinderFeedArray * _feedArray; // +0x18
    id /* block */ _feedMap; // +0x20
}
+ (id)managerWithFeedArray:(id)arg1 isAuthor:(BOOL)arg2 username:(id)arg3 feedMap:(id /* block */)arg4;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onFinderPostSessionStartUpload:(id)arg1;
- (BOOL)insertPostDataItem:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemDelete:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (id /* block */)feedMap;
- (void)setFeedMap:(id /* block */)arg1;
- (void).cxx_destruct;
@end
