@interface FlutterUserLocationRequest : NSObject
{
    long long _reqAuthScene; // +0x8
    unsigned long long _reqGeoMode; // +0x10
    id /* block */ _reqCompletion; // +0x18
}
- (id)initWithAuthScene:(long long)arg1 reqGeoMode:(unsigned long long)arg2 reqCompletion:(id /* block */)arg3;
- (long long)reqAuthScene;
- (void)setReqAuthScene:(long long)arg1;
- (unsigned long long)reqGeoMode;
- (void)setReqGeoMode:(unsigned long long)arg1;
- (id /* block */)reqCompletion;
- (void)setReqCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
