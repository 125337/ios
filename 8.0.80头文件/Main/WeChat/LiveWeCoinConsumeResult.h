@interface LiveWeCoinConsumeResult : NSObject
{
    LiveWeCoinConsumeResultStatusBox * _status; // +0x8
    LiveWeCoinConsumeSuccessResult * _data; // +0x10
    LiveWeCoinConsumeError * _error; // +0x18
}
+ (id)makeWithStatus:(id)arg1 data:(id)arg2 error:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)status;
- (void)setStatus:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (void).cxx_destruct;
@end
