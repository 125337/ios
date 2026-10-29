@interface TingWecoinSubscribeResult : NSObject
{
    long long _status; // +0x8
    FlutterStandardTypedData * _scheme; // +0x10
    FlutterStandardTypedData * _succHalfPanel; // +0x18
}
+ (id)makeWithStatus:(long long)arg1 scheme:(id)arg2 succHalfPanel:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (id)scheme;
- (void)setScheme:(id)arg1;
- (id)succHalfPanel;
- (void)setSuccHalfPanel:(id)arg1;
- (void).cxx_destruct;
@end

