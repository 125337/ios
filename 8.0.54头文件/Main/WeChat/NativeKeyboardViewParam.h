@interface NativeKeyboardViewParam : NSObject
{
    NSString * _viewType; // +0x8
    long long _viewId; // +0x10
    NSDictionary * _config; // +0x18
    FlutterError * _error; // +0x20
}
- (id)viewType;
- (void)setViewType:(id)arg1;
- (long long)viewId;
- (void)setViewId:(long long)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (void).cxx_destruct;
@end

