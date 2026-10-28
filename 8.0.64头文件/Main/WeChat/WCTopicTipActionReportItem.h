@interface WCTopicTipActionReportItem : NSObject
{
    int _scene; // +0x8
    int _actiontype; // +0xc
    int _pagetype; // +0x10
    NSString * _requestid; // +0x18
    NSString * _message; // +0x20
    NSString * _appid; // +0x28
}
- (void)setReportScene:(long long)arg1;
- (id)requestid;
- (void)setRequestid:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (int)actiontype;
- (void)setActiontype:(int)arg1;
- (int)pagetype;
- (void)setPagetype:(int)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (void).cxx_destruct;
@end
