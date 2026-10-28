@interface BizPoiSelectorMgr : MMUserService <MMServiceProtocol>
{
    FlutterBrandNavigator * _flutterNavigator; // +0x8
}
- (id)createFlutterInstanceWithPoiInfo:(LaunchBizPoiSelectorInfo)arg1;
- (id)flutterNavigator;
- (void)setFlutterNavigator:(id)arg1;
- (void).cxx_destruct;
@end
