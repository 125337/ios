@interface QBNetworkHuatuo : NSObject
{
    NSArray * _urlStringArray; // +0x8
    NSMutableArray * _QBSpeedItemArray; // +0x10
    unsigned long long _totalCount; // +0x18
    unsigned long long _finishedCount; // +0x20
    id /* block */ _completionBlock; // +0x28
}
- (id)init;
- (void)startWithCompletion:(id /* block */)arg1;
- (void)_start;
- (void)finishRecord;
- (void)cancel;
- (void).cxx_destruct;
@end

