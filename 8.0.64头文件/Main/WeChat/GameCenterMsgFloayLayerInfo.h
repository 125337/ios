@interface GameCenterMsgFloayLayerInfo : NSObject
{
    NSString * _url; // +0x8
    long long _floatLayerType; // +0x10
    NSArray * _wepkgIds; // +0x18
}
- (id)url;
- (void)setUrl:(id)arg1;
- (long long)floatLayerType;
- (void)setFloatLayerType:(long long)arg1;
- (id)wepkgIds;
- (void)setWepkgIds:(id)arg1;
- (void).cxx_destruct;
@end
